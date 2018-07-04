#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
using namespace std;

void PinterEssent(EssentInfo *Ehead, int year)
{
	EssentInfo *Ep;
	Ep = Ehead->Next;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);// 前景色_绿色
	cout << "***********************************************  职工基本信息  **********************************************" << endl;
	cout << "|姓名     |" << "性别   |" << "年龄   |"
		<< "身份证号  |" << "技术职称编号 |" << "技术职称  |"
		<< "部门     |" << "工龄  |" << "电话号码 |"
		<< "家庭号码 |" << "工资卡号 |" << endl;
	while (Ep != NULL) {
		PrintEssentInfo(Ep, year);
		Ep = Ep->Next;
	}
	cout << "*************************************************************************************************************" << endl << endl;
}
void PrintStorage(Storage *Shead) {
	Storage *Sp;
	Sp = Shead->Next;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);// 前景色_绿色
	cout << "*************************  基本信息数据  ***********************" << endl;
	cout << "|排行 |" << "姓名     |" << "性别   |"
		<< "年龄  |" << "技术职称编号 |"
		<< "技术职称  |" << "工资  |" << endl;
	while (Sp != NULL) {
		PrintStorageInfo(Sp);
		Sp = Sp->Next;
	}
	cout << "****************************************************************" << endl << endl;
}

void PrintWages(Wages *Whead) {
	Wages *Wp;
	Wp = Whead->Next;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);// 前景色_绿色
	cout << "**********************  工资基本信息  *********************" << endl;
	cout << "|技术职称编号 |" << "技术称号  |" << "基本工资  |"
		<< "职位工资  |" << "各自补助  |" << endl;
	while (Wp != NULL) {
		PrintWagesInfo(Wp);
		Wp = Wp->Next;
	}
	cout << "***********************************************************" << endl << endl;
}
void PrintDeductions(Deductions *Dhead) {
	Deductions *Dp;
	Dp = Dhead->Next;
	cout << "****************  费用扣除信息  ****************" << endl;
	cout << "|工资卡号  |" << "水费  |" << "电费  |"
		<< "清洁费  |" << "闭路电视费  |" << endl;
	while (Dp != NULL) {
		PrintDeductionsInfo(Dp);
		Dp = Dp->Next;
	}
	cout << "************************************************" << endl << endl;
}

void PrintPayrollData(PayrollData *Phead) {
	PayrollData *Pp;
	Pp = Phead->Next;
	cout << "******************************************  工资单数据  ******************************************" << endl;
	cout << "|姓名     |" << "工资卡号  |" << "水费  |"
		<< "电费  |" << "清洁费  |" << "闭路电视费  |"
		<< "税收  |" << "应发工资  |" << "实发工资  |"
		<< "特别奖励  |" << endl;
	while (Pp != NULL) {
		PrintPayrollDataInfo(Pp);
		Pp = Pp->Next;
	}
	cout << "**************************************************************************************************" << endl << endl;
}