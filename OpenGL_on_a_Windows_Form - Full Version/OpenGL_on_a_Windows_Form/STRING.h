
#pragma once

ref class STRING{
private:
	// ideal
	double mass, massPerUnit, frequency, lenght, ForceTension, velocity;
	double lamda, K_lamda, K_harmonic, *node_position, *high_position, hight, distance;
	double start_x, end_x, start_y, end_y, start_and_end_x;
	double FixedStart_x, FixedEnd_x, FixedStart_y, FixedEnd_y;
	int ID;
	double PI, W, test, slop, varHigh, translate;
	static double accurately;
	double **yValue, **yValue_GeneralDamp, **Valueee, **yValue_AirDamp, **yValue_StringDamp, **yValue_SumDamp;
	bool up;
	// General damp
	double B_GeneralDamp, frequency_GeneralDamp, velocity_GeneralDamp, lambda_GeneralDamp;
	double LateTime_GeneralDamp, W_GeneralDamp, damp;
	// air damp
	double Air_Frequency, Air_delta, Air_rouu, Air_M, Air_Etta, Air_A_String;
	double Air_TimeLate, raduis_of_string, String_rouu;
	// string damp
	double Yong, String_TimeLate;
	// sum of damp
	double SumOfDamp;
public:
	// constructor
	STRING(int ID, double mass, double lenght, double ForceTension, double start_x, double end_x, double start_y, double end_y, double FixedStart_x, double FixedEnd_x, double FixedStart_y, double FixedEnd_y);
	// initialize arrays and data member

	void initialize_arrays();
	void DataMemer_ideal();
	void DataMember_GeneralDamp();
	void DataMember_AirDamp();
	void DataMember_StringDamp();
	void DataMember_SumOfDamp();

	void drawAsLine();
	void drawAfterNut();
private:
	double Set_Ak(int k);
public:
	void DoEveryThing(bool ideal, bool GeneralDamp, bool AirDamp, bool StringDamp);
	void makeVibrateReady_ChoseType(int value);
private:
	void makeVibrateReady();
public:
	void vibrateFrom0toL(int k);
public:
	// setter
	void Set_B_GeneralDamp(double value);
	void Set_Damp(double value);
	static void SetAcuratly(double acurate);
	void SetDistance();
	void SetDistance(double value);
	void setMass(double value);
	void setForceTension(double value);
	void SetHigh(double value);
	void Set_B_generalDamp(double value);
	void SetRaduisOfString(double value);
	void SetAirEtta(double value);
	void SetAirRouu(double value);
	void SetStringRouu(double value);
	void SetYongModel(double value);
public:
	// to test value
	void SETTT(double vall);
	double GETTT();
public:
	// getter
	double GetMassPerUnit();
	double GetVelocity();
	double GetFrequency();
	double GetLambda();
	double GetLambda_GeneralDamp();
	double GetVelocity_GeneralDamp();
	double GetFrequency_GeneralDamp();
	double GetTimeLate_GeneralDamp();
	double GetAir_A_String();
	double GetAir_M();
	double GetAir_delta();
	double GetAir_frequency();
	double GetAir_TimeLate();
	double GetStringDamp();



};
