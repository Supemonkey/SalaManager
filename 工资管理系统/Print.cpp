#pragma once
#include<iomanip>
#include"FunDefinition .h"
#include"Class.h"
void PrintEssentInfo(EssentInfo *Ep, int year) {
	cout << "|";
	cout << setw(9) << left << Ep->Name << "|"
		<< setw(7) << left << Ep->Sex << "|"
		<< setw(6) << left << Ep->Age << " |"
		<< setw(9) << left << Ep->Idcard << " |"
		<< setw(12) << left << Ep->PosiId << " |"
		<< setw(9) << left << Ep->PosiName << " |"
		<< setw(8) << left << Ep->Department << " |"
		<< setw(5) << left << (year - Ep->WorkAge) << " |"
		<< setw(8) << left << Ep->PoisonNumber << " |"
		<< setw(8) << left << Ep->HomeNumber << " |"
		<< setw(9) << left << Ep->Salacard << "|" << endl;
}
void PrintStorageInfo(Storage *Sp) {
	cout << "|";
	cout << setw(5) << left << Sp->rank << "|"
		<< setw(9) << left << Sp->name << "|"
		<< setw(7) << left << Sp->sex << "|"
		<< setw(6) << left << Sp->age << "|"
		<< setw(13) << left << Sp->num << "|"
		<< setw(10) << left << Sp->Posi << "|"
		<< setw(6) << left << Sp->Sala;
	cout << "|" << endl;
}
void PrintWagesInfo(Wages *Wp) {
	cout << "|";
	cout << setw(13) << left << Wp->num << "|"
		<< setw(10) << left << Wp->Posiname << "|"
		<< setw(10) << left << Wp->BasicSala << "|"
		<< setw(10) << left << Wp->PosiSala << "|"
		<< setw(10) << left << Wp->SuppleSala;
	cout << "|" << endl;
}

void PrintDeductionsInfo(Deductions *Dp) {
	cout << "|";
	cout << setw(10) << left << Dp->SalaId << "|"
		<< setw(6) << left << Dp->WaterFee << "|"
		<< setw(6) << left << Dp->EleFee << "|"
		<< setw(8) << left << Dp->CleanFee << "|"
		<< setw(12) << left << Dp->TVFee;
	cout << "|" << endl;
}
void PrintPayrollDataInfo(PayrollData *Pp) {
	cout << "|";
	cout << setw(9) << left << Pp->Name << "|"
		<< setw(10) << left << Pp->SalaId << "|"
		<< setw(6) << left << Pp->WaterFee << "|"
		<< setw(6) << left << Pp->EleFee << "|"
		<< setw(8) << left << Pp->cleanFee << "|"
		<< setw(12) << left << Pp->TVFee << "|"
		<< setw(6) << left << Pp->TaxFee << "|"
		<< setw(10) << left << Pp->ShouldPay << "|"
		<< setw(10) << left << Pp->Payroll << "|"
		<< setw(10) << left << Pp->SpeciReward;
	cout << "|" << endl;
}