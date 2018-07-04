#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
//电话号码
int ModifyEssentInfoPoisonNumber_Name(EssentInfo *Ehead, string name, string poisonNumber) {
	EssentInfo *Ep;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (strcmp(Ep->Name, name.c_str()) == 0) {
			strcpy(Ep->PoisonNumber, poisonNumber.c_str());
			return 1;
		}
		Ep = Ep->Next;
	}
	return 0;
}
//特别奖励
int ModifyPayrollDataSpeciReward_Name(PayrollData *Phead, string name, double SpeciReward) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (strcmp(Pp->Name, name.c_str()) == 0) {
			Pp->SpeciReward = SpeciReward;
			return 1;
		}
		Pp = Pp->Next;
	}
	return 0;
}
//各种补助
int ModifyWagesSuppleSala_Name(Wages *Whead, string name, double SuppleSala) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (strcmp(Wp->name, name.c_str()) == 0) {
			Wp->SuppleSala = SuppleSala;
			return 1;
		}
		Wp = Wp->Next;
	}
	return 0;
}
//部门
int ModifyEssentInfoDepartment_Name(EssentInfo *Ehead, string name, string Department) {
	EssentInfo *Ep;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (strcmp(Ep->Name, name.c_str()) == 0) {
			strcpy(Ep->Department, Department.c_str());
			return 1;
		}
		Ep = Ep->Next;
	}
	return 0;
}
//水费
int ModifyDeductionsWaterFee_Name(Deductions *Dhead, string name, double WaterFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->name, name.c_str()) == 0) {
			Dp->WaterFee = WaterFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}
//电费
int ModifyDeductionsEleFee_Name(Deductions *Dhead, string name, double EleFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->name, name.c_str()) == 0) {
			Dp->EleFee = EleFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}
//清洁费
int ModifyDeductionsCleanFee_Name(Deductions *Dhead, string name, double CleanFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->name, name.c_str()) == 0) {
			Dp->CleanFee = CleanFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}
//闭门电视费
int ModifyDeductionsTVFee_Name(Deductions *Dhead, string name, double TVFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->name, name.c_str()) == 0) {
			Dp->TVFee = TVFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}