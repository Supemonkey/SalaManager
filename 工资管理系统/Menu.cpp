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
	ifstream file("�˵�.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(44, 24);
	cout << "���������ѡ�";
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
		cout << "�����ɹ���������";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		break;
	}
	case '2':
		if (head == NULL && Ehead == NULL) {
			getCursor(30, 10);
			cout << "ϵͳ����Ϊ��,����ѯ�ѱ������ݡ�������";
			system("pause");
			system("cls");
			Ehead = ReadEssentInfoData();
			if (Ehead == NULL) {
				getCursor(30, 10);
				cout << "ϵͳ����Ϊ��,�Ƿ��ѯ�ޱ�������";
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
				cout << "����ͳ����ɡ�������";
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
			cout << "����ͳ����ɡ�������";
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
			cout << "����ͳ����ɡ�������";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		break;
	case '3': {
		if (head == NULL && Ehead == NULL) {
			getCursor(30, 10);
			cout << "ϵͳ����Ϊ��,����ѯ�ѱ������ݡ�������";
			system("pause");
			system("cls");
			Ehead = ReadEssentInfoData();
			if (Ehead == NULL) {
				getCursor(30, 10);
				cout << "ϵͳ����Ϊ��,�ޱ�������";
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
			cout << "�����ݱ��档����";
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
			cout << "�������ļ��ɹ�������";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		break;
	case '5':
		if (head == NULL) {
			getCursor(30, 10);
			cout << "ϵͳ����Ϊ��,����ѯ�ѱ������ݡ�������";
			system("pause");
			system("cls");
			Ehead = ReadEssentInfoData();
			if (Ehead == NULL) {
				getCursor(30, 10);
				cout << "ϵͳ����Ϊ��,�ޱ�������";
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
		cout << "û�д���ѡ�񡣡�����";
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
	ifstream file("�޸�.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "���������ѡ�";
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
		cout << "û�д���ѡ�񡣡�����" << endl;
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
	ifstream file("ɾ��.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
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

			cout << "ɾ���ɹ�����������" << endl;
		else
			cout << "��������ȷ��Ա����������������";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	case '2': {
		string num;
		getCursor(30, 10);
		cout << "�������Ա����ţ�";
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
			cout << "ɾ���ɹ�����������" << endl;
		else
			cout << "��������ȷ��Ա����š�������";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		getCursor(30, 10);
		cout << "û�д���ѡ�񡣡�����" << endl;
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
	ifstream file("����.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string name;
		int year;
		getCursor(30, 10);
		cout << "�������ʱ����ݣ�";
		cin >> year;
		getCursor(30, 12);
		cout << "������Ա����������";
		cin >> name;
		int E = FindEssent_Name(Ehead, name, year);
		if (E == 0)
			cout << "��������ȷ��Ա�����֡�����";
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
		cout << "�������ʱ����ݣ�";
		cin >> year;
		getCursor(30, 12);
		cout << "������Ա���ı�ţ�";
		cin >> num;
		int E = FindEssent_Num(Ehead, num, year);
		if (E == 0)
			cout << "��������ȷ��Ա����š�����";
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
		cout << "û�д���ѡ�񡣡�����" << endl;
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
	ifstream file("��ɾ��.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 18);
	cout << "���������ѡ�";
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
		cout << "û�д���ѡ�񡣡�����" << endl;
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
	ifstream file("��ӡ.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 24);
	cout << "���������ѡ�";
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
		cout << "�������ʱ����ݣ�";
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
		cout << "û�д���ѡ��ϵͳĬ���˳�";break;
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
	ifstream file("�޸���Ϣ.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 27);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");

	switch (m) {
	case '1': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		string poisonNumber;
		getCursor(30, 12);
		cout << "�������µ��ֻ����룺";
		cin >> poisonNumber;
		int M = ModifyEssentInfoPoisonNumber_Name(Ehead, name, poisonNumber);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '2': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		double SuppleSala;
		getCursor(30, 12);
		cout << "�����Ա���ĸ��Բ������ܷѣ�";
		cin >> SuppleSala;
		int M = ModifyWagesSuppleSala_Name(Whead, name, SuppleSala);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '3': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		double SpeciReward;
		getCursor(30, 12);
		cout << "�������Ա�����ر������ܷѣ�";
		cin >> SpeciReward;
		int M = ModifyPayrollDataSpeciReward_Name(Phead, name, SpeciReward);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '4': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		string Department;
		getCursor(30, 12);
		cout << "�������Ա���軻�Ĳ��ţ�";
		cin >> Department;
		int M = ModifyEssentInfoDepartment_Name(Ehead, name, Department);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '5': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		double WaterFee;
		getCursor(30, 12);
		cout << "�������Ա�����õ�ˮ�ѣ�";
		cin >> WaterFee;
		int M = ModifyDeductionsWaterFee_Name(Dhead, name, WaterFee);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '6': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		double CleanFee;
		getCursor(30, 12);
		cout << "�������Ա�����õ����ѣ�";
		cin >> CleanFee;
		int M = ModifyDeductionsCleanFee_Name(Dhead, name, CleanFee);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case'7': {
		string name;
		getCursor(30, 10);
		cout << "�������Ա�����֣�";
		cin >> name;
		double TVFee;
		getCursor(30, 12);
		cout << "�������Ա�����õı�·���ӷѣ�";
		cin >> TVFee;
		int M = ModifyDeductionsTVFee_Name(Dhead, name, TVFee);
		if (M == 0)
			cout << "��������ȷ��Ա�����֡�����";
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
		cout << "�޴�ѡ��";
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
	ifstream file("�޸���Ϣ.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 27);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		string poisonNumber;
		getCursor(30, 12);
		cout << "�������µ��ֻ����룺";
		cin >> poisonNumber;
		int M = ModifyEssentInfoPoisonNumber_Num(Ehead, num, poisonNumber);
		if (M == 0)
			cout << "��������ȷ��Ա����š�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '2': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		double SuppleSala;
		getCursor(30, 12);
		cout << "�����Ա���ĸ��Բ������ܷѣ�";
		cin >> SuppleSala;
		int M = ModifyWagesSuppleSala_Num(Whead, num, SuppleSala);
		if (M == 0)
			cout << "��������ȷ��Ա����š�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '3': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		double SpeciReward;
		getCursor(30, 12);
		cout << "�������Ա�����ر������ܷѣ�";
		cin >> SpeciReward;
		int M = ModifyPayrollDataSpeciReward_Num(Phead, num, SpeciReward);
		if (M == 0)
			cout << "��������ȷ��Ա����š�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '4': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		string Department;
		getCursor(30, 12);
		cout << "�������Ա���軻�Ĳ��ţ�";
		cin >> Department;
		int M = ModifyEssentInfoDepartment_Num(Ehead, num, Department);
		if (M == 0)
			cout << "��������ȷ��Ա����š�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '5': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		double WaterFee;
		getCursor(30, 12);
		cout << "�������Ա�����õ�ˮ�ѣ�";
		cin >> WaterFee;
		int M = ModifyDeductionsWaterFee_Num(Dhead, num, WaterFee);
		if (M == 0)
			cout << "��������ȷ��Ա����š�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '6': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		double EleFee;
		getCursor(30, 12);
		cout << "�������Ա�����õĵ�ѣ�";
		cin >> EleFee;
		int M = ModifyDeductionsEleFee_Num(Dhead, num, EleFee);
		if (M == 0)
			cout << "��������ȷ��Ա����š�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '7': {
		string num;
		getCursor(30, 10);
		cout << "������Ա����ţ�";
		cin >> num;
		double CleanFee;
		getCursor(30, 12);
		cout << "�������Ա�����õ����ѣ�";
		cin >> CleanFee;
		int M = ModifyDeductionsCleanFee_Num(Dhead, num, CleanFee);
		if (M == 0) {
			cout << "��������ȷ��Ա����š�����";
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
		cout << "������Ա����ţ�";
		cin >> num;
		double TVFee;
		getCursor(30, 12);
		cout << "�������Ա�����õı�·���ӷѣ�";
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