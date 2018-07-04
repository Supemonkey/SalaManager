#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
int FindEssent_Num(EssentInfo *Ehead, string num, int year) {
	EssentInfo *Ep;
	int log = 0;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->PosiId == num) {
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

void FindStorage_Num(Storage *Shead, string num) {
	Storage *Sp;
	Sp = Shead->Next;
	while (Sp != NULL) {
		if (Sp->num == num) {
			cout << "*************************  基本信息数据  ***********************" << endl;
			cout << "|排行 |" << "姓名     |" << "性别   |" << "年龄  |" << "技术职称编号 |" << "技术职称  |" << "工资  |" << endl;
			PrintStorageInfo(Sp);
			cout << "****************************************************************" << endl;
			break;
		}
		Sp = Sp->Next;
	}
}

void FindWages_Num(Wages *Whead, string num) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (Wp->num == num) {
			cout << "**********************  工资基本信息  *********************" << endl;
			cout << "|技术职称编号 |" << "技术称号  |" << "基本工资  |" << "职位工资  |" << "各自补助  |" << endl;
			PrintWagesInfo(Wp);
			cout << "***********************************************************" << endl;
			break;
		}
		Wp = Wp->Next;
	}
}

void FindDeductions_Num(Deductions *Dhead, string num) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->num == num) {
			cout << "****************  费用扣除信息  ****************" << endl;
			cout << "|工资卡号  |" << "水费  |" << "电费  |" << "清洁费  |" << "闭路电视费  |" << endl;
			PrintDeductionsInfo(Dp);
			cout << "************************************************" << endl;
			break;
		}
		Dp = Dp->Next;
	}
}

void FindPayrollData_Num(PayrollData *Phead, string num) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (Pp->num == num) {
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