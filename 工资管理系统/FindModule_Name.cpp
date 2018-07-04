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
			cout << "***********************************************  ְ��������Ϣ  **********************************************" << endl;
			cout << "|����     |" << "�Ա�   |" << "����   |" << "���֤��  |" << "����ְ�Ʊ�� |" << "����ְ��  |" << "����     |" << "����  |" << "�绰���� |" << "��ͥ���� |" << "���ʿ��� |" << endl;
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
			cout << "*************************  ������Ϣ����  ***********************" << endl;
			cout << "|���� |" << "����     |" << "�Ա�   |" << "����  |"
				<< "����ְ�Ʊ�� |" << "����ְ��  |" << "����  |" << endl;
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
			cout << "**********************  ���ʻ�����Ϣ  *********************" << endl;
			cout << "|����ְ�Ʊ�� |" << "�����ƺ�  |" << "��������  |" << "ְλ����  |" << "���Բ���  |" << endl;
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
			cout << "****************  ���ÿ۳���Ϣ  ****************" << endl;
			cout << "|���ʿ���  |" << "ˮ��  |" << "���  |" << "����  |" << "��·���ӷ�  |" << endl;
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
			cout << "******************************************  ���ʵ�����  ******************************************" << endl;
			cout << "|����     |" << "���ʿ���  |" << "ˮ��  |"
				<< "���  |" << "����  |" << "��·���ӷ�  |"
				<< "˰��  |" << "Ӧ������  |" << "ʵ������  |"
				<< "�ر���  |" << endl;
			PrintPayrollDataInfo(Pp);
			cout << "**************************************************************************************************" << endl;
			break;
		}
		Pp = Pp->Next;
	}
}