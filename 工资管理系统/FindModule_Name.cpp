#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
int FindEssent_Name(EssentInfo *Ehead, string name, int year) {
	EssentInfo *Ep;
	int log = 0;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (strcmp(Ep->Name, name.c_str()) == 0) {
			cout << "***********************************************  职工基本信息  **********************************************" << endl;
			cout << "|姓名     |" << "性别   |" << "年龄   |" << "身份证号  |" << "技术职称编号 |" << "技术职称  |" << "部门     |" << "工龄  |" << "电话号码 |" << "家庭号码 |" << "工资卡号 |" << endl;
			PrintEssentInfo(Ep, year);
			cout << "*************************************************************************************************************" << endl;
			log = 1;
			break;
		}
		Ep = Ep->Next;
	}
	return log;
}

void FindStorage_Name(Storage *Shead, string name) {
	Storage *Sp;
	Sp = Shead->Next;
	while (Sp != NULL) {
		if (strcmp(Sp->name, name.c_str()) == 0) {
			cout << "*************************  基本信息数据  ***********************" << endl;
			cout << "|排行 |" << "姓名     |" << "性别   |" << "年龄  |"
				<< "技术职称编号 |" << "技术职称  |" << "工资  |" << endl;
			PrintStorageInfo(Sp);
			cout << "****************************************************************" << endl;
			break;
		}
		Sp = Sp->Next;
	}
}

void FindWages_Name(Wages *Whead, string name) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (strcmp(Wp->name, name.c_str()) == 0) {
			cout << "**********************  工资基本信息  *********************" << endl;
			cout << "|技术职称编号 |" << "技术称号  |" << "基本工资  |" << "职位工资  |" << "各自补助  |" << endl;
			PrintWagesInfo(Wp);
			cout << "***********************************************************" << endl;
			break;
		}
		Wp = Wp->Next;
	}
}

void FindDeductions_Name(Deductions *Dhead, string name) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->name, name.c_str()) == 0) {
			cout << "****************  费用扣除信息  ****************" << endl;
			cout << "|工资卡号  |" << "水费  |" << "电费  |" << "清洁费  |" << "闭路电视费  |" << endl;
			PrintDeductionsInfo(Dp);
			cout << "************************************************" << endl;
			break;
		}
		Dp = Dp->Next;
	}
}

void FindPayrollData_Name(PayrollData *Phead, string name) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (strcmp(Pp->Name, name.c_str()) == 0) {
			cout << "******************************************  工资单数据  ******************************************" << endl;
			cout << "|姓名     |" << "工资卡号  |" << "水费  |"
				<< "电费  |" << "清洁费  |" << "闭路电视费  |"
				<< "税收  |" << "应发工资  |" << "实发工资  |"
				<< "特别奖励  |" << endl;
			PrintPayrollDataInfo(Pp);
			cout << "**************************************************************************************************" << endl;
			break;
		}
		Pp = Pp->Next;
	}
}