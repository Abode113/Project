#include "stdafx.h"
#include "STRING.h"
#include "OneString.h"
#include "OpenGL.h"
#include<Mmsystem.h>
//PlaySound(TEXT("music.wav"), NULL, SND_FILENAME);

#include <windows.h>
#include <gl.h>
#include <glu.h>
#include <GL.h>			// Header File For The OpenGL32 Library
#include <glut.h>// Header File For The GLut32 Library

#include <math.h>
//#include <texture.h>
#include <glfw.h>
#include <fstream>

//include lib file
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glut32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"GLAUX.LIB")


#include<iostream>
#include<glaux.h>


#include <SDL.h>
#undef main
/******************************			Constructor			*************************************/
STRING::STRING(int ID, double mass, double lenght, double ForceTension, double start_x, double end_x, double start_y, double end_y, double FixedStart_x, double FixedEnd_x, double FixedStart_y, double FixedEnd_y){
	this->ID = ID;
	this->PI = 3.14;
	this->mass = mass;
	this->lenght = lenght;
	this->ForceTension = ForceTension;
	this->start_x = start_x;
	this->end_x = end_x;
	this->start_y = start_y;
	this->end_y = end_y;
	this->FixedStart_x = FixedStart_x;
	this->FixedEnd_x = FixedEnd_x;
	this->FixedStart_y = FixedStart_y;
	this->FixedEnd_y = FixedEnd_y;
	this->hight = 0.02;
	this->varHigh = 0.02;
	this->up = false;
	this->damp = 0;
	this->distance = 0.32;
	this->translate = -4.6;
	SetAcuratly(0.001);

	Set_B_GeneralDamp(1);

	/* the raduis of the string */
	this->raduis_of_string = 0.005;
	/* constant variable */
	this->Air_Etta = 0.00001832;
	/* the mass per unit of air */
	this->Air_rouu = 1.205;
	/* the mass per unit of string */
	this->String_rouu = 3.456;

	/* yong module */
	this->Yong = 31.70729304;

	initialize_arrays();
	DataMemer_ideal();
	DataMember_GeneralDamp();
	DataMember_AirDamp();
	DataMember_StringDamp();
	DataMember_SumOfDamp();

	makeVibrateReady();


}
/************************************************************************************************/
/****************************		initialize arrays		*************************************/
void STRING::initialize_arrays(){
	if ((this->start_x > 0 && this->end_x > 0) || (this->start_x < 0 && this->end_x < 0))	 this->start_and_end_x = abs(this->start_x - this->end_x);
	if ((this->start_x > 0 && this->end_x < 0) || (this->start_x < 0 && this->end_x > 0))  this->start_and_end_x = abs(this->start_x) + abs(this->end_x);
	int INT_start_and_end_x = this->start_and_end_x / accurately;
	this->yValue = new double*[INT_start_and_end_x];
	for (int i = 0; i < INT_start_and_end_x; i++){
		this->yValue[i] = new double[200];
	}
	this->yValue_GeneralDamp = new double*[INT_start_and_end_x];
	for (int i = 0; i < INT_start_and_end_x; i++){
		this->yValue_GeneralDamp[i] = new double[200];
	}
	this->yValue_AirDamp = new double*[INT_start_and_end_x];
	for (int i = 0; i < INT_start_and_end_x; i++){
		this->yValue_AirDamp[i] = new double[200];
	}
	this->yValue_StringDamp = new double*[INT_start_and_end_x];
	for (int i = 0; i < INT_start_and_end_x; i++){
		this->yValue_StringDamp[i] = new double[200];
	}
	this->yValue_SumDamp = new double*[INT_start_and_end_x];
	for (int i = 0; i < INT_start_and_end_x; i++){
		this->yValue_SumDamp[i] = new double[200];
	}
}
/************************************************************************************************/
/******************************			Data member			*************************************/
void STRING::DataMemer_ideal(){
	/*	(y2 - y1) / (x2 - x1)	*/
	this->slop = (this->end_y - this->start_y) / (this->end_x - this->start_x);
	/*	massPerUnit = mass / lenght	*/
	this->massPerUnit = this->mass / this->lenght;
	/*	velocity = (ForceTension / massPerUnit)^2	*/
	this->velocity = sqrt(this->ForceTension / this->lenght);
	/*	frequecny = velocity / (2*lenght)	*/
	this->frequency = (this->velocity / (2 * this->lenght));
	/*	W = 2 * PI * f		*/
	this->W = 2 * this->PI * this->frequency;
	/*	lambda = velocity / frequecny	*/
	this->lamda = this->velocity / this->frequency;
}
void STRING::DataMember_GeneralDamp(){
	/*	lambda ( in general damp ) = ( (1 / W)(2 * forceTension / massPerUnit)^(1 / 2) ) / ( -1+ ( 1+ ((B_damp) / (MassPerUnit * W))^(2))^(1 / 2) )^(1 / 2)			*/
	this->lambda_GeneralDamp = ((1 / this->W) * (pow((2 * this->ForceTension) / (this->massPerUnit), 0.5))) / (pow(-1 + pow(1 + pow(((this->B_GeneralDamp) / (this->massPerUnit * this->W)), 2), 0.5), 0.5));
	/*	velocity ( in general damp ) = ((2 * ForceTension) / (massPerUnit))^(1 / 2) / ( 1 + ( 1 + ((B_GeneralDamp) / (massPerUnit * W))^(2) )^(1 / 2))^(1 / 2)		*/
	this->velocity_GeneralDamp = (pow((2 * this->ForceTension) / (this->massPerUnit), 0.5)) / (pow(1 + pow(1 + pow((this->B_GeneralDamp) / (this->massPerUnit * this->W), 2), 0.5), 0.5));
	/*	frequency (in general damp) = frequency * (1 - ( (B_GeneralDamp) / (4 * PI * massPerUnit * frequency) )^(2))^(1 / 2)			*/
	this->frequency_GeneralDamp = (this->frequency) * (pow(1 - pow((this->B_GeneralDamp) / (4 * this->PI * this->massPerUnit * this->frequency), 2), 0.5));
	/*	W (in general damp) = w * (1 - ((B_GeneralDamp) / (2 * massPerUnit * W))^(2))^(1 / 2)		*/
	this->W_GeneralDamp = (this->W) * (pow(1 - pow((this->B_GeneralDamp) / (2 * this->massPerUnit * this->W), 2), 0.5));
	/*	LateTime = (1 + ((B_GeneralDamp) / (2 * massPerUnit * W))^(2))^(1 / 2)		*/
	this->LateTime_GeneralDamp = pow(1 + pow((this->B_GeneralDamp) / (2 * this->massPerUnit * this->W), 2), 0.5);
}
void STRING::DataMember_AirDamp(){
	/* Air_A_String = PI * r^(2) */
	this->Air_A_String = this->PI * pow(this->raduis_of_string, 2);
	/* constant varilble *///9.5947020119754864535123007673247
	this->Air_M = (0.5) * pow(this->raduis_of_string, 2) * ((pow(2 * this->PI, 0.5)) * ((this->frequency) / (this->Air_Etta)));
	/* constant variable */
	this->Air_delta = this->frequency * this->Air_rouu * this->Air_A_String * (((pow(2, 0.5)) / (this->Air_M)) + ((1) / (2 * pow(this->Air_M, 2))));
	/* the frequecny of string through air damping */
	this->Air_Frequency = this->frequency * (pow(1 - (pow((this->Air_delta) / (this->frequency), 0.5)), 0.5));
	/* the late time of air damping */
	this->Air_TimeLate = ((this->String_rouu) / (2 * this->PI * this->frequency * this->Air_rouu)) * ((2 * pow(this->Air_M, 2)) / ((2 * pow(2, 0.5) * this->Air_M) + 1));
	SETTT(this->raduis_of_string);
}
void STRING::DataMember_StringDamp(){
	/* the time late of string */
	this->String_TimeLate = (1 / (this->PI * this->frequency)) * this->Yong;
}
void STRING::DataMember_SumOfDamp(){
	this->SumOfDamp = pow((1 / this->LateTime_GeneralDamp) + (1 / this->Air_TimeLate) + (1 / this->String_TimeLate), -1);
}
/************************************************************************************************/
/**********************			chose which type to vibrate			*****************************/
void STRING::makeVibrateReady_ChoseType(int value){
	int INT_start_and_end_x = this->start_and_end_x / accurately;
	if (value == 0){
		this->Valueee = this->yValue;
	}
	else if (value == 1){
		this->Valueee = this->yValue_GeneralDamp;
	}
	else if (value == 2){
		this->Valueee = this->yValue_AirDamp;
	}
	else if (value == 3){
		this->Valueee = this->yValue_StringDamp;
	}
	else if (value == 4){
		this->Valueee = this->yValue_SumDamp;
	}
}
/************************************************************************************************/
/************************		draw all the line (string)		*********************************/
void STRING::drawAsLine(){
	double slop = (this->end_y - this->start_y) / (this->end_x - this->start_x);
	SetAcuratly(0.001);

	glPushMatrix();
	glBegin(GL_POINTS);
	glTranslated(0, 0, -4.2);
	glColor4f(0.95f, 0.207, 0.031f, 1.0f);
	for (double x = this->start_x; x <= end_x; x = x + accurately){
		glVertex2f(x, (slop*(x - this->start_x) + this->start_y));
	}
	glEnd();
	glPopMatrix();
}
void STRING::drawAfterNut(){
	double slop = (this->FixedEnd_y - this->FixedStart_y) / (this->FixedEnd_x - this->FixedStart_x);
	glPushMatrix();
	glBegin(GL_POINTS);
	glTranslated(0, 0, translate);
	glColor4f(0.95f, 0.207, 0.031f, 1.0f);
	for (double x = this->FixedStart_x; x <= FixedEnd_x; x = x + accurately){
		glVertex2f(x, (slop*(x - this->FixedStart_x) + this->FixedStart_y));
	}
	glEnd();
	glPopMatrix();
}
/************************************************************************************************/
/**************************			make string ready to vibrate		*************************/
void STRING::DoEveryThing(bool ideal, bool GeneralDamp, bool AirDamp, bool StringDamp){
	if (ideal){
		DataMemer_ideal();
	}
	if (GeneralDamp){
		DataMember_GeneralDamp();
	}
	if (AirDamp){
		DataMember_AirDamp();
	}
	if (StringDamp){
		DataMember_StringDamp();
 	}
	DataMember_SumOfDamp();
	makeVibrateReady();
}
void STRING::makeVibrateReady(){
	int INT_start_and_end_x = this->start_and_end_x / accurately;
	/*******************************/
	int i = 0;
	for (double x = 0; x <= this->start_and_end_x && i<INT_start_and_end_x; x = x + accurately, i++){
		this->yValue[i][0] = Set_Ak(1) * sin(((1) * this->PI*x) / (this->lenght)) * cos(((1) * this->velocity*this->PI) / (this->lenght));
	}
	i = 0;
	for (int j = 1; j < 200; j++){
		for (double x = 0; x <= this->start_and_end_x && i<INT_start_and_end_x; x = x + accurately, i++){
			this->yValue[i][j] = Set_Ak(j + 1) * sin(((j + 1) * this->PI*x) / (this->lenght)) * cos(((j + 1) * this->velocity*this->PI) / (this->lenght)) + this->yValue[i][j - 1];
		}
		i = 0;
	}
	/*******************************/
	for (int j = 1; j < 200; j++){
		for (double x = this->start_x; x <= this->end_x && i<INT_start_and_end_x; x = x + accurately){
			this->yValue[i][j] *= this->varHigh;
			i++;
		}
		if (this->up == true){
			this->varHigh += this->hight;
		}
		if (this->up == false){
			this->varHigh -= this->hight;
		}
		if (this->varHigh == -1 * this->hight){
			this->up = true;
		}
		if (this->varHigh == this->hight){
			this->up = false;
		}
		i = 0;
	}
	/*******************************/
	for (int j = 1; j < 200; j++){
		for (double x = 0; x <= this->start_and_end_x && i < INT_start_and_end_x; x = x + accurately, i++){
			this->yValue_GeneralDamp[i][j] = exp(-(1 / this->LateTime_GeneralDamp) * (1 + (j / 20))) * this->yValue[i][j];
			//this->yValue_AirDamp[i][j] = exp(-(1 / this->Air_TimeLate) * (1 + (j / 50))) * this->yValue[i][j];
			//this->yValue_StringDamp[i][j] = exp(-(1 / this->String_TimeLate) * (1 + (j / 20))) * this->yValue[i][j];
			//this->yValue_SumDamp[i][j] = exp(-(1 / this->SumOfDamp) * (1 + (j / 20))) * this->yValue[i][j];
		}
		i = 0;
	}
	for (int j = 1; j < 200; j++){
		for (double x = 0; x <= this->start_and_end_x && i < INT_start_and_end_x; x = x + accurately, i++){
			this->yValue_AirDamp[i][j] = exp(-(1 / this->Air_TimeLate) * (1 + (j / 50))) * this->yValue[i][j];
		}
		i = 0;
	}
	for (int j = 1; j < 200; j++){
		for (double x = 0; x <= this->start_and_end_x && i < INT_start_and_end_x; x = x + accurately, i++){
			this->yValue_StringDamp[i][j] = exp(-(1 / this->String_TimeLate) * (1 + (j / 20))) * this->yValue[i][j];
		}
		i = 0;
	}
	for (int j = 1; j < 200; j++){
		for (double x = 0; x <= this->start_and_end_x && i < INT_start_and_end_x; x = x + accurately, i++){
			this->yValue_SumDamp[i][j] = exp(-(1 / this->SumOfDamp) * (1 + (j / 20))) * this->yValue[i][j];
		}
		i = 0;
	}
}
double STRING::Set_Ak(int k){
	if (this->distance == 0 || this->distance == this->lenght) return 0;
	return (((2 * (this->lenght)*(this->lenght)) / ((this->lenght - this->distance)*(this->distance*this->PI*this->PI*k*k)))*(sin((k*this->distance *this->PI) / (this->lenght))));
}
/************************************************************************************************/
/**********************			draw the string while vibrating		*****************************/
void STRING::vibrateFrom0toL(int k){
	glPushMatrix();
	glBegin(GL_POINTS);
	glTranslated(0, 0, -4.2);
	glColor4f(0.95f, 0.207, 0.031f, 1.0f);
	int index = 0;
	for (double x = this->start_x; x <= this->end_x; x = x + accurately, index++){
		glVertex2f(x, this->Valueee[index][k] + (this->slop*(x - this->start_x) + this->start_y));
		if (index >= (this->start_and_end_x / accurately) - 1)break;
	}
	glEnd();
	glPopMatrix();
}
/************************************************************************************************/
/*************************		test value		*************************************************/
void STRING::SETTT(double vall){
	this->test = vall;
}
double STRING::GETTT(){
	return this->test;
}
/************************************************************************************************/
/***************************		setter		*************************************************/
void STRING::setMass(double value){
	this->mass = value;
}
void STRING::setForceTension(double value){
	this->ForceTension = value;
}
void STRING::Set_B_GeneralDamp(double value){
	this->B_GeneralDamp = value;
}
void STRING::Set_Damp(double value){
	this->damp = value;
}
void STRING::SetAcuratly(double acurate){
	accurately = acurate;
}
void STRING::SetDistance(){
	OpenGLForm::COpenGL ^ OpenGL;
	this->distance = OpenGL->getDistance();
}
void STRING::SetDistance(double value){
	this->distance = value;
}
void STRING::SetHigh(double value){
	this->hight = value;
}
void STRING::Set_B_generalDamp(double value){
	this->B_GeneralDamp = value;
}
void STRING::SetRaduisOfString(double value){
	this->raduis_of_string = value;
}
void STRING::SetAirEtta(double value){
	this->Air_Etta = value;
}
void STRING::SetAirRouu(double value){
	this->Air_rouu = value;
}
void STRING::SetStringRouu(double value){
	this->String_rouu = value;
}
void STRING::SetYongModel(double value){
	this->Yong = value;
}
/************************************************************************************************/
/***************************		getter		*************************************************/
double STRING::GetMassPerUnit(){
	return this->massPerUnit;
}
double STRING::GetVelocity(){
	return this->velocity;
}
double STRING::GetFrequency(){
	return this->frequency;
}
double STRING::GetLambda(){
	return this->lamda;
}
double STRING::GetLambda_GeneralDamp(){
	return this->lambda_GeneralDamp;
}
double STRING::GetVelocity_GeneralDamp(){
	return this->velocity_GeneralDamp;
}
double STRING::GetFrequency_GeneralDamp(){
	return this->frequency_GeneralDamp;
}
double STRING::GetTimeLate_GeneralDamp(){
	return this->LateTime_GeneralDamp;
}
double STRING::GetAir_A_String(){
	return this->Air_A_String;
}
double STRING::GetAir_M(){
	return this->Air_M;
}
double STRING::GetAir_delta(){
	return this->Air_delta;
}
double STRING::GetAir_frequency(){
	return this->Air_Frequency;
}
double STRING::GetAir_TimeLate(){
	return this->Air_TimeLate;
}
double STRING::GetStringDamp(){
	return this->String_TimeLate;
}
/************************************************************************************************/
