#include "Menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}
void Menu::MainMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("菜单.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(44, 24);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {head = CreateWageManage();
		Ehead = GetEssentInfo(head);
		Shead = GetStorage(head);
		Whead = GetWages(head);
		Dhead = GetDeductions(head);
		Phead = GetPayrollData(head);
		getCursor(30, 10);
		cout << "创建成功。。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		break;
	}
	case '2':
		if (head == NULL && Ehead == NULL) {
			getCursor(30, 10);
			cout << "系统数据为空,正查询已备份数据。。。。";
			system("pause");
			system("cls");
			Ehead = ReadEssentInfoData();
			if (Ehead == NULL) {
				getCursor(30, 10);
				cout << "系统数据为空,是否查询无备份数据";
				system("pause");
				system("cls");
				OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
			}
			else {
				Whead = ReadWagesData();
				Dhead = ReadDeductionsData();
				Phead = ReadPayrollDataData();
				Shead = ReadStorageData();
				ManangeSala(Phead, Ehead);
				EssentInfoBubbleSort(Ehead);
				WagesBubbleSort(Whead);
				DeductionsBubbleSort(Dhead);
				PayrollDataBubbleSort(Phead);
				StorageBubbleSort(Shead);
				getCursor(30, 10);
				cout << "数据统计完成。。。。";
				system("pause");
				system("cls");
				OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
			}
		}
		else if (Ehead != NULL) {
			ManangeSala(Phead, Ehead);
			EssentInfoBubbleSort(Ehead);
			WagesBubbleSort(Whead);
			DeductionsBubbleSort(Dhead);
			PayrollDataBubbleSort(Phead);
			StorageBubbleSort(Shead);
			getCursor(30, 10);
			cout << "数据统计完成。。。。";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		else {
			ManangeSala(Phead, Ehead);
			EssentInfoBubbleSort(Ehead);
			WagesBubbleSort(Whead);
			DeductionsBubbleSort(Dhead);
			PayrollDataBubbleSort(Phead);
			StorageBubbleSort(Shead);
			getCursor(30, 10);
			cout << "数据统计完成。。。。";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		break;
	case '3': {
		if (head == NULL && Ehead == NULL) {
			getCursor(30, 10);
			cout << "系统数据为空,正查询已备份数据。。。。";
			system("pause");
			system("cls");
			Ehead = ReadEssentInfoData();
			if (Ehead == NULL) {
				getCursor(30, 10);
				cout << "系统数据为空,无备份数据";
				system("pause");
				system("cls");
				OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
			}
			else {
				Whead = ReadWagesData();
				Dhead = ReadDeductionsData();
				Phead = ReadPayrollDataData();
				Shead = ReadStorageData();
				getCursor(30, 10);
				system("pause");
				system("cls");
				PrintMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			}
		}
		else if (Ehead != NULL)
		{
			getCursor(30, 10);
			system("pause");
			system("cls");
			PrintMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		}
		else {
			PrintMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		}
		break;
	}
	case '4':
		if (Ehead == NULL) {
			getCursor(30, 10);
			cout << "无数据保存。。。";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		else {
			WriteEssentInfoData(Ehead);
			WriteWagesData(Whead);
			WriteDeductionsData(Dhead);
			WritePayrollDataData(Phead);
			WriteStorageData(Shead);
			getCursor(30, 10);
			cout << "保存至文件成功。。。";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		break;
	case '5':
		if (head == NULL) {
			getCursor(30, 10);
			cout << "系统数据为空,正查询已备份数据。。。。";
			system("pause");
			system("cls");
			Ehead = ReadEssentInfoData();
			if (Ehead == NULL) {
				getCursor(30, 10);
				cout << "系统数据为空,无备份数据";
				system("pause");
				system("cls");
				OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
			}
			else {
				Whead = ReadWagesData();
				Dhead = ReadDeductionsData();
				Phead = ReadPayrollDataData();
				Shead = ReadStorageData();
				ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			}
		}
		else {
			ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		}
	case '6': {
		getCursor(30, 10);
		break;
	}
	default: {
		getCursor(30, 10);
		cout << "没有此项选择。。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		break;
	}
	}
}

void Menu::ModiMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("修改.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		ModiInforMenu_name(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	}
	case '2': {
		ModiInforMenu_num(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	}

	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		getCursor(30, 10);
		cout << "没有此项选择。。。。" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '2');
		break;
	}
	}
}
void Menu::DeleMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("删除.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		system("pause");
		system("cls");
		int m = DeletEssentInfo_Name(Ehead, name);
		DeletStorage_Name(Shead, name);
		DeletWages_Name(Whead, name);
		DeletDeductions_Name(Dhead, name);
		DeletPayrollData_Name(Phead, name);
		getCursor(30, 10);
		if (m != 0)

			cout << "删除成功。。。。。" << endl;
		else
			cout << "请输入正确的员工姓名。。。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	case '2': {
		string num;
		getCursor(30, 10);
		cout << "请输入此员工编号：";
		cin >> num;
		system("pause");
		system("cls");
		int m = DeletEssentInfo_Num(Ehead, num);
		DeletStorage_Num(Shead, num);
		DeletWages_Num(Whead, num);
		DeletDeductions_Num(Dhead, num);
		DeletPayrollData_Num(Phead, num);
		getCursor(30, 10);
		if (m != 0)
			cout << "删除成功。。。。。" << endl;
		else
			cout << "请输入正确的员工编号。。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		getCursor(30, 10);
		cout << "没有此项选择。。。。" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	}
}

void Menu::FindMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("查找.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string name;
		int year;
		getCursor(30, 10);
		cout << "请输入此时的年份：";
		cin >> year;
		getCursor(30, 12);
		cout << "请输入员工的姓名：";
		cin >> name;
		int E = FindEssent_Name(Ehead, name, year);
		if (E == 0)
			cout << "请输入正确的员工名字。。。";
		FindStorage_Name(Shead, name);
		FindWages_Name(Whead, name);
		FindDeductions_Name(Dhead, name);
		FindPayrollData_Name(Phead, name);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '5');
		break;
	}
	case '2': {
		string num;
		int year;
		getCursor(30, 10);
		cout << "请输入此时的年份：";
		cin >> year;
		getCursor(30, 12);
		cout << "请输入员工的编号：";
		cin >> num;
		int E = FindEssent_Num(Ehead, num, year);
		if (E == 0)
			cout << "请输入正确的员工编号。。。";
		FindStorage_Name(Shead, num);
		FindWages_Name(Whead, num);
		FindDeductions_Name(Dhead, num);
		FindPayrollData_Name(Phead, num);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '5');
		break;
	}
	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;

	default: {
		getCursor(30, 10);
		cout << "没有此项选择。。。。" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '5');
		break;
	}
	}
}
void Menu::ModiDeleMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("修删查.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 18);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1':ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '2':DeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '3':FindMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '4':MainMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		getCursor(30, 10);
		cout << "没有此项选择。。。。" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '3');
		break;
	}
	}
}

void Menu::PrintMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("打印.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 24);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		PrintStorage(Shead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '2': {
		PrintWages(Whead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '3': {
		int year;
		cout << "请输入此时的年份：";
		cin >> year;
		PinterEssent(Ehead, year);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '4': {
		PrintDeductions(Dhead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case'5': {
		PrintPayrollData(Phead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '6':MainMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		getCursor(30, 10);
		cout << "没有此项选择，系统默认退出";break;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	}
}
void Menu::ModiInforMenu_name(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("修改信息.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 27);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");

	switch (m) {
	case '1': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		string poisonNumber;
		getCursor(30, 12);
		cout << "请输入新的手机号码：";
		cin >> poisonNumber;
		int M = ModifyEssentInfoPoisonNumber_Name(Ehead, name, poisonNumber);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '2': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		double SuppleSala;
		getCursor(30, 12);
		cout << "请输此员工的各自补助的总费：";
		cin >> SuppleSala;
		int M = ModifyWagesSuppleSala_Name(Whead, name, SuppleSala);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '3': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		double SpeciReward;
		getCursor(30, 12);
		cout << "请输入此员工的特别奖励的总费：";
		cin >> SpeciReward;
		int M = ModifyPayrollDataSpeciReward_Name(Phead, name, SpeciReward);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '4': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		string Department;
		getCursor(30, 12);
		cout << "请输入此员工需换的部门：";
		cin >> Department;
		int M = ModifyEssentInfoDepartment_Name(Ehead, name, Department);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '5': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		double WaterFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的水费：";
		cin >> WaterFee;
		int M = ModifyDeductionsWaterFee_Name(Dhead, name, WaterFee);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '6': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		double CleanFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的清洁费：";
		cin >> CleanFee;
		int M = ModifyDeductionsCleanFee_Name(Dhead, name, CleanFee);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case'7': {
		string name;
		getCursor(30, 10);
		cout << "请输入此员工名字：";
		cin >> name;
		double TVFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的闭路电视费：";
		cin >> TVFee;
		int M = ModifyDeductionsTVFee_Name(Dhead, name, TVFee);
		if (M == 0)
			cout << "请输入正确的员工名字。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '8': ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '0':ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		getCursor(30, 10);
		cout << "无此选项";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	}
}
void Menu::ModiInforMenu_num(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("修改信息.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 27);
	cout << "请输入你的选项：";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		string poisonNumber;
		getCursor(30, 12);
		cout << "请输入新的手机号码：";
		cin >> poisonNumber;
		int M = ModifyEssentInfoPoisonNumber_Num(Ehead, num, poisonNumber);
		if (M == 0)
			cout << "请输入正确的员工编号。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '2': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		double SuppleSala;
		getCursor(30, 12);
		cout << "请输此员工的各自补助的总费：";
		cin >> SuppleSala;
		int M = ModifyWagesSuppleSala_Num(Whead, num, SuppleSala);
		if (M == 0)
			cout << "请输入正确的员工编号。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '3': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		double SpeciReward;
		getCursor(30, 12);
		cout << "请输入此员工的特别奖励的总费：";
		cin >> SpeciReward;
		int M = ModifyPayrollDataSpeciReward_Num(Phead, num, SpeciReward);
		if (M == 0)
			cout << "请输入正确的员工编号。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '4': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		string Department;
		getCursor(30, 12);
		cout << "请输入此员工需换的部门：";
		cin >> Department;
		int M = ModifyEssentInfoDepartment_Num(Ehead, num, Department);
		if (M == 0)
			cout << "请输入正确的员工编号。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '5': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		double WaterFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的水费：";
		cin >> WaterFee;
		int M = ModifyDeductionsWaterFee_Num(Dhead, num, WaterFee);
		if (M == 0)
			cout << "请输入正确的员工编号。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '6': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		double EleFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的电费：";
		cin >> EleFee;
		int M = ModifyDeductionsEleFee_Num(Dhead, num, EleFee);
		if (M == 0)
			cout << "请输入正确的员工编号。。。";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '7': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		double CleanFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的清洁费：";
		cin >> CleanFee;
		int M = ModifyDeductionsCleanFee_Num(Dhead, num, CleanFee);
		if (M == 0) {
			cout << "请输入正确的员工编号。。。";
		}
		getCursor(30, 12);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case'8': {
		string num;
		getCursor(30, 10);
		cout << "请输入员工编号：";
		cin >> num;
		double TVFee;
		getCursor(30, 12);
		cout << "请输入此员工所用的闭路电视费：";
		cin >> TVFee;
		ModifyDeductionsTVFee_Num(Dhead, num, TVFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '0':ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	}
}