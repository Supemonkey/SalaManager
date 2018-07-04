#include"FunDefinition .h"
#include"Class.h"
#include"Menu.h"
int main()
{
	WorkPoison *head = NULL;
	EssentInfo *Ehead = NULL;
	Storage *Shead = NULL;
	Wages *Whead = NULL;
	Deductions *Dhead = NULL;
	PayrollData *Phead = NULL;
	Menu M;
	M.MainMenu(head, Ehead, Shead, Whead, Dhead, Phead);
	system("pause");
	return 0;
}