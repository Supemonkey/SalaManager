#pragma once
#include<iostream>
#include<windows.h>
#include"Class.h"
#include<fstream>
using namespace std;
//找出要打印的数据
void PinterEssent(EssentInfo *Ehead, int year);
void PrintStorage(Storage *Shead);
void PrintWages(Wages *Whead);
void PrintDeductions(Deductions *Dhead);
void PrintPayrollData(PayrollData *Phead);
//完成打印功能
void PrintEssentInfo(EssentInfo *Ep, int year);
void PrintStorageInfo(Storage *Sp);
void PrintWagesInfo(Wages *Wp);
void PrintDeductionsInfo(Deductions *Dp);
void PrintPayrollDataInfo(PayrollData *Pp);

//创建
WorkPoison *CreateWageManage();

EssentInfo *GetEssentInfo(WorkPoison *head);
Storage *GetStorage(WorkPoison *head);
Wages *GetWages(WorkPoison *head);
Deductions *GetDeductions(WorkPoison *head);
PayrollData *GetPayrollData(WorkPoison *head);
double Tax(double ShouldPay);
//按照姓名删除
int DeletEssentInfo_Name(EssentInfo *Ehead, string name);
void DeletStorage_Name(Storage *Shead, string name);
void DeletWages_Name(Wages *Whead, string name);
void DeletDeductions_Name(Deductions *Dhead, string name);
void DeletPayrollData_Name(PayrollData *Phead, string name);
//按照编号删除
int DeletEssentInfo_Num(EssentInfo *Ehead, string num);
void DeletStorage_Num(Storage *Shead, string num);
void DeletWages_Num(Wages *Whead, string num);
void DeletDeductions_Num(Deductions *Dhead, string num);
void DeletPayrollData_Num(PayrollData *Phead, string num);
//按名字查找
int FindEssent_Name(EssentInfo *Ehead, string name, int year);
void FindStorage_Name(Storage *Shead, string name);
void FindWages_Name(Wages *Whead, string name);
void FindDeductions_Name(Deductions *Dhead, string name);
void FindPayrollData_Name(PayrollData *Phead, string name);
//按编号查找
int FindEssent_Num(EssentInfo *Ehead, string num, int year);
void FindStorage_Num(Storage *Shead, string num);
void FindWages_Num(Wages *Whead, string num);
void FindDeductions_Num(Deductions *Dhead, string num);
void FindPayrollData_Num(PayrollData *Phead, string num);
//按照姓名修改信息
int ModifyEssentInfoPoisonNumber_Name(EssentInfo *Ehead, string name, string poisonNumber);
int ModifyPayrollDataSpeciReward_Name(PayrollData *Phead, string name, double SpeciReward);
int ModifyWagesSuppleSala_Name(Wages *Whead, string name, double SuppleSala);
int ModifyEssentInfoDepartment_Name(EssentInfo *Ehead, string name, string Department);
int ModifyDeductionsWaterFee_Name(Deductions *Dhead, string name, double WaterFee);
int ModifyDeductionsEleFee_Name(Deductions *Dhead, string name, double EleFee);
int ModifyDeductionsCleanFee_Name(Deductions *Dhead, string name, double CleanFee);
int ModifyDeductionsTVFee_Name(Deductions *Dhead, string name, double TVFee);
//按照编号修改信息
int ModifyEssentInfoPoisonNumber_Num(EssentInfo *Ehead, string num, string poisonNumber);
int ModifyPayrollDataSpeciReward_Num(PayrollData *Phead, string num, double SpeciReward);
int ModifyWagesSuppleSala_Num(Wages *Whead, string num, double SuppleSala);
int ModifyEssentInfoDepartment_Num(EssentInfo *Ehead, string num, string Department);
int ModifyDeductionsWaterFee_Num(Deductions *Dhead, string num, double WaterFee);
int ModifyDeductionsEleFee_Num(Deductions *Dhead, string num, double EleFee);
int ModifyDeductionsCleanFee_Num(Deductions *Dhead, string num, double CleanFee);
int ModifyDeductionsTVFee_Num(Deductions *Dhead, string num, double TVFee);
//排序
EssentInfo *EssentInfoBubbleSort(EssentInfo *Ehead);
Wages *WagesBubbleSort(Wages *Whead);
Deductions *DeductionsBubbleSort(Deductions *Dhead);
PayrollData *PayrollDataBubbleSort(PayrollData *Phead);
Storage *StorageBubbleSort(Storage *Shead);
//排行榜
Storage * Rankng(Storage *Shead);
//经理工资
void ManangeSala(PayrollData *Phead, EssentInfo *Ehead);

//得到光标
void getCursor(int x, int y);
//退出选项
void OptionMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead, char s);

//写入文件
void WriteEssentInfoData(EssentInfo *Ehead);
void WriteWagesData(Wages *Whead);
void WriteDeductionsData(Deductions *Dhead);
void WritePayrollDataData(PayrollData *Phead);
void WriteStorageData(Storage *Shead);
//读取数据
EssentInfo * ReadEssentInfoData();
Wages *ReadWagesData();
Deductions *ReadDeductionsData();
PayrollData *ReadPayrollDataData();
Storage *ReadStorageData();
