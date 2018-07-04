#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
//电话号码
int ModifyEssentInfoPoisonNumber_Num(EssentInfo *Ehead, string num, string poisonNumber) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (strcmp(Ep->PosiId, num.c_str()) == 0) {
			strcpy(Ep->PoisonNumber, poisonNumber.c_str());
			return 1;
		}
		Ep = Ep->Next;
	}
	return 0;
}
//特别奖励
int ModifyPayrollDataSpeciReward_Num(PayrollData *Phead, string num, double SpeciReward) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (strcmp(Pp->num, num.c_str()) == 0) {
			Pp->SpeciReward = SpeciReward;
			return 1;
		}
		Pp = Pp->Next;
	}
	return 0;
}
//各种补助
int ModifyWagesSuppleSala_Num(Wages *Whead, string num, double SuppleSala) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (strcmp(Wp->num, num.c_str()) == 0) {
			Wp->SuppleSala = SuppleSala;
			return 1;
		}
		Wp = Wp->Next;
	}
	return 0;
}
//部门
int ModifyEssentInfoDepartment_Num(EssentInfo *Ehead, string num, string Department) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (strcmp(Ep->PosiId, num.c_str()) == 0) {
			strcpy(Ep->Department, Department.c_str());
			return 1;
		}
		Ep = Ep->Next;
	}
	return 0;
}
//水费
int ModifyDeductionsWaterFee_Num(Deductions *Dhead, string num, double WaterFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->num, num.c_str()) == 0) {
			Dp->WaterFee = WaterFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}
//电费
int ModifyDeductionsEleFee_Num(Deductions *Dhead, string num, double EleFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->num, num.c_str()) == 0) {
			Dp->EleFee = EleFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}
//清洁费
int ModifyDeductionsCleanFee_Num(Deductions *Dhead, string num, double CleanFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->num, num.c_str()) == 0) {
			Dp->CleanFee = CleanFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}
//闭门电视费
int ModifyDeductionsTVFee_Num(Deductions *Dhead, string num, double TVFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (strcmp(Dp->num, num.c_str()) == 0) {
			Dp->TVFee = TVFee;
			return 1;
		}
		Dp = Dp->Next;
	}
	return 0;
}