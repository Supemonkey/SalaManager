#pragma once
#include<iomanip>
#include"FunDefinition .h"
#include"Class.h"
EssentInfo *EssentInfoBubbleSort(EssentInfo *Ehead)
{
	EssentInfo *Ep, *Ep1, *Eback, *fhead;
	Ep = Ehead->Next;
	Ep1 = Ep->Next;
	fhead = Ehead;
	Eback = NULL;
	while (Ehead->Next != Eback) {
		if (Ep1 != Eback) {
			if (strcmp(Ep->PosiId, Ep1->PosiId) > 0) {
				Ep->Next = Ep1->Next;
				Ep1->Next = Ep;
				fhead->Next = Ep1;
			}
			fhead = fhead->Next;
			Ep = fhead->Next;
			Ep1 = Ep->Next;
		}
		else {
			Eback = Ep;
			fhead = Ehead;
			Ep = fhead->Next;
			Ep1 = Ep->Next;
		}
	}
	return Ehead;
}
Wages *WagesBubbleSort(Wages *Whead)
{
	Wages *Wp, *Wp1, *Wback, *fhead;
	Wp = Whead->Next;
	Wp1 = Wp->Next;
	fhead = Whead;
	Wback = NULL;
	while (Whead->Next != Wback) {
		if (Wp1 != Wback) {
			if (strcmp(Wp->num, Wp1->num) > 0) {
				Wp->Next = Wp1->Next;
				Wp1->Next = Wp;
				fhead->Next = Wp1;
			}
			fhead = fhead->Next;
			Wp = fhead->Next;
			Wp1 = Wp->Next;
		}
		else {
			Wback = Wp;
			fhead = Whead;
			Wp = fhead->Next;
			Wp1 = Wp->Next;
		}
	}
	return Whead;
}

Deductions *DeductionsBubbleSort(Deductions *Dhead)

{
	Deductions *Dp, *Dp1, *Dback, *fhead;
	Dp = Dhead->Next;
	Dp1 = Dp->Next;
	fhead = Dhead;
	Dback = NULL;
	while (Dhead->Next != Dback) {
		if (Dp1 != Dback) {
			if (strcmp(Dp->num, Dp1->num) > 0) {
				Dp->Next = Dp1->Next;
				Dp1->Next = Dp;
				fhead->Next = Dp1;
			}
			fhead = fhead->Next;
			Dp = fhead->Next;
			Dp1 = Dp->Next;
		}
		else {
			Dback = Dp;
			fhead = Dhead;
			Dp = fhead->Next;
			Dp1 = Dp->Next;
		}
	}
	return Dhead;
}
Storage *Rankng(Storage *Shead) {
	Storage *Sp, *Sp1, *Sback, *fhead;
	Sp = Shead->Next;
	Sp1 = Sp->Next;
	fhead = Shead;
	Sback = NULL;
	while (Shead->Next != Sback) {
		if (Sp1 != Sback) {
			if (Sp->Sala < Sp1->Sala) {
				Sp->Next = Sp1->Next;
				Sp1->Next = Sp;
				fhead->Next = Sp1;
			}
			fhead = fhead->Next;
			Sp = fhead->Next;
			Sp1 = Sp->Next;
		}
		else {
			Sback = Sp;
			fhead = Shead;
			Sp = fhead->Next;
			Sp1 = Sp->Next;
		}
	}
	Sp = Shead->Next;
	int i = 1;
	while (Sp != NULL) {
		Sp->rank = i;
		Sp = Sp->Next;
		i++;
	}
	return Shead;
}
Storage *StorageBubbleSort(Storage *Shead)
{
	Shead = Rankng(Shead);
	Storage *Sp, *Sp1, *Sback, *fhead;
	Sp = Shead->Next;
	Sp1 = Sp->Next;
	fhead = Shead;
	Sback = NULL;
	while (Shead->Next != Sback) {
		if (Sp1 != Sback) {
			if (strcmp(Sp->num, Sp1->num) > 0) {
				Sp->Next = Sp1->Next;
				Sp1->Next = Sp;
				fhead->Next = Sp1;
			}
			fhead = fhead->Next;
			Sp = fhead->Next;
			Sp1 = Sp->Next;
		}
		else {
			Sback = Sp;
			fhead = Shead;
			Sp = fhead->Next;
			Sp1 = Sp->Next;
		}
	}
	return Shead;
}
PayrollData *PayrollDataBubbleSort(PayrollData *Phead)
{
	PayrollData *Pp, *Pp1, *Pback, *fhead;
	Pp = Phead->Next;
	Pp1 = Pp->Next;
	fhead = Phead;
	Pback = NULL;
	while (Phead->Next != Pback) {
		if (Pp1 != Pback) {
			if (strcmp(Pp->num, Pp1->num) > 0) {
				Pp->Next = Pp1->Next;
				Pp1->Next = Pp;
				fhead->Next = Pp1;
			}
			fhead = fhead->Next;
			Pp = fhead->Next;
			Pp1 = Pp->Next;
		}
		else {
			Pback = Pp;
			fhead = Phead;
			Pp = fhead->Next;
			Pp1 = Pp->Next;
		}
	}
	return Phead;
}