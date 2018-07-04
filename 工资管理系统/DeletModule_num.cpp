#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
int DeletEssentInfo_Num(EssentInfo *Ehead, string num) {
	EssentInfo *Ep, *Eq;
	Ep = Ehead->Next;
	Eq = Ehead;
	while (Ep != NULL) {
		if (strcmp(Ep->PosiId, num.c_str()) == 0 && Ep->Next == NULL) {
			Eq->Next = NULL;
			return 1;
		}
		else if (strcmp(Ep->PosiId, num.c_str()) == 0) {
			Eq->Next = Ep->Next;
			free(Ep);
			return 1;
		}
		Ep = Ep->Next;
		Eq = Eq->Next;
	}
	return 0;
}

void DeletStorage_Num(Storage *Shead, string num) {
	Storage *Sp, *Sq;
	Sp = Shead->Next;
	Sq = Shead;
	while (Sp != NULL) {
		if (strcmp(Sp->num, num.c_str()) == 0 && Sp->Next == NULL) {
			Sq->Next = NULL;
			break;
		}
		else if (strcmp(Sp->num, num.c_str()) == 0) {
			Sq->Next = Sp->Next;
			free(Sp);
			break;
		}
		Sp = Sp->Next;
		Sq = Sq->Next;
	}
}

void DeletWages_Num(Wages *Whead, string num) {
	Wages *Wp, *Wq;
	Wp = Whead->Next;
	Wq = Whead;
	while (Wp != NULL) {
		if (strcmp(Wp->num, num.c_str()) == 0 && Wp->Next == NULL) {
			Wq->Next = NULL;
			break;
		}
		else if (strcmp(Wp->num, num.c_str()) == 0) {
			Wq->Next = Wp->Next;
			free(Wp);
			break;
		}
		Wp = Wp->Next;
		Wq = Wq->Next;
	}
}

void DeletDeductions_Num(Deductions *Dhead, string num) {
	Deductions *Dp, *Dq;
	Dp = Dhead->Next;
	Dq = Dhead;
	while (Dp != NULL) {
		if (strcmp(Dp->num, num.c_str()) == 0 && Dp->Next == NULL) {
			Dq->Next = NULL;
			break;
		}
		else if (strcmp(Dp->num, num.c_str()) == 0) {
			Dq->Next = Dp->Next;
			free(Dp);
			break;
		}
		Dp = Dp->Next;
		Dq = Dq->Next;
	}
}

void DeletPayrollData_Num(PayrollData *Phead, string num) {
	PayrollData *Pp, *Pq;
	Pp = Phead->Next;
	Pq = Phead;
	while (Pp != NULL) {
		if (strcmp(Pp->num, num.c_str()) == 0 && Pp->Next == NULL) {
			Pq->Next = NULL;
			break;
		}
		else if (strcmp(Pp->num, num.c_str()) == 0) {
			Pq->Next = Pp->Next;
			free(Pp);
			break;
		}
		Pp = Pp->Next;
		Pq = Pq->Next;
	}
}