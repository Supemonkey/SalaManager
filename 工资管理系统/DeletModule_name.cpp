#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
int DeletEssentInfo_Name(EssentInfo *Ehead, string name) {
	EssentInfo *Ep, *Eq;
	Ep = Ehead->Next;
	Eq = Ehead;
	while (Ep != NULL) {
		if (strcmp(Ep->Name, name.c_str()) == 0 && Ep->Next == NULL) {
			Eq->Next = NULL;
			return 1;
		}
		else if (strcmp(Ep->Name, name.c_str()) == 0) {
			Eq->Next = Ep->Next;
			free(Ep);
			return 1;
		}
		Ep = Ep->Next;
		Eq = Eq->Next;
	}
	return 0;
}

void DeletStorage_Name(Storage *Shead, string name) {
	Storage *Sp, *Sq;
	Sp = Shead->Next;
	Sq = Shead;
	while (Sp != NULL) {
		if (strcmp(Sp->name, name.c_str()) == 0 && Sp->Next == NULL) {
			Sq->Next = NULL;
			break;
		}
		else if (strcmp(Sp->name, name.c_str()) == 0) {
			Sq->Next = Sp->Next;
			free(Sp);
			break;
		}
		Sp = Sp->Next;
		Sq = Sq->Next;
	}
}

void DeletWages_Name(Wages *Whead, string name) {
	Wages *Wp, *Wq;
	Wp = Whead->Next;
	Wq = Whead;
	while (Wp != NULL) {
		if (strcmp(Wp->name, name.c_str()) == 0 && Wp->Next == NULL) {
			Wq->Next = NULL;
			break;
		}
		else if (strcmp(Wp->name, name.c_str()) == 0) {
			Wq->Next = Wp->Next;
			free(Wp);
			break;
		}
		Wp = Wp->Next;
		Wq = Wq->Next;
	}
}

void DeletDeductions_Name(Deductions *Dhead, string name) {
	Deductions *Dp, *Dq;
	Dp = Dhead->Next;
	Dq = Dhead;
	while (Dp != NULL) {
		if (strcmp(Dp->name, name.c_str()) == 0 && Dp->Next == NULL) {
			Dq->Next = NULL;
			break;
		}
		else if (strcmp(Dp->name, name.c_str()) == 0) {
			Dq->Next = Dp->Next;
			free(Dp);
			break;
		}
		Dp = Dp->Next;
		Dq = Dq->Next;
	}
}

void DeletPayrollData_Name(PayrollData *Phead, string name) {
	PayrollData *Pp, *Pq;
	int m = 0;
	Pp = Phead->Next;
	Pq = Phead;
	while (Pp != NULL) {
		if (strcmp(Pp->Name, name.c_str()) == 0 && Pp->Next == NULL) {
			Pq->Next = NULL;
			break;
		}
		else if (strcmp(Pp->Name, name.c_str()) == 0) {
			Pq->Next = Pp->Next;
			free(Pp);
			break;
		}
		Pp = Pp->Next;
		Pq = Pq->Next;
	}
}