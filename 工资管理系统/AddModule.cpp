#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"FunDefinition .h"
#include<iomanip>

using namespace std;
EssentInfo *GetEssentInfo(WorkPoison *head) {
	WorkPoison *p;
	Ess *Ep, *Eq, *Ehead;
	Eq = new Ess;
	Ep = Eq;
	Ehead = Eq;
	p = head->Next;
	while (p != NULL) {
		Eq = new Ess;
		Ep->Next = Eq;
		Ep = Eq;
		Ep->Age = p->People.Age[0];
		Ep->WorkAge = p->People.Age[1];
		strcpy(Ep->Salacard, p->People.EmpInfo[0].c_str());
		strcpy(Ep->Sex, p->People.EmpInfo[3].c_str());
		strcpy(Ep->Idcard, p->People.EmpInfo[1].c_str());
		strcpy(Ep->Name, p->People.EmpInfo[2].c_str());
		strcpy(Ep->Department, p->People.EmpInfo[4].c_str());
		strcpy(Ep->PosiName, p->People.EmpInfo[5].c_str());
		strcpy(Ep->PosiId, p->People.EmpInfo[6].c_str());
		strcpy(Ep->HomeNumber, p->People.EmpInfo[7].c_str());
		strcpy(Ep->PoisonNumber, p->People.EmpInfo[8].c_str());
		p = p->Next;
	}
	Ep->Next = NULL;
	return Ehead;
}
Storage *GetStorage(WorkPoison *head) {
	WorkPoison *p;
	Sto *Sp, *Sq, *Shead;
	p = head->Next;
	Sq = new Sto;
	Shead = Sq;
	Sp = Sq;
	int i = 1;
	while (p != NULL) {
		Sq = new Sto;
		Sp->Next = Sq;
		Sp = Sq;
		Sp->age = p->People.Age[0];
		strcpy(Sp->sex, p->People.EmpInfo[3].c_str());
		strcpy(Sp->name, p->People.EmpInfo[2].c_str());
		strcpy(Sp->num, p->People.EmpInfo[6].c_str());
		strcpy(Sp->Posi, p->People.EmpInfo[5].c_str());
		Sp->Sala = (p->People.Salary[0] + p->People.Salary[1]
			+ p->People.Salary[2] + p->People.Salary[3]) -
			(p->People.Cost[0] + p->People.Cost[1] +
				p->People.Cost[2] + p->People.Cost[3]) -
			Tax(p->People.Salary[0] + p->People.Salary[1]);
		Sp->rank = i;
		Sp->log = 1;
		p = p->Next;
		i++;
	}
	Sp->Next = NULL;
	return Shead;
}
Wages *GetWages(WorkPoison *head) {
	WorkPoison *p;
	Wage *Wp, *Wq, *Whead;
	p = head->Next;
	Wq = new Wage;
	Whead = Wq;
	Wp = Wq;
	while (p != NULL) {
		Wq = new Wage;
		Wp->Next = Wq;
		Wp = Wq;
		strcpy(Wp->name, p->People.EmpInfo[2].c_str());
		strcpy(Wp->num, p->People.EmpInfo[6].c_str());
		strcpy(Wp->Posiname, p->People.EmpInfo[5].c_str());
		Wp->BasicSala = p->People.Salary[0];
		Wp->PosiSala = p->People.Salary[1];
		Wp->SuppleSala = p->People.Salary[2];
		p = p->Next;
	}
	Wp->Next = NULL;
	return Whead;
}
Deductions *GetDeductions(WorkPoison *head) {
	WorkPoison *p;
	Dedu *Dp, *Dq, *Dhead;
	Dq = new Dedu;
	Dhead = Dq;
	Dp = Dq;
	p = head->Next;
	while (p != NULL) {
		Dq = new Dedu;
		Dp->Next = Dq;
		Dp = Dq;
		strcpy(Dp->name, p->People.EmpInfo[2].c_str());
		strcpy(Dp->num, p->People.EmpInfo[6].c_str());
		strcpy(Dp->SalaId, p->People.EmpInfo[0].c_str());
		Dp->CleanFee = p->People.Cost[2];
		Dp->EleFee = p->People.Cost[1];
		Dp->TVFee = p->People.Cost[3];
		Dp->WaterFee = p->People.Cost[0];
		p = p->Next;
	}
	Dp->Next = NULL;
	return Dhead;
}
PayrollData *GetPayrollData(WorkPoison *head) {
	WorkPoison *p;
	Payroll *Pq, *Pp, *Phead;
	p = head->Next;
	Pq = new Payroll;
	Pp = Pq;
	Phead = Pq;
	while (p != NULL) {
		Pq = new Payroll;
		Pp->Next = Pq;
		Pp = Pq;
		Pp->Next = NULL;
		strcpy(Pp->num, p->People.EmpInfo[6].c_str());
		strcpy(Pp->SalaId, p->People.EmpInfo[0].c_str());
		strcpy(Pp->Name, p->People.EmpInfo[2].c_str());
		Pp->EleFee = p->People.Cost[1];
		Pp->TVFee = p->People.Cost[3];
		Pp->WaterFee = p->People.Cost[0];
		Pp->cleanFee = p->People.Cost[2];
		Pp->ShouldPay = p->People.Salary[0] + p->People.Salary[1];
		Pp->SpeciReward = p->People.Salary[3];
		Pp->TaxFee = Tax(Pp->ShouldPay);
		Pp->Payroll = Pp->ShouldPay - Pp->TaxFee;
		p = p->Next;
	}
	return Phead;
}