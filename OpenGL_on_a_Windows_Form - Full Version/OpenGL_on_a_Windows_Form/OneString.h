#pragma once
ref class OneString
{
private:
	double lenght, mass, ForceTension, velocity, massPerUnit, frequency, machineFrequency;
	double waveLenght, waveLenghtOfMachine, Ymax, PI, testvalue, translate, numberOfWave, numberOfZeroPoint, numberOfHighPoint;
	double accurately;
	double *yvalue, *yvaluee, *yvalueToDraw;
public:
	OneString(double length, double mass, double ForceTendion);
	void InitailizeFixedEndArray();
	void InitailizeFreeEndArray();
private:
	void setFixedEndArray();
	void setFreeEndArray();
public:
	void DataMember();
	void drawOneLine();
	void ChoseArray(bool Fixed);
	void machine();
public:
	void vibrate(double k, bool FixedEnd);
	//tester
	void SETT(double value);
	double GETT();
	//setter
	void SetForceTension(double value);
	void SetMass(double value);
	void SetLenght(double value);
	void SetYmax(double value);
	void SetMachineFrequency(double value);
	void setTranslate(double value);
	void knowNumberOfZeroPointAndHighPoint();
	//getter
	double getMassPerUnit();
	double getVelocity();
	double getFrequency();
	double getWaveLenght();
	double getNumberOfWaves();
	double getFrequencyMachine();
	double getLength();
	int getnumberOfZeroPoint();
	int getnumberOfHighPoint();
	double FixedEndZeroPoint_FreeEndHighPoint(int value);
	double FixedEndhighPoint_FreeEndZeroPoint(int value);
};
