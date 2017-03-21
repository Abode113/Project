#pragma once

#include "OpenGL.h"
#include "OneString.h"
#include<Mmsystem.h>
//PlaySound(TEXT("music.wav"), NULL, SND_FILENAME);

namespace OpenGL_on_a_Windows_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenGLForm;



	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int static k = 1;
		bool stopMachine;
	public: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public:

	public:

		int vibratetheID;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton27;
	private: System::Windows::Forms::RadioButton^  radioButton26;
	private: System::Windows::Forms::RadioButton^  radioButton25;
	private: System::Windows::Forms::RadioButton^  radioButton24;
	private: System::Windows::Forms::RadioButton^  radioButton23;
	private: System::Windows::Forms::RadioButton^  radioButton22;
	private: System::Windows::Forms::RadioButton^  radioButton21;
	private: System::Windows::Forms::RadioButton^  radioButton20;
	private: System::Windows::Forms::RadioButton^  radioButton19;
	private: System::Windows::Forms::RadioButton^  radioButton18;
	private: System::Windows::Forms::RadioButton^  radioButton17;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton14;


	private: System::Windows::Forms::RadioButton^  radioButton11;

	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	public:


	public:




		int harmonic;
	private: System::Windows::Forms::Button^  button11;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Button^  button13;
	private:
	public: System::Windows::Forms::Button^  button12;

	public:

	public:

	public:
		int damp;
		bool FixedEnd;
	public: System::Windows::Forms::Button^  button14;
	public:
	public: System::Windows::Forms::Button^  button15;
	public: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox7;
	public: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label15;
	public:

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;

public: System::Windows::Forms::Button^  button18;
private:
private: System::Windows::Forms::Label^  label75;
public:
private: System::Windows::Forms::Label^  label76;
public: System::Windows::Forms::Button^  button19;
private:

public:
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
public: System::Windows::Forms::Button^  button20;
private:

public:
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
public: System::Windows::Forms::Button^  button21;
private:

public:
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;

	private:
	public:

			 double timeCount;
			 Form1(void)
			 {
				 InitializeComponent();
				 //
				 //TODO: Add the constructor code here
				 //
				 vibratetheID = 0;
				 harmonic = 1;
				 damp = 0;
				 timeCount = 0;
				 stopMachine = true;
				 FixedEnd = true;
				 OpenGL = gcnew COpenGL(this, 1200, 680);////////
				 outValueGuitar();
				 outValueMachine();
				 setValue();
			 }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:
	private: System::Windows::Forms::Timer^  timer1;
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TrackBar^  trackBar1;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		OpenGLForm::COpenGL ^ OpenGL;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1097, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Guitar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(890, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Set the Distance";
			this->label1->Visible = false;
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(3, 6);
			this->trackBar1->Maximum = 64;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(86, 45);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Value = 32;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar1_ValueChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1172, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(101, 690);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(93, 664);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(14, 168);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(63, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"حنين مسعود";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(15, 146);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(62, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"زكريا الشيخ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(12, 124);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"محمد عيد التل";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(-3, 101);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"عبد الرحمن الحوراني";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(15, 74);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"إعداد الطلاب";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"إشراف المهندس";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(19, 29);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"فراس سلمان";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(-3, 640);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"عبد الرحمن الحوراني";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 621);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(85, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ptoject Maneger";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(93, 664);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(12, 343);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 26;
			this->button17->Text = L"Submit";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(14, 317);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(67, 20);
			this->textBox7->TabIndex = 25;
			this->textBox7->Text = L"30";
			this->textBox7->Visible = false;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(14, 301);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Frequency";
			this->label11->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(14, 278);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 20);
			this->textBox6->TabIndex = 23;
			this->textBox6->Text = L"0.5";
			this->textBox6->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(9, 467);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(78, 191);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"vibrate type";
			// 
			// radioButton5
			// 
			this->radioButton5->Location = System::Drawing::Point(3, 137);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(69, 36);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Sum All Damp";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->Location = System::Drawing::Point(3, 99);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(69, 36);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"String Damp";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->Location = System::Drawing::Point(3, 76);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(69, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Air Damp";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Location = System::Drawing::Point(3, 40);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 30);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"General Damp";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(3, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 15);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ideal";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(14, 262);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Ymax";
			this->label10->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(14, 238);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(67, 20);
			this->textBox5->TabIndex = 21;
			this->textBox5->Text = L"1";
			this->textBox5->Visible = false;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(9, 451);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"0";
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(14, 222);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Lenght";
			this->label9->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 438);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Wave Lenght";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(14, 201);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"0.01";
			this->textBox4->Visible = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 412);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Stop All";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(14, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 11);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Mass";
			this->label8->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 20);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"33";
			this->textBox3->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 383);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Vibrate 6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(14, 150);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 11);
			this->label7->TabIndex = 16;
			this->label7->Text = L"ForceTension";
			this->label7->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 354);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Vibrate 5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(9, 111);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Free End";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 296);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Vibrate 3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(9, 83);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Fixed End";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Vibrate 4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(9, 54);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Stop";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Vibrate 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Vibrate 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->trackBar1);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(93, 664);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(3, 490);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(81, 20);
			this->textBox14->TabIndex = 28;
			this->textBox14->Text = L"31.70729304";
			// 
			// label30
			// 
			this->label30->Location = System::Drawing::Point(4, 470);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(83, 17);
			this->label30->TabIndex = 27;
			this->label30->Text = L"Yong Module";
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(2, 453);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(83, 17);
			this->label29->TabIndex = 26;
			this->label29->Text = L"String Damp";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(3, 430);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(81, 20);
			this->textBox13->TabIndex = 25;
			this->textBox13->Text = L" 3.456";
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(6, 410);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(83, 17);
			this->label28->TabIndex = 24;
			this->label28->Text = L"String Rouu";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(3, 387);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(81, 20);
			this->textBox12->TabIndex = 23;
			this->textBox12->Text = L"1.205";
			// 
			// label27
			// 
			this->label27->Location = System::Drawing::Point(5, 367);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 17);
			this->label27->TabIndex = 22;
			this->label27->Text = L"Air Rouu";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(3, 344);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(81, 20);
			this->textBox11->TabIndex = 21;
			this->textBox11->Text = L"0.00001832";
			// 
			// label26
			// 
			this->label26->Location = System::Drawing::Point(5, 324);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(83, 17);
			this->label26->TabIndex = 20;
			this->label26->Text = L"Air Etta";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(3, 300);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(81, 20);
			this->textBox10->TabIndex = 19;
			this->textBox10->Text = L"0.005";
			// 
			// label25
			// 
			this->label25->Location = System::Drawing::Point(4, 280);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 17);
			this->label25->TabIndex = 18;
			this->label25->Text = L"Raduis of String";
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(4, 263);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(83, 17);
			this->label24->TabIndex = 17;
			this->label24->Text = L"Air Damp";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(5, 240);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(81, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->Text = L" 1";
			// 
			// label23
			// 
			this->label23->Location = System::Drawing::Point(4, 220);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(83, 17);
			this->label23->TabIndex = 15;
			this->label23->Text = L"B Const";
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(3, 203);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(83, 17);
			this->label22->TabIndex = 14;
			this->label22->Text = L"General Damp";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(6, 180);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(81, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"0.02";
			// 
			// label21
			// 
			this->label21->Location = System::Drawing::Point(5, 160);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(83, 17);
			this->label21->TabIndex = 12;
			this->label21->Text = L"High";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L" 33";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(2, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"032";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(5, 516);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 6;
			this->button10->Text = L"Submit";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(4, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Mass";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L" 0.01";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(5, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Force Tension";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(893, 98);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 7;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(893, 69);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 6;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1016, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Machine";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(893, 40);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Submit";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton27);
			this->groupBox2->Controls->Add(this->radioButton26);
			this->groupBox2->Controls->Add(this->radioButton25);
			this->groupBox2->Controls->Add(this->radioButton24);
			this->groupBox2->Controls->Add(this->radioButton23);
			this->groupBox2->Controls->Add(this->radioButton22);
			this->groupBox2->Controls->Add(this->radioButton21);
			this->groupBox2->Controls->Add(this->radioButton20);
			this->groupBox2->Controls->Add(this->radioButton19);
			this->groupBox2->Controls->Add(this->radioButton18);
			this->groupBox2->Controls->Add(this->radioButton17);
			this->groupBox2->Controls->Add(this->radioButton16);
			this->groupBox2->Controls->Add(this->radioButton15);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Location = System::Drawing::Point(426, 645);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(746, 47);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"harmonic";
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Location = System::Drawing::Point(128, 19);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(14, 13);
			this->radioButton27->TabIndex = 21;
			this->radioButton27->TabStop = true;
			this->radioButton27->UseVisualStyleBackColor = true;
			this->radioButton27->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton27_CheckedChanged);
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Location = System::Drawing::Point(165, 19);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(14, 13);
			this->radioButton26->TabIndex = 20;
			this->radioButton26->TabStop = true;
			this->radioButton26->UseVisualStyleBackColor = true;
			this->radioButton26->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton26_CheckedChanged);
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(204, 19);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(14, 13);
			this->radioButton25->TabIndex = 19;
			this->radioButton25->TabStop = true;
			this->radioButton25->UseVisualStyleBackColor = true;
			this->radioButton25->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton25_CheckedChanged);
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(15, 19);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(14, 13);
			this->radioButton24->TabIndex = 18;
			this->radioButton24->TabStop = true;
			this->radioButton24->UseVisualStyleBackColor = true;
			this->radioButton24->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton24_CheckedChanged);
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(51, 19);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(14, 13);
			this->radioButton23->TabIndex = 17;
			this->radioButton23->TabStop = true;
			this->radioButton23->UseVisualStyleBackColor = true;
			this->radioButton23->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton23_CheckedChanged);
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(89, 19);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(14, 13);
			this->radioButton22->TabIndex = 16;
			this->radioButton22->TabStop = true;
			this->radioButton22->UseVisualStyleBackColor = true;
			this->radioButton22->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton22_CheckedChanged);
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(325, 19);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(14, 13);
			this->radioButton21->TabIndex = 15;
			this->radioButton21->TabStop = true;
			this->radioButton21->UseVisualStyleBackColor = true;
			this->radioButton21->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton21_CheckedChanged);
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(285, 19);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(14, 13);
			this->radioButton20->TabIndex = 14;
			this->radioButton20->TabStop = true;
			this->radioButton20->UseVisualStyleBackColor = true;
			this->radioButton20->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton20_CheckedChanged);
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(244, 19);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(14, 13);
			this->radioButton19->TabIndex = 13;
			this->radioButton19->TabStop = true;
			this->radioButton19->UseVisualStyleBackColor = true;
			this->radioButton19->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton19_CheckedChanged);
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(401, 19);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(14, 13);
			this->radioButton18->TabIndex = 12;
			this->radioButton18->TabStop = true;
			this->radioButton18->UseVisualStyleBackColor = true;
			this->radioButton18->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton18_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(363, 19);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(14, 13);
			this->radioButton17->TabIndex = 11;
			this->radioButton17->TabStop = true;
			this->radioButton17->UseVisualStyleBackColor = true;
			this->radioButton17->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton17_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(523, 19);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(14, 13);
			this->radioButton16->TabIndex = 10;
			this->radioButton16->TabStop = true;
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton16_CheckedChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(483, 19);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(14, 13);
			this->radioButton15->TabIndex = 9;
			this->radioButton15->TabStop = true;
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton15_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(440, 19);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(14, 13);
			this->radioButton14->TabIndex = 8;
			this->radioButton14->TabStop = true;
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton14_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(641, 19);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(14, 13);
			this->radioButton11->TabIndex = 5;
			this->radioButton11->TabStop = true;
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton11_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(680, 19);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(14, 13);
			this->radioButton9->TabIndex = 3;
			this->radioButton9->TabStop = true;
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton9_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(602, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(14, 13);
			this->radioButton8->TabIndex = 2;
			this->radioButton8->TabStop = true;
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(563, 19);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(14, 13);
			this->radioButton7->TabIndex = 1;
			this->radioButton7->TabStop = true;
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Checked = true;
			this->radioButton6->Location = System::Drawing::Point(717, 19);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(14, 13);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// label55
			// 
			this->label55->Location = System::Drawing::Point(1080, 621);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(83, 17);
			this->label55->TabIndex = 82;
			// 
			// label56
			// 
			this->label56->Location = System::Drawing::Point(946, 621);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(139, 17);
			this->label56->TabIndex = 81;
			this->label56->Text = L"String damp";
			// 
			// label57
			// 
			this->label57->Location = System::Drawing::Point(1080, 604);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(83, 17);
			this->label57->TabIndex = 80;
			// 
			// label58
			// 
			this->label58->Location = System::Drawing::Point(946, 604);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(139, 17);
			this->label58->TabIndex = 79;
			this->label58->Text = L"Air LateTime";
			// 
			// label43
			// 
			this->label43->Location = System::Drawing::Point(1080, 587);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(83, 17);
			this->label43->TabIndex = 78;
			// 
			// label44
			// 
			this->label44->Location = System::Drawing::Point(946, 587);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(139, 17);
			this->label44->TabIndex = 77;
			this->label44->Text = L"Air frequency";
			// 
			// label45
			// 
			this->label45->Location = System::Drawing::Point(1080, 570);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(83, 17);
			this->label45->TabIndex = 76;
			// 
			// label46
			// 
			this->label46->Location = System::Drawing::Point(946, 570);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(139, 17);
			this->label46->TabIndex = 75;
			this->label46->Text = L"Air delta";
			// 
			// label47
			// 
			this->label47->Location = System::Drawing::Point(1080, 553);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(83, 17);
			this->label47->TabIndex = 74;
			// 
			// label48
			// 
			this->label48->Location = System::Drawing::Point(946, 553);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(139, 17);
			this->label48->TabIndex = 73;
			this->label48->Text = L"Air M";
			// 
			// label49
			// 
			this->label49->Location = System::Drawing::Point(1086, 536);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(83, 17);
			this->label49->TabIndex = 72;
			// 
			// label50
			// 
			this->label50->Location = System::Drawing::Point(952, 536);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(136, 17);
			this->label50->TabIndex = 71;
			this->label50->Text = L"Air A String";
			// 
			// label51
			// 
			this->label51->Location = System::Drawing::Point(1086, 519);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(83, 17);
			this->label51->TabIndex = 70;
			// 
			// label52
			// 
			this->label52->Location = System::Drawing::Point(949, 519);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(142, 17);
			this->label52->TabIndex = 69;
			this->label52->Text = L"LateTime General damp";
			// 
			// label53
			// 
			this->label53->Location = System::Drawing::Point(1086, 502);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(83, 17);
			this->label53->TabIndex = 68;
			// 
			// label54
			// 
			this->label54->Location = System::Drawing::Point(949, 502);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(142, 17);
			this->label54->TabIndex = 67;
			this->label54->Text = L"Frequency General damp";
			// 
			// label39
			// 
			this->label39->Location = System::Drawing::Point(1086, 485);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(83, 17);
			this->label39->TabIndex = 66;
			// 
			// label40
			// 
			this->label40->Location = System::Drawing::Point(949, 485);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(142, 17);
			this->label40->TabIndex = 65;
			this->label40->Text = L"Velocity General damp";
			// 
			// label41
			// 
			this->label41->Location = System::Drawing::Point(1086, 468);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(83, 17);
			this->label41->TabIndex = 64;
			// 
			// label42
			// 
			this->label42->Location = System::Drawing::Point(949, 468);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(142, 17);
			this->label42->TabIndex = 63;
			this->label42->Text = L"Lambda General damp";
			// 
			// label35
			// 
			this->label35->Location = System::Drawing::Point(1086, 451);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(83, 17);
			this->label35->TabIndex = 62;
			// 
			// label36
			// 
			this->label36->Location = System::Drawing::Point(949, 451);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(139, 17);
			this->label36->TabIndex = 61;
			this->label36->Text = L"Lambda";
			// 
			// label37
			// 
			this->label37->Location = System::Drawing::Point(1086, 434);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(83, 17);
			this->label37->TabIndex = 60;
			// 
			// label38
			// 
			this->label38->Location = System::Drawing::Point(949, 434);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(142, 17);
			this->label38->TabIndex = 59;
			this->label38->Text = L"Frequency";
			// 
			// label34
			// 
			this->label34->Location = System::Drawing::Point(1086, 417);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(83, 17);
			this->label34->TabIndex = 58;
			// 
			// label33
			// 
			this->label33->Location = System::Drawing::Point(949, 417);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(142, 17);
			this->label33->TabIndex = 57;
			this->label33->Text = L"Velocity";
			// 
			// label32
			// 
			this->label32->Location = System::Drawing::Point(1086, 400);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(83, 17);
			this->label32->TabIndex = 56;
			// 
			// label31
			// 
			this->label31->Location = System::Drawing::Point(949, 400);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(142, 17);
			this->label31->TabIndex = 55;
			this->label31->Text = L"MassPerUnit";
			// 
			// label59
			// 
			this->label59->Location = System::Drawing::Point(1035, 621);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(83, 17);
			this->label59->TabIndex = 92;
			this->label59->Visible = false;
			// 
			// label60
			// 
			this->label60->Location = System::Drawing::Point(942, 621);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(98, 17);
			this->label60->TabIndex = 91;
			this->label60->Text = L"Number Of Waves";
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->Location = System::Drawing::Point(1035, 604);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(83, 17);
			this->label61->TabIndex = 90;
			this->label61->Visible = false;
			// 
			// label62
			// 
			this->label62->Location = System::Drawing::Point(946, 604);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(94, 17);
			this->label62->TabIndex = 89;
			this->label62->Text = L"WaveLength";
			this->label62->Visible = false;
			// 
			// label63
			// 
			this->label63->Location = System::Drawing::Point(1035, 587);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(83, 17);
			this->label63->TabIndex = 88;
			this->label63->Visible = false;
			// 
			// label64
			// 
			this->label64->Location = System::Drawing::Point(946, 587);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(94, 17);
			this->label64->TabIndex = 87;
			this->label64->Text = L"Frequency";
			this->label64->Visible = false;
			// 
			// label65
			// 
			this->label65->Location = System::Drawing::Point(1035, 570);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(83, 17);
			this->label65->TabIndex = 86;
			this->label65->Visible = false;
			// 
			// label66
			// 
			this->label66->Location = System::Drawing::Point(946, 570);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(94, 17);
			this->label66->TabIndex = 85;
			this->label66->Text = L"Velocity";
			this->label66->Visible = false;
			// 
			// label67
			// 
			this->label67->Location = System::Drawing::Point(1035, 553);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(83, 17);
			this->label67->TabIndex = 84;
			this->label67->Visible = false;
			// 
			// label68
			// 
			this->label68->Location = System::Drawing::Point(946, 553);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(94, 17);
			this->label68->TabIndex = 83;
			this->label68->Text = L"MassPerUnit";
			this->label68->Visible = false;
			// 
			// label69
			// 
			this->label69->Location = System::Drawing::Point(946, 536);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(105, 17);
			this->label69->TabIndex = 93;
			this->label69->Text = L"Frequency Machine";
			this->label69->Visible = false;
			// 
			// label70
			// 
			this->label70->Location = System::Drawing::Point(1052, 536);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(66, 17);
			this->label70->TabIndex = 94;
			this->label70->Visible = false;
			// 
			// label71
			// 
			this->label71->Location = System::Drawing::Point(1052, 519);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(66, 17);
			this->label71->TabIndex = 95;
			this->label71->Visible = false;
			// 
			// label72
			// 
			this->label72->Location = System::Drawing::Point(946, 519);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(105, 17);
			this->label72->TabIndex = 96;
			this->label72->Text = L"Lenght";
			this->label72->Visible = false;
			// 
			// label73
			// 
			this->label73->Location = System::Drawing::Point(526, 568);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(38, 17);
			this->label73->TabIndex = 97;
			this->label73->Visible = false;
			// 
			// label74
			// 
			this->label74->Location = System::Drawing::Point(551, 567);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(45, 17);
			this->label74->TabIndex = 98;
			this->label74->Text = L"Wave";
			this->label74->Visible = false;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(649, 567);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(190, 23);
			this->button18->TabIndex = 100;
			this->button18->Text = L"Free Find sight of Zero Point";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// label75
			// 
			this->label75->Location = System::Drawing::Point(845, 573);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(75, 17);
			this->label75->TabIndex = 101;
			this->label75->Visible = false;
			// 
			// label76
			// 
			this->label76->Location = System::Drawing::Point(845, 597);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(75, 17);
			this->label76->TabIndex = 106;
			this->label76->Visible = false;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(649, 591);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(190, 23);
			this->button19->TabIndex = 105;
			this->button19->Text = L"Free Find sight of High Point";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// label77
			// 
			this->label77->Location = System::Drawing::Point(551, 592);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(45, 17);
			this->label77->TabIndex = 103;
			this->label77->Text = L"Wave";
			this->label77->Visible = false;
			// 
			// label78
			// 
			this->label78->Location = System::Drawing::Point(526, 594);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(38, 17);
			this->label78->TabIndex = 102;
			this->label78->Visible = false;
			// 
			// label79
			// 
			this->label79->Location = System::Drawing::Point(845, 547);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(75, 17);
			this->label79->TabIndex = 111;
			this->label79->Visible = false;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(649, 542);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(190, 23);
			this->button20->TabIndex = 110;
			this->button20->Text = L"Fixed Find sight of High Point";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// label80
			// 
			this->label80->Location = System::Drawing::Point(551, 542);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(45, 17);
			this->label80->TabIndex = 108;
			this->label80->Text = L"Wave";
			this->label80->Visible = false;
			// 
			// label81
			// 
			this->label81->Location = System::Drawing::Point(526, 542);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(38, 17);
			this->label81->TabIndex = 107;
			this->label81->Visible = false;
			// 
			// label82
			// 
			this->label82->Location = System::Drawing::Point(845, 525);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(78, 17);
			this->label82->TabIndex = 116;
			this->label82->Visible = false;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(649, 517);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(190, 23);
			this->button21->TabIndex = 115;
			this->button21->Text = L"Fixed Find sight of Zero Point";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// label83
			// 
			this->label83->Location = System::Drawing::Point(551, 519);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(45, 17);
			this->label83->TabIndex = 113;
			this->label83->Text = L"Wave";
			this->label83->Visible = false;
			// 
			// label84
			// 
			this->label84->Location = System::Drawing::Point(526, 519);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(38, 17);
			this->label84->TabIndex = 112;
			this->label84->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(591, 519);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(52, 20);
			this->textBox15->TabIndex = 117;
			this->textBox15->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(591, 542);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(52, 20);
			this->textBox16->TabIndex = 118;
			this->textBox16->Visible = false;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(591, 589);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(52, 20);
			this->textBox17->TabIndex = 119;
			this->textBox17->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(592, 566);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(52, 20);
			this->textBox18->TabIndex = 120;
			this->textBox18->Visible = false;
			// 
			// label85
			// 
			this->label85->Location = System::Drawing::Point(491, 519);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(38, 17);
			this->label85->TabIndex = 121;
			this->label85->Text = L"1 -->";
			this->label85->Visible = false;
			// 
			// label86
			// 
			this->label86->Location = System::Drawing::Point(491, 569);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(38, 17);
			this->label86->TabIndex = 122;
			this->label86->Text = L"0 -->";
			this->label86->Visible = false;
			// 
			// label87
			// 
			this->label87->Location = System::Drawing::Point(491, 545);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(38, 17);
			this->label87->TabIndex = 123;
			this->label87->Text = L"0 -->";
			this->label87->Visible = false;
			// 
			// label88
			// 
			this->label88->Location = System::Drawing::Point(491, 591);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(38, 17);
			this->label88->TabIndex = 124;
			this->label88->Text = L"1 -->";
			this->label88->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1274, 696);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"OpenGL on a Windows Form using Managed C++";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		/*********************************************		Timer		***********************************************/
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		UNREFERENCED_PARAMETER(sender);
		UNREFERENCED_PARAMETER(e);
		OpenGL->Render();

		if (!stopMachine){
			OpenGL->vibrate(timeCount++, FixedEnd);
		}
		else if (stopMachine){
			OpenGL->drawOneLine();
		}

		if (vibratetheID != 0){
			k++;
			if (k == 200){
				k -= 40;
			}
			OpenGL->vibrateLine(vibratetheID, k, damp);
		}

		OpenGL->DrawCover(OpenGL->get_Image_one_Number());
		OpenGL->SwapOpenGLBuffers();
	}
			 /*****************************************************************************************************************/
			 /*************************************		to change the view		**********************************************/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	//	go to guitar
		OpenGL->change_view(true);
		changeVisibility(true);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {	//	go to machine
		OpenGL->change_view(false);
		changeVisibility(false);
	}
			 void changeVisibility(bool visible){
				 groupBox1->Visible = visible;
				 groupBox2->Visible = visible;
				 label3->Visible = visible;
				 label4->Visible = visible;
				 button10->Visible = visible;
				 button8->Visible = visible;
				 button7->Visible = visible;
				 button6->Visible = visible;
				 button5->Visible = visible;
				 button4->Visible = visible;
				 button3->Visible = visible;
				 button2->Visible = visible;
				 textBox2->Visible = visible;
				 label6->Visible = visible;
				 textBox1->Visible = visible;
				 label5->Visible = visible;
				 label2->Visible = visible;
				 trackBar1->Visible = visible;
				 label31->Visible = visible;
				 label32->Visible = visible;
				 label33->Visible = visible;
				 label34->Visible = visible;
				 label35->Visible = visible;
				 label36->Visible = visible;
				 label37->Visible = visible;
				 label38->Visible = visible;
				 label39->Visible = visible;
				 label40->Visible = visible;
				 label41->Visible = visible;
				 label42->Visible = visible;
				 label43->Visible = visible;
				 label44->Visible = visible;
				 label45->Visible = visible;
				 label46->Visible = visible;
				 label47->Visible = visible;
				 label48->Visible = visible;
				 label49->Visible = visible;
				 label50->Visible = visible;
				 label51->Visible = visible;
				 label52->Visible = visible;
				 label53->Visible = visible;
				 label54->Visible = visible;
				 label55->Visible = visible;
				 label56->Visible = visible;
				 label57->Visible = visible;
				 label58->Visible = visible;
				 label21->Visible = visible;
				 label22->Visible = visible;
				 label23->Visible = visible;
				 label24->Visible = visible;
				 label25->Visible = visible;
				 label26->Visible = visible;
				 label27->Visible = visible;
				 label28->Visible = visible;
				 label29->Visible = visible;
				 label30->Visible = visible;
				 textBox8->Visible = visible;
				 textBox9->Visible = visible;
				 textBox10->Visible = visible;
				 textBox11->Visible = visible;
				 textBox12->Visible = visible;
				 textBox13->Visible = visible;
				 textBox14->Visible = visible;
				 /************************/
				 label7->Visible = !visible;
				 label8->Visible = !visible;
				 label9->Visible = !visible;
				 label10->Visible = !visible;
				 label11->Visible = !visible;
				 textBox3->Visible = !visible;
				 textBox4->Visible = !visible;
				 textBox5->Visible = !visible;
				 textBox6->Visible = !visible;
				 textBox7->Visible = !visible;
				 button14->Visible = !visible;
				 button15->Visible = !visible;
				 button16->Visible = !visible;
				 button17->Visible = !visible;
				 label59->Visible = !visible;
				 label60->Visible = !visible;
				 label61->Visible = !visible;
				 label62->Visible = !visible;
				 label63->Visible = !visible;
				 label64->Visible = !visible;
				 label65->Visible = !visible;
				 label66->Visible = !visible;
				 label67->Visible = !visible;
				 label68->Visible = !visible;
				 label69->Visible = !visible;
				 label70->Visible = !visible;
				 label71->Visible = !visible;
				 label72->Visible = !visible;
				 label73->Visible = !visible;
				 label75->Visible = !visible;
				 label76->Visible = !visible;
				 label78->Visible = !visible;
				 label79->Visible = !visible;
				 label81->Visible = !visible;
				 label82->Visible = !visible;
				 label84->Visible = !visible;
				 button18->Visible = !visible;
				 button19->Visible = !visible;
				 button20->Visible = !visible;
				 button21->Visible = !visible;
				 textBox15->Visible = !visible;
				 textBox16->Visible = !visible;
				 textBox17->Visible = !visible;
				 textBox18->Visible = !visible;
				 label85->Visible = !visible;
				 label86->Visible = !visible;
				 label87->Visible = !visible;
				 label88->Visible = !visible;
			 }
			 /*****************************************************************************************************************/
			 /*****************************************************************************************************************/
			 /***********************************		buttons to make string vibrate			******************************/
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(1);	//	(	ID of string	)
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(2);	//	(	ID of string	)
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(3);	//	(	ID of string	)
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(4);	//	(	ID of string	)
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(5);	//	(	ID of string	)
	}
	public: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(6);	//	(	ID of string	)
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(0);	//	(	ID of string	)
	}
			 /*****************************************************************************************************************/
			 /***********************************		to find the correct harmonic			******************************/
			 void harmonicc(int value){//PlaySound(TEXT("Guitar_String/String1/smusic.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
				 switch (harmonic){
				 case 1:{
					 switch (value){
					 case 1:{
						 label1->Text = "okk";
						 PlaySound(TEXT("Guitar_String/String1/1-1.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-1.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-1.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-1.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-1.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-1.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 2:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-2.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-2.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-2.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-2.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-2.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-2.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 3:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-3.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-3.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-3.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-3.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-3.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-3.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 4:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-4.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-4.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-4.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-4.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-4.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-4.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 5:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-5.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-5.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-5.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-5.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-5.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-5.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 6:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-6.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-6.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-6.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-6.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-6.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-6.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 7:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-7.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-7.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-7.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-7.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-7.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-7.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 8:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-8.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-8.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-8.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-8.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-8.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-8.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 9:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-9.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-9.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-9.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-9.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-9.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-9.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 10:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-10.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-10.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-10.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-10.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-10.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-10.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 11:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-11.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-11.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-11.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-11.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-11.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-11.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 12:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-12.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-12.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-12.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-12.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-12.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-12.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 13:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-13.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-13.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-13.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-13.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-13.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-13.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 14:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-14.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-14.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-14.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-14.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-14.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-14.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 15:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-15.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-15.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-15.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-15.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-15.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-15.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 16:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-16.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-16.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-16.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-16.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-16.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-16.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 17:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-17.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-17.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-17.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-17.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-17.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/5-17.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 18:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-18.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-18.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-18.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-18.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-18.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-18.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 case 19:{
					 switch (value){
					 case 1:{
						 PlaySound(TEXT("Guitar_String/String1/1-19.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 2:{
						 PlaySound(TEXT("Guitar_String/String2/2-19.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 3:{
						 PlaySound(TEXT("Guitar_String/String3/3-19.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 4:{
						 PlaySound(TEXT("Guitar_String/String4/4-19.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 5:{
						 PlaySound(TEXT("Guitar_String/String5/5-19.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 case 6:{
						 PlaySound(TEXT("Guitar_String/String6/6-19.wav"), NULL, SND_ASYNC | SND_FILENAME);
						 break;
					 }
					 }
					 break;
				 }
				 }
			 }
			 /*****************************************************************************************************************/
			 /****************************			to make the string vibrate			**************************************/
			 void stopOtherString(int ID){

				 harmonicc(ID);
				 vibratetheID = ID;	//	to know any string to vibrate
				 k = 0;	//	to start the harmonic from 0
				 OpenGL->string1 = true;	//	make string as line
				 OpenGL->string2 = true;	//	make string as line
				 OpenGL->string3 = true;	//	make string as line
				 OpenGL->string4 = true;	//	make string as line
				 OpenGL->string5 = true;	//	make string as line
				 OpenGL->string6 = true;	//	make string as line
				 if (ID == 1){
					 OpenGL->string1 = false;	//	stop line being line
				 }
				 if (ID == 2){
					 OpenGL->string2 = false;	//	stop line being line
				 }
				 if (ID == 3){
					 OpenGL->string3 = false;	//	stop line being line
				 }
				 if (ID == 4){
					 OpenGL->string4 = false;	//	stop line being line
				 }
				 if (ID == 5){
					 OpenGL->string5 = false;	//	stop line being line
				 }
				 if (ID == 6){
					 OpenGL->string6 = false;	//	stop line being line
				 }
			 }
			 /*****************************************************************************************************************/
			 /*************************************		trackbar to select the distance (the site that we tik in it)		**/
	private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		double val = trackBar1->Value;
		label2->Text = Convert::ToString(val / 100);
		OpenGL->SetDistance(val / 100);
	}
			 /*****************************************************************************************************************/
			 /*************************************		radio button to chose the type of damp		**************************/
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(0);
		damp = 0;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(0);
		damp = 1;
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(0);
		damp = 2;
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(0);
		damp = 3;
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		stopOtherString(0);
		damp = 4;
	}
			 /*****************************************************************************************************************/
			 /*************************************		submit the change		**********************************************/
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		bool ideal = false;
		bool GeneralDamp = false;
		bool AirDamp = false;
		bool StringDamp = false;
		if (!textBox1->Text->Equals("")){
			OpenGL->setMass(Convert::ToDouble(textBox1->Text));
			ideal = true;
		}
		if (!textBox2->Text->Equals("")){
			OpenGL->setForceTension(Convert::ToDouble(textBox2->Text));
			ideal = true;
		}
		if (!textBox8->Text->Equals("")){
			OpenGL->SetHigh(Convert::ToDouble(textBox8->Text));
			ideal = true;
		}
		if (!textBox9->Text->Equals("")){
			OpenGL->Set_B_generalDamp(Convert::ToDouble(textBox9->Text));
			GeneralDamp = true;
		}
		if (!textBox10->Text->Equals("")){
			OpenGL->SetRaduisOfString(Convert::ToDouble(textBox10->Text));
			AirDamp = true;
		}
		if (!textBox11->Text->Equals("")){
			OpenGL->SetAirEtta(Convert::ToDouble(textBox11->Text));
			AirDamp = true;
		}
		if (!textBox12->Text->Equals("")){
			OpenGL->SetAirRouu(Convert::ToDouble(textBox12->Text));
			AirDamp = true;
		}
		if (!textBox13->Text->Equals("")){
			OpenGL->SetStringRouu(Convert::ToDouble(textBox13->Text));
			AirDamp = true;
		}
		if (!textBox14->Text->Equals("")){
			OpenGL->SetYongModel(Convert::ToDouble(textBox14->Text));
			StringDamp = true;
		}
		OpenGL->changeReady(ideal, GeneralDamp, AirDamp, StringDamp);
		outValueGuitar();
	}
			 /*****************************************************************************************************************/
			 /*************************************		radio button to chose the harmonic		******************************/
	private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 1;
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 2;
	}
	private: System::Void radioButton11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 3;
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 4;
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 5;
	}
	private: System::Void radioButton16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 6;
	}
	private: System::Void radioButton15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 7;
	}
	private: System::Void radioButton14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 8;
	}
	private: System::Void radioButton18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 9;
	}
	private: System::Void radioButton17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 10;
	}
	private: System::Void radioButton21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 11;
	}
	private: System::Void radioButton20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 12;
	}
	private: System::Void radioButton19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 13;
	}
	private: System::Void radioButton25_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 14;
	}
	private: System::Void radioButton26_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 15;
	}
	private: System::Void radioButton27_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 16;
	}
	private: System::Void radioButton22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 17;
	}
	private: System::Void radioButton23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 18;
	}
	private: System::Void radioButton24_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		harmonic = 19;
	}
/*****************************************************************************************************************/
/****************************		print the value on screan			******************************************/
void outValueGuitar(){
	label32->Text = Convert::ToString(OpenGL->GetMassPerUnit());
	label34->Text = Convert::ToString(OpenGL->GetVelocity());
	label37->Text = Convert::ToString(OpenGL->GetFrequency());
	label35->Text = Convert::ToString(OpenGL->GetLambda());
	label41->Text = Convert::ToString(OpenGL->GetLambda_GeneralDamp());
	label39->Text = Convert::ToString(OpenGL->GetVelocity_GeneralDamp());
	label53->Text = Convert::ToString(OpenGL->GetFrequency_GeneralDamp());
	label51->Text = Convert::ToString(OpenGL->GetTimeLate_GeneralDamp());
	label49->Text = Convert::ToString(OpenGL->GetAir_A_String());
	label47->Text = Convert::ToString(OpenGL->GetAir_M());
	label45->Text = Convert::ToString(OpenGL->GetAir_A_String());
	label43->Text = Convert::ToString(OpenGL->GetAir_frequency());
	label57->Text = Convert::ToString(OpenGL->GetAir_TimeLate());
	label55->Text = Convert::ToString(OpenGL->GetStringDamp());
}
void outValueMachine(){
	label67->Text = Convert::ToString(OpenGL->getMassPerUnitMachine());
	label65->Text = Convert::ToString(OpenGL->getVelocityMachine());
	label63->Text = Convert::ToString(OpenGL->getFrequencyMachine());
	label61->Text = Convert::ToString(OpenGL->getWaveLenghtMachine());
	label59->Text = Convert::ToString(OpenGL->getNumberOfWavesMachine());
	label70->Text = Convert::ToString(OpenGL->getFrequencyMachineMachine());
	label71->Text = Convert::ToString(OpenGL->getLengthMachine());
}
/*****************************************************************************************************************/
/***************************************		test		******************************************************/
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = Convert::ToString(OpenGL->GETT());
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = Convert::ToString(OpenGL->gettest());
	}
/*****************************************************************************************************************/
/*************************		chose which machine will vibrate		******************************************/
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {	//	stop button
		stopMachine = true;
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {	//	start vibrate FixedEnd
		OpenGL->choseType(true);
		FixedEnd = true;
		stopMachine = false;
		timeCount = 0;
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {	//	start vibrate FreeEnd
		OpenGL->choseType(false);
		FixedEnd = false;
		stopMachine = false;
		timeCount = 0;
	}
/*****************************************************************************************************************/
/******************************		make change on machine value		******************************************/
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	int Data = 0;
	if (!textBox3->Text->Equals("")){
		Data++;
		OpenGL->SetForceTensionOfMachine(Convert::ToDouble(textBox3->Text));
		textBox3->Text = "";
	}
	if (!textBox4->Text->Equals("")){
		Data++;
		OpenGL->SetMassOfMachine(Convert::ToDouble(textBox4->Text));
		textBox4->Text = "";
	}
	if (!textBox5->Text->Equals("")){
		Data++;
		OpenGL->SetLengthOfMachine(Convert::ToDouble(textBox5->Text));
		textBox5->Text = "";
		OpenGL->initializeArrayOfMachine();
	}
	if (Data > 0){
		OpenGL->DataMember();
	}
	if (!textBox6->Text->Equals("")){
		Data++;
		OpenGL->SetYmaxOfMachine(Convert::ToDouble(textBox6->Text));
		textBox6->Text = "";
	}
	if (!textBox7->Text->Equals("")){
		Data++;
		OpenGL->SetFrequencyOfMachine(Convert::ToDouble(textBox7->Text));
		textBox7->Text = "";
	}
	if (Data > 0){
		OpenGL->machine();
	}
	outValueMachine();
	setValue();
}
/*****************************************************************************************************************/
void setValue(){
	label84->Text = Convert::ToString(OpenGL->getnumberOfZeroPointMachine());
	label81->Text = Convert::ToString(OpenGL->getnumberOfHighPointMachine());
	label73->Text = Convert::ToString(OpenGL->getnumberOfHighPointMachine());
	label78->Text = Convert::ToString(OpenGL->getnumberOfZeroPointMachine());
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	label82->Text = Convert::ToString(OpenGL->FixedEndZeroPoint_FreeEndHighPointMachine(Convert::ToInt64(textBox15->Text)));
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	label79->Text = Convert::ToString(OpenGL->FixedEndhighPoint_FreeEndZeroPointMachine(Convert::ToInt64(textBox16->Text)));
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	label75->Text = Convert::ToString(OpenGL->FixedEndhighPoint_FreeEndZeroPointMachine(Convert::ToInt64(textBox18->Text)));
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	label76->Text = Convert::ToString(OpenGL->FixedEndZeroPoint_FreeEndHighPointMachine(Convert::ToInt64(textBox17->Text)));
}
};
}

