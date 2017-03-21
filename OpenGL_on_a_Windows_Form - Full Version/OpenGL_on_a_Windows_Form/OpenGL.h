#pragma once

#include <windows.h>
#include <gl.h>
#include <glu.h>
#include "STRING.h"
#include "OneString.h"
#include<Mmsystem.h>
//PlaySound(TEXT("music.wav"), NULL, SND_FILENAME);

#include <GL.h>			// Header File For The OpenGL32 Library
#include <glut.h>// Header File For The GLut32 Library
#include <fstream>
#include <math.h>
#include <texture.h>

#include <glfw.h>

//include lib file
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glut32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"GLAUX.LIB")


#include<iostream>
#include<glaux.h>

#include<Mmsystem.h>
//PlaySound(TEXT("music.wav"), NULL, SND_FILENAME);

#include <SDL.h>
#undef main

using namespace System::Windows::Forms;

namespace OpenGLForm
{
	public ref class COpenGL : public System::Windows::Forms::NativeWindow
	{
	public:
		//	Global variable
		int Number_of_string;	// to give the string the Id
		float Y0;				// string amblitude
		float Increase_x;	// how much accurate 

		bool static string1 = true;
		bool static string2 = true;
		bool static string3 = true;
		bool static string4 = true;
		bool static string5 = true;
		bool static string6 = true;
		int static k = 1;

		STRING ^stringObject1;
		STRING ^stringObject2;
		STRING ^stringObject3;
		STRING ^stringObject4;
		STRING ^stringObject5;
		STRING ^stringObject6;

		OneString ^OneStringObject;

		static double Distance = 0.32;
		double screen, screen2;

		COpenGL(System::Windows::Forms::Form ^ parentForm, GLsizei iWidth, GLsizei iHeight)
		{
			CreateParams^ cp = gcnew CreateParams;
			//STRING					(ID,	mass,	lenght, ForceTension,	start_x,	end_x,	start_y,	end_y,	FixedStart_x,	FixedEnd_x, FixedStart_y,	FixedEnd_y)
			stringObject1 = gcnew STRING(1,		0.01,	0.64,	33,				-2.84,		1.87,	0.344,		0.25,	1.87,			2.2,		0.25,			0.28);
			stringObject2 = gcnew STRING(2,		0.01,	0.64,	33,				-2.84,		1.87,	0.25,		0.20,	1.87,			2.435,		0.20,			0.28);
			stringObject3 = gcnew STRING(3,		0.01,	0.64,	33,				-2.84,		1.87,	0.145,		0.15,	1.87,			2.65,		0.15,			0.3);
			stringObject4 = gcnew STRING(4,		0.01,	0.64,	33,				-2.84,		1.87,	0.06,		0.1,	1.87,			2.65,		0.1,			-0.03);
			stringObject5 = gcnew STRING(5,		0.01,	0.64,	33,				-2.84,		1.87,	-0.04,		0.05,	1.87,			2.435,		0.05,			-0.025);
			stringObject6 = gcnew STRING(6,		0.01,	0.64,	33,				-2.84,		1.87,	-0.13,		0.00,	1.87,			2.2,		0.0,			-0.02);

			//OneString(double length, double mass, double ForceTendion)
			OneStringObject = gcnew OneString(1, 0.01, 33);
			//OneStringObject->machine(57.445626473802, 0.5);

			Distance = 0.32;
			screen = -4.5;
			screen2 = -4.6;

			// Set the position on the form
			cp->X = 0;
			cp->Y = 0;
			cp->Height = iHeight;
			cp->Width = iWidth;

			// Specify the form as the parent.
			cp->Parent = parentForm->Handle;

			// Create as a child of the specified parent and make OpenGL compliant (no clipping)
			cp->Style = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;

			// Create the actual window
			this->CreateHandle(cp);

			m_hDC = GetDC((HWND)this->Handle.ToPointer());

			if (m_hDC)
			{
				MySetPixelFormat(m_hDC);
				ReSizeGLScene(iWidth, iHeight);
				InitGL();
			}

			rtri = 0.0f;
			rquad = 0.0f;
		}
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/***************************************		one String ( machine )		********************************************/
		/**************************	 	 complete the vibrate equation		*******************************/
		void machine(){
			OneStringObject->machine();
		}
		/**************************************************************************************************/
		/******************	 	 assign Data member after change value		*******************************/
		void DataMember(){
			OneStringObject->DataMember();
		}
		/**************************************************************************************************/
		/******************	 	 initailize array after change value		*******************************/
		void initializeArrayOfMachine(){
			OneStringObject->InitailizeFixedEndArray();
			OneStringObject->InitailizeFreeEndArray();
		}
		/**************************************************************************************************/
		/******************************	 	 to vibrate the string		***********************************/
		void vibrate(double timeCount, bool FixedEnd){
			glPushMatrix();
			glTranslated(0, 0, screen2);
			OneStringObject->vibrate(timeCount, FixedEnd);
			glPopMatrix();
		}
		/**************************************************************************************************/
		/******************************	 	 to draw string as line		***********************************/
		void drawOneLine(){
			glPushMatrix();
			glTranslated(0, 0, screen2);
			OneStringObject->drawOneLine();
			glPopMatrix();
		}
		/**************************************************************************************************/
		/**************	 	 Chose type of vibrate ( FixedEnd Or FreeEnd)		***************************/
		void choseType(bool FixedEnd){
			OneStringObject->ChoseArray(FixedEnd);
		}
		/**************************************************************************************************/
		/**********************************	 	 tester		***********************************************/
		double GETT(){
			return OneStringObject->GETT();
		}
		/**************************************************************************************************/
		/**********************************	 	 setter		***********************************************/
		void SetForceTensionOfMachine(double value){
			OneStringObject->SetForceTension(value);
		}
		void SetMassOfMachine(double value){
			OneStringObject->SetMass(value);
		}
		void SetLengthOfMachine(double value){
			OneStringObject->SetLenght(value);
		}
		void SetYmaxOfMachine(double value){
			OneStringObject->SetYmax(value);
		}
		void SetFrequencyOfMachine(double value){
			OneStringObject->SetMachineFrequency(value);
		}
		/**************************************************************************************************/
		/**********************************	 	 getter		***********************************************/
		double getMassPerUnitMachine(){
			return OneStringObject->getMassPerUnit();
		}
		double getVelocityMachine(){
			return OneStringObject->getVelocity();
		}
		double getFrequencyMachine(){
			return OneStringObject->getFrequency();
		}
		double getWaveLenghtMachine(){
			return OneStringObject->getWaveLenght();
		}
		double getNumberOfWavesMachine(){
			return OneStringObject->getNumberOfWaves();
		}
		double getFrequencyMachineMachine(){
			return OneStringObject->getFrequencyMachine();
		}
		double getLengthMachine(){
			return OneStringObject->getLength();
		}
		int getnumberOfZeroPointMachine(){
			return OneStringObject->getnumberOfZeroPoint();
		}
		int getnumberOfHighPointMachine(){
			return OneStringObject->getnumberOfHighPoint();
		}
		double FixedEndZeroPoint_FreeEndHighPointMachine(int value){
			return OneStringObject->FixedEndZeroPoint_FreeEndHighPoint(value);
		}
		double FixedEndhighPoint_FreeEndZeroPointMachine(int value){
			return OneStringObject->FixedEndhighPoint_FreeEndZeroPoint(value);
		}
		/**************************************************************************************************/
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/********************************************		Guitar String 		************************************************/
		/***************		to make strings ready to vibrate (initailize the arrays)		***********/
		void changeReady(bool ideal, bool GeneralDamp, bool AirDamp, bool StringDamp){
			stringObject1->DoEveryThing(ideal, GeneralDamp, AirDamp, StringDamp);
			stringObject2->DoEveryThing(ideal, GeneralDamp, AirDamp, StringDamp);
			stringObject3->DoEveryThing(ideal, GeneralDamp, AirDamp, StringDamp);
			stringObject4->DoEveryThing(ideal, GeneralDamp, AirDamp, StringDamp);
			stringObject5->DoEveryThing(ideal, GeneralDamp, AirDamp, StringDamp);
			stringObject6->DoEveryThing(ideal, GeneralDamp, AirDamp, StringDamp);
		}
		/**************************************************************************************************/
		/***************************		 draw the string		***************************************/
		void drawAllLine(){
			if (string1 == true){
				stringObject1->drawAsLine();
			}
			if (string2 == true){
				stringObject2->drawAsLine();
			}
			if (string3 == true){
				stringObject3->drawAsLine();
			}
			if (string4 == true){
				stringObject4->drawAsLine();
			}
			if (string5 == true){
				stringObject5->drawAsLine();
			}
			if (string6 == true){
				stringObject6->drawAsLine();
			}
		}
		void drawAfterNut(){
			stringObject1->drawAfterNut();
			stringObject2->drawAfterNut();
			stringObject3->drawAfterNut();
			stringObject4->drawAfterNut();
			stringObject5->drawAfterNut();
			stringObject6->drawAfterNut();
		}
		/**************************************************************************************************/
		/**********************	 	 to controlle wiche string will vibrate		***************************/
		void vibrateLine(int ID, int k, int damp){
			glLoadIdentity();
			glPushMatrix();
			glTranslated(0, 0, -4);
			if (ID == 1){
				stringObject1->makeVibrateReady_ChoseType(damp);
				stringObject1->vibrateFrom0toL(k);
			}
			else if (ID == 2){
				stringObject2->makeVibrateReady_ChoseType(damp);
				stringObject2->vibrateFrom0toL(k);
			}
			else if (ID == 3){
				stringObject3->makeVibrateReady_ChoseType(damp);
				stringObject3->vibrateFrom0toL(k);
			}
			else if (ID == 4){
				stringObject4->makeVibrateReady_ChoseType(damp);
				stringObject4->vibrateFrom0toL(k);
			}
			else if (ID == 5){
				stringObject5->makeVibrateReady_ChoseType(damp);
				stringObject5->vibrateFrom0toL(k);
			}
			else if (ID == 6){
				stringObject6->makeVibrateReady_ChoseType(damp);
				stringObject6->vibrateFrom0toL(k);
			}
			glPopMatrix();
		}
		/**************************************************************************************************/
		/**************************		 test value		***************************************************/
		double gettest(){
			return stringObject1->GETTT();
		}
		double getAkkk(){
			return -1;
			//return stringObject1->Set_Ak(1);
		}
		/**************************************************************************************************/
		/*************************		Setter		*********************************************************/
		void setMass(double value){
			stringObject1->setMass(value);
			stringObject2->setMass(value);
			stringObject3->setMass(value);
			stringObject4->setMass(value);
			stringObject5->setMass(value);
			stringObject6->setMass(value);
		}
		void setForceTension(double value){
			stringObject1->setForceTension(value);
			stringObject2->setForceTension(value);
			stringObject3->setForceTension(value);
			stringObject4->setForceTension(value);
			stringObject5->setForceTension(value);
			stringObject6->setForceTension(value);
		}
		void SetDistance(double tracBarValue){
			Distance = tracBarValue;
			stringObject1->SetDistance(tracBarValue);
			stringObject2->SetDistance(tracBarValue);
			stringObject3->SetDistance(tracBarValue);
			stringObject4->SetDistance(tracBarValue);
			stringObject5->SetDistance(tracBarValue);
			stringObject6->SetDistance(tracBarValue);
		}
		void SetHigh(double value){
			stringObject1->SetHigh(value);
			stringObject2->SetHigh(value);
			stringObject3->SetHigh(value);
			stringObject4->SetHigh(value);
			stringObject5->SetHigh(value);
			stringObject6->SetHigh(value);
		}
		void Set_B_generalDamp(double value){
			stringObject1->Set_B_GeneralDamp(value);
			stringObject2->Set_B_GeneralDamp(value);
			stringObject3->Set_B_GeneralDamp(value);
			stringObject4->Set_B_GeneralDamp(value);
			stringObject5->Set_B_GeneralDamp(value);
			stringObject6->Set_B_GeneralDamp(value);
		}
		void SetRaduisOfString(double value){
			stringObject1->SetRaduisOfString(value);
			stringObject2->SetRaduisOfString(value);
			stringObject3->SetRaduisOfString(value);
			stringObject4->SetRaduisOfString(value);
			stringObject5->SetRaduisOfString(value);
			stringObject6->SetRaduisOfString(value);
		}
		void SetAirEtta(double value){
			stringObject1->SetAirEtta(value);
			stringObject2->SetAirEtta(value);
			stringObject3->SetAirEtta(value);
			stringObject4->SetAirEtta(value);
			stringObject5->SetAirEtta(value);
			stringObject6->SetAirEtta(value);
		}
		void SetAirRouu(double value){
			stringObject1->SetAirRouu(value);
			stringObject2->SetAirRouu(value);
			stringObject3->SetAirRouu(value);
			stringObject4->SetAirRouu(value);
			stringObject5->SetAirRouu(value);
			stringObject6->SetAirRouu(value);
		}
		void SetStringRouu(double value){
			stringObject1->SetStringRouu(value);
			stringObject2->SetStringRouu(value);
			stringObject3->SetStringRouu(value);
			stringObject4->SetStringRouu(value);
			stringObject5->SetStringRouu(value);
			stringObject6->SetStringRouu(value);
		}
		void SetYongModel(double value){
			stringObject1->SetYongModel(value);
			stringObject2->SetYongModel(value);
			stringObject3->SetYongModel(value);
			stringObject4->SetYongModel(value);
			stringObject5->SetYongModel(value);
			stringObject6->SetYongModel(value);
		}
		/**************************************************************************************************/
		/***********************************		getter  		***************************************/
		double getDistance(){
			return Distance;
		}
		double GetMassPerUnit(){
			return stringObject1->GetMassPerUnit();
		}
		double GetVelocity(){
			return stringObject1->GetVelocity();
		}
		double GetFrequency(){
			return stringObject1->GetFrequency();
		}
		double GetLambda(){
			return stringObject1->GetLambda();
		}
		double GetLambda_GeneralDamp(){
			return stringObject1->GetLambda_GeneralDamp();
		}
		double GetVelocity_GeneralDamp(){
			return stringObject1->GetVelocity_GeneralDamp();
		}
		double GetFrequency_GeneralDamp(){
			return stringObject1->GetFrequency_GeneralDamp();
		}
		double GetTimeLate_GeneralDamp(){
			return stringObject1->GetLambda_GeneralDamp();
		}
		double GetAir_A_String(){
			return stringObject1->GetAir_A_String();
		}
		double GetAir_M(){
			return stringObject1->GetAir_M();
		}
		double GetAir_delta(){
			return stringObject1->GetAir_delta();
		}
		double GetAir_frequency(){
			return stringObject1->GetAir_frequency();
		}
		double GetAir_TimeLate(){
			return stringObject1->GetAir_TimeLate();
		}
		double GetStringDamp(){
			return stringObject1->GetStringDamp();
		}
		/**************************************************************************************************/
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/***********************************************************************************************************************/
		/**************************************************************************************************/
		/**********************		to change view between guitar and machine		***********************/
		void change_view(bool choise){
			if (choise == true){	//	guitar
				screen = -4.5;
				screen2 = -4.6;
				OneStringObject->setTranslate(-4.6);
			}
			if (choise == false){	//	one string
				screen = -3.9;
				screen2 = -3.8;
				OneStringObject->setTranslate(-3.8);
			}
		}
		/**************************************************************************************************/
		/*******************************		Cover		***********************************************/
		void DrawCover(int Cover_Number){

			glPushMatrix();
			glPushMatrix();
			glColor3d(255, 255, 255);
			glTranslated(0, 0, screen);
			glBegin(GL_QUADS);
			glVertex2d(5, -5);
			glVertex2d(5, 5);
			glVertex2d(-5, 5);
			glVertex2d(-5, -5);

			glEnd();

			glPopMatrix();
			glPushMatrix();

			glTranslated(0, 0, -4.3);
			glBindTexture(GL_TEXTURE_2D, Cover_Number);
			glRotated(8.65, 0, 0, -1);
			glBegin(GL_QUADS);

			glTexCoord2d(1, 0);
			glVertex2d(3.2, -2.5);

			glTexCoord2d(1, 1);
			glVertex2d(3.2, 1.7);

			glTexCoord2d(0, 1);
			glVertex2d(-4.4, 1.7);

			glTexCoord2d(0, 0);
			glVertex2d(-4.4, -2.5);

			glEnd();

			glPopMatrix();
			glPopMatrix();
		}
		/**************************************************************************************************/
		/*******************************		render the view of line		*******************************/
		System::Void Render(System::Void)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear screen and depth buffer
			glLoadIdentity();									// Reset the current modelview matrix
			glPushMatrix();
			glTranslated(0, 0, -4);
			drawAllLine();
			drawAfterNut();
			glPopMatrix();

		}
		/**************************************************************************************************/
		System::Void SwapOpenGLBuffers(System::Void)
		{
			SwapBuffers(m_hDC);
		}
		int get_Image_one_Number(){
			return Image_one_Number;
		}
	private:
		int Image_one_Number;

		HDC m_hDC;
		HGLRC m_hglrc;
		GLfloat	rtri;				// Angle for the triangle
		GLfloat	rquad;				// Angle for the quad

	protected:
		~COpenGL(System::Void)
		{
			this->DestroyHandle();
		}

		GLint MySetPixelFormat(HDC hdc)
		{
			static	PIXELFORMATDESCRIPTOR pfd =				// pfd Tells Windows How We Want Things To Be
			{
				sizeof(PIXELFORMATDESCRIPTOR),				// Size Of This Pixel Format Descriptor
				1,											// Version Number
				PFD_DRAW_TO_WINDOW |						// Format Must Support Window
				PFD_SUPPORT_OPENGL |						// Format Must Support OpenGL
				PFD_DOUBLEBUFFER,							// Must Support Double Buffering
				PFD_TYPE_RGBA,								// Request An RGBA Format
				16,										// Select Our Color Depth
				0, 0, 0, 0, 0, 0,							// Color Bits Ignored
				0,											// No Alpha Buffer
				0,											// Shift Bit Ignored
				0,											// No Accumulation Buffer
				0, 0, 0, 0,									// Accumulation Bits Ignored
				16,											// 16Bit Z-Buffer (Depth Buffer)  
				0,											// No Stencil Buffer
				0,											// No Auxiliary Buffer
				PFD_MAIN_PLANE,								// Main Drawing Layer
				0,											// Reserved
				0, 0, 0										// Layer Masks Ignored
			};

			GLint  iPixelFormat;

			// get the device context's best, available pixel format match 
			if ((iPixelFormat = ChoosePixelFormat(hdc, &pfd)) == 0)
			{
				MessageBox::Show("ChoosePixelFormat Failed");
				return 0;
			}

			// make that match the device context's current pixel format 
			if (SetPixelFormat(hdc, iPixelFormat, &pfd) == FALSE)
			{
				MessageBox::Show("SetPixelFormat Failed");
				return 0;
			}

			if ((m_hglrc = wglCreateContext(m_hDC)) == NULL)
			{
				MessageBox::Show("wglCreateContext Failed");
				return 0;
			}

			if ((wglMakeCurrent(m_hDC, m_hglrc)) == NULL)
			{
				MessageBox::Show("wglMakeCurrent Failed");
				return 0;
			}


			return 1;
		}
		//int Image_one_Number;
		bool InitGL(GLvoid)										// All setup for opengl goes here
		{
			// Initialisation went ok
			glEnable(GL_POINT_SMOOTH);
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glPointSize(1.5);


			glShadeModel(GL_SMOOTH);							// Enable Smooth Shading
			glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Black Background
			glClearDepth(1.0f);									// Depth Buffer Setup
			glEnable(GL_DEPTH_TEST);							// Enables Depth Testing
			glDepthFunc(GL_LEQUAL);								// The Type Of Depth Testing To Do
			glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really Nice Perspective Calculations	



			glEnable(GL_TEXTURE_2D);

			Image_one_Number = LoadTexture("777.bmp", 255);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);



			return TRUE;
		}

		GLvoid ReSizeGLScene(GLsizei width, GLsizei height)		// Resize and initialise the gl window
		{
			if (height == 0)										// Prevent A Divide By Zero By
			{
				height = 1;										// Making Height Equal One
			}

			glViewport(0, 0, width, height);						// Reset The Current Viewport

			glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
			glLoadIdentity();									// Reset The Projection Matrix

			// Calculate The Aspect Ratio Of The Window
			gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);

			glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
			glLoadIdentity();									// Reset The Modelview Matrix
		}
	};
}