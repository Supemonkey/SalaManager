#pragma once
#include"Head.h"
using namespace std;
//πÕ‘±¿‡
class Employ
{
public:
	Employ(stu People);
	~Employ();
	string GetSalacard();
	string GetIdcard();
	string GetName();
	string GetSex();
	string GetDepartment();
	string GetPosiName();
	string GetPosiId();
	string GetHomeNumber();
	string GetPoisonNumber();

	double GetBasicSala();
	double GetSuppleSala();
	double GetSpeciReward();

	int GetAge();
	int GetWorkAge();

	double GetWaterFee();
	double GetEleFee();
	double GetCleanFee();
	double GetTVFee();

	void getSal(double);
	double GetPosiSala();

private:
	stu People;
};
class Technology :
	public Employ
{
public:
	Technology(stu people, double hour);
};

class SalesManager :
	public Employ
{
public:
	SalesManager(stu people);
};

class Manager :public Employ
{
public:
	Manager(stu people);
};

class Sales :
	public Employ
{
public:
	Sales(stu people, int sum);
private:
	double sum;
};
