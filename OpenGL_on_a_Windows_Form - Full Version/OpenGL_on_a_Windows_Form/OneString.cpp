#include "stdafx.h"
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

OneString::OneString(double length, double mass, double ForceTendion){
	this->lenght = length;
	this->mass = mass;
	this->ForceTension = ForceTendion;
	this->accurately = 0.001;
	this->PI = 3.14;
	translate = -4.6;
	DataMember();
	this->machineFrequency = 30;
	this->Ymax = 0.5;
	machine();
}
void OneString::InitailizeFixedEndArray(){
	int demension = this->lenght / this->accurately;
	this->yvalue = new double[demension];
}
void OneString::InitailizeFreeEndArray(){
	int demension = this->lenght / this->accurately;
	this->yvaluee = new double[demension];
}
void OneString::setFixedEndArray(){
	int i = 0;
	for (double x = 0; x < this->lenght; x += this->accurately){
		this->yvalue[i++] = 2 * this->Ymax * sin((2 * this->PI * x) / (this->waveLenghtOfMachine));
	}
}
void OneString::setFreeEndArray(){
	int i = 0;
	for (double x = 0; x < this->lenght; x += this->accurately){
		this->yvaluee[i++] = 2 * this->Ymax * cos((2 * this->PI * x) / (this->waveLenghtOfMachine));
	}
}
void OneString::DataMember(){
	/*	massPerUnit = mass / lenght	*/
	this->massPerUnit = this->mass / this->lenght;
	/*	velocity = (forceTension / massPerUnit)^(1/2)	*/
	this->velocity = pow(this->ForceTension / this->massPerUnit, 0.5);
	/*	firstFrequency = (velocity) / (2 * lenght)	*/
	this->frequency = (this->velocity) / (2 * this->lenght);
	/*	waveLenght = velocity / lenght	*/
	this->waveLenght = this->velocity / this->frequency;
}
void OneString::drawOneLine(){
	glPushMatrix();
	glBegin(GL_POINTS);
	glTranslated(0, 0, translate);
	glColor4f(0.95f, 0.207, 0.031f, 1.0f);
	int i = 0;
	double val = this->lenght - 2.5;
	for (double x = -2.5; x < val; x += this->accurately){
		glVertex2f(x, 0);
	}
	glEnd();
	glPopMatrix();
}
void OneString::ChoseArray(bool Fixed){
	if (Fixed){
		yvalueToDraw = yvalue;
	}
	else if (!Fixed){
		yvalueToDraw = yvaluee;
	}
}
void OneString::machine(){
	InitailizeFreeEndArray();
	InitailizeFixedEndArray();
	this->waveLenghtOfMachine = this->velocity / this->machineFrequency;
	this->numberOfWave = (this->lenght) / (this->waveLenghtOfMachine);
	setFixedEndArray();
	setFreeEndArray();
	knowNumberOfZeroPointAndHighPoint();
}
void OneString::vibrate(double k, bool FixedEnd){
	double valueToAdd;
	if (FixedEnd){
		valueToAdd = sin(2 * this->PI * this->frequency * k);
		glBegin(GL_LINES);
		glTranslated(0, 0, translate);
		glColor4f(0.0f, 0.0, 0.0f, 0.0f);
		glVertex2f(this->lenght - 2.5 - this->accurately, -0.5);
		glVertex2f(this->lenght - 2.5 - this->accurately, 0.5);
		glEnd();
	}
	else if (!FixedEnd){
		valueToAdd = cos(2 * this->PI * this->frequency * k);
	}
	glPushMatrix();
	glBegin(GL_POINTS);
	glTranslated(0, 0, translate);
	glColor4f(0.95f, 0.207, 0.031f, 1.0f);
	int i = (this->lenght / this->accurately) -1;
	double val = this->lenght - 2.5 - this->accurately;
	for (double x = -2.5; x <= val; x += this->accurately){
		glVertex2f(x, this->yvalueToDraw[i--] * valueToAdd);
	}SETT(i);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glBegin(GL_LINES);
	glTranslated(0, 0, translate);
	glColor4f(0.0f, 0.0, 0.0f, 0.0f);
	int number = (this->lenght / this->accurately) - 1;
	glVertex2f(-2.8, this->yvalueToDraw[number] * valueToAdd);
	glVertex2f(-2.5, this->yvalueToDraw[number] * valueToAdd);
	glEnd();
	glPopMatrix();
}
void OneString::SETT(double value){
	this->testvalue = value;
}
double OneString::GETT(){
	return this->testvalue;
}
void OneString::setTranslate(double value){
	this->translate = value;
}
void OneString::SetForceTension(double value){
	this->ForceTension = value;
}
void OneString::SetMass(double value){
	this->mass = value;
}
void OneString::SetLenght(double value){
	this->lenght = value;
}
void OneString::SetYmax(double value){
	this->Ymax = value;
}
void OneString::SetMachineFrequency(double value){
	this->machineFrequency = value;
}
void OneString::knowNumberOfZeroPointAndHighPoint(){
	double temp = this->numberOfWave * 2;
	double temp1 = floor(temp);
	double temp2 = temp - temp1;
	if (temp2 >= 0.5){
		this->numberOfHighPoint = temp1;
	}
	else {
		this->numberOfHighPoint = temp1 - 1;
	}
	this->numberOfZeroPoint = temp1;
}
double OneString::getMassPerUnit(){
	return this->massPerUnit;
}
double OneString::getVelocity(){
	return this->velocity;
}
double OneString::getFrequency(){
	return this->frequency;
}
double OneString::getWaveLenght(){
	return this->waveLenghtOfMachine;
}
double OneString::getNumberOfWaves(){
	return this->numberOfWave;
}
double OneString::getFrequencyMachine(){
	return this->machineFrequency;
}
double OneString::getLength(){
	return this->lenght;
}
int OneString::getnumberOfZeroPoint(){
	return this->numberOfZeroPoint;
}
int OneString::getnumberOfHighPoint(){
	return this->numberOfHighPoint;
}
double OneString::FixedEndZeroPoint_FreeEndHighPoint(int value){
	value = this->numberOfZeroPoint - value + 1;
	return this->lenght - (value * (this->waveLenghtOfMachine / 2));
}
double OneString::FixedEndhighPoint_FreeEndZeroPoint(int value){
	value = this->numberOfHighPoint - value;
	return this->lenght - ((2 * value + 1) * (this->waveLenghtOfMachine / 4));
}
