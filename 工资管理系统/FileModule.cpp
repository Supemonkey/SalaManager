#pragma once
#include<iomanip>
#include"FunDefinition .h"
#include"Class.h"

void WriteEssentInfoData(EssentInfo *Ehead)
{
	ofstream outfile("EssentInfo.dat", ios::out);
	EssentInfo *Ep = Ehead->Next;
	EssentInfo temp;
	while (Ep != NULL) {
		temp = *Ep;
		outfile.write((char*)(&temp), sizeof(temp));
		Ep = Ep->Next;
	}
	outfile.close();
}
void WriteWagesData(Wages *Whead)
{
	ofstream outfile("Wages.dat", ios::out);
	Wages *Wp = Whead->Next;
	Wages temp;
	while (Wp != NULL) {
		temp = *Wp;
		outfile.write((char*)(&temp), sizeof(temp));
		Wp = Wp->Next;
	}
	outfile.close();
}
void WriteStorageData(Storage *Shead)
{
	Storage *Sp;
	Storage temp;
	Sp = Shead->Next;
	ofstream outfile("Storage.dat", ios::out);
	while (Sp != NULL) {
		temp = *Sp;
		outfile.write((char*)(&temp), sizeof(temp));
		Sp = Sp->Next;
	}
	outfile.close();
}
void WriteDeductionsData(Deductions *Dhead) {
	Deductions *Dp;
	Deductions temp;
	Dp = Dhead->Next;
	ofstream outfile("Deductions.dat", ios::out);
	while (Dp != NULL) {
		temp = *Dp;
		outfile.write((char*)(&temp), sizeof(temp));
		Dp = Dp->Next;
	}
	outfile.close();
}
void WritePayrollDataData(PayrollData *Phead) {
	PayrollData *Pp;
	PayrollData temp;
	Pp = Phead->Next;
	ofstream outfile("PayrollData.dat", ios::out);
	while (Pp != NULL) {
		temp = *Pp;
		outfile.write((char*)(&temp), sizeof(temp));
		Pp = Pp->Next;
	}
	outfile.close();
}

EssentInfo * ReadEssentInfoData() {
	ifstream infile("EssentInfo.dat", ios::in);
	if (infile.eof()) {
		return NULL;
	}
	EssentInfo * Ep, *Eq, *Ehead;
	Eq = new EssentInfo;
	Ep = Ehead = Eq;
	EssentInfo temp;
	int m = 0;
	while (!infile.eof()) {
		infile.read((char*)(&temp), sizeof(temp));
		if (infile.eof())  break;
		Eq = new EssentInfo;
		Ep->Next = Eq;
		Ep = Eq;
		*Ep = temp;
	}
	Ep->Next = NULL;
	infile.close();
	return Ehead;
}
Wages *ReadWagesData() {
	Wages * Wp, *Wq, *Whead;
	Wq = new Wages;
	Wp = Whead = Wq;
	Wages temp;
	ifstream infile("Wages.dat", ios::in);
	while (!infile.eof()) {
		infile.read((char*)(&temp), sizeof(temp));
		if (infile.eof()) break;
		Wq = new Wages;
		Wp->Next = Wq;
		Wp = Wq;
		*Wp = temp;
	}
	Wp->Next = NULL;
	infile.close();
	return Whead;
}

Deductions *ReadDeductionsData() {
	Deductions *Dhead, *Dp, *Dq;
	Deductions temp;
	Dq = new Deductions;
	Dp = Dhead = Dq;
	ifstream infile("Deductions.dat", ios::in);
	while (!infile.eof()) {
		infile.read((char*)(&temp), sizeof(temp));
		if (infile.eof()) break;
		Dq = new Deductions;
		Dp->Next = Dq;
		Dp = Dq;
		*Dp = temp;
	}
	Dp->Next = NULL;
	infile.close();
	return Dhead;
}

PayrollData *ReadPayrollDataData() {
	PayrollData *Phead, *Pp, *Pq;
	PayrollData temp;
	Pq = new PayrollData;
	Pp = Phead = Pq;
	ifstream infile("PayrollData.dat", ios::in);
	while (!infile.eof()) {
		infile.read((char*)(&temp), sizeof(temp));
		if (infile.eof()) break;
		Pq = new PayrollData;
		Pp->Next = Pq;
		Pp = Pq;
		*Pp = temp;
	}
	Pp->Next = NULL;
	infile.close();
	return Phead;
}

Storage *ReadStorageData() {
	Storage *Shead, *Sp, *Sq;
	Storage temp;
	Sq = new Storage;
	Sp = Shead = Sq;
	ifstream infile("Storage.dat", ios::in);
	while (!infile.eof()) {
		infile.read((char*)(&temp), sizeof(temp));
		if (infile.eof()) break;
		Sq = new Storage;
		Sp->Next = Sq;
		Sp = Sq;
		*Sp = temp;
	}
	Sp->Next = NULL;
	infile.close();
	return Shead;
}