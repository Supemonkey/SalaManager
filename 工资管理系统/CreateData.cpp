#pragma once
#include"Menu.h"
#include"FunDefinition .h"
#include"Class.h"
//创建
WorkPoison *CreateWageManage()
{
	WorkPoison *head, *p, *q;
	int i = 1;
	int m = 1;
	q = new WorkPoison;
	head = q;
	p = q;
	int year;
	cout << "请输入此时的年份：";
	cin >> year;
	while (m != 0) {
		q = new WorkPoison;
		p->Next = q;
		p = q;
		p->People.Age[1] = year;
		cout << "第" << i << "个人信息" << endl;
		cout << "请依此输入职工基本信息" << endl;
		cout << "工资卡号，身份证号，姓名，性别，部门，技术职称，"
			"技术职称编号，家庭号码，电话号码，年龄" << endl;
		cin >> p->People.EmpInfo[0] >> p->People.EmpInfo[1] >>
			p->People.EmpInfo[2] >> p->People.EmpInfo[3] >>
			p->People.EmpInfo[4] >> p->People.EmpInfo[5] >>
			p->People.EmpInfo[6] >> p->People.EmpInfo[7] >>
			p->People.EmpInfo[8] >> p->People.Age[0];
		if (p->People.EmpInfo[5] == "技术员") {
			double hour;
			cout << "请输入上班时长：";
			cin >> hour;
			Technology Tec(p->People, hour);
			p->People.Salary[0] = Tec.GetBasicSala();
			p->People.Salary[1] = Tec.GetPosiSala();
		}
		else if (p->People.EmpInfo[5] == "经理") {
			Manager Man(p->People);
			p->People.Salary[0] = Man.GetBasicSala();
			p->People.Salary[1] = Man.GetPosiSala();
		}
		else if (p->People.EmpInfo[5] == "销售员") {
			int m;
			cout << "请输入产品销出数量：";
			cin >> m;
			Sales Sale(p->People, m);
			p->People.Salary[0] = Sale.GetBasicSala();
			p->People.Salary[1] = Sale.GetPosiSala();
		}
		else if (p->People.EmpInfo[5] == "销售经理") {
			SalesManager SaleMan(p->People);
			p->People.Salary[0] = SaleMan.GetBasicSala();
			p->People.Salary[1] = SaleMan.GetPosiSala();
		}
		else {
			cout << "无此职业，请重新输入。。。" << endl;
			system("pause");
			system("cls");
			continue;
		}
		cout << "第" << i << "组数据输入完成，是否继续？" << endl;
		cin >> m;
		i++;
	}
	p->Next = NULL;
	system("cls");
	return head;
}