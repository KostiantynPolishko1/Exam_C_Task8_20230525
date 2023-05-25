#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

void print(vector<Item> &item, int& size)
{
	cout << "\n ������ ������: ";
	cout
		<< "\n| ��� " << "| ������������ " << "| ������������� " << "| ����"
		<< "| ������ ������" << "| ���� �����������" << "| ���� �������� |\n";

	for (int i = 0; i < size; i++)
	{
		cout
			<< "  " << i + 1 << "\t"
			<< item[i].name << "\t\t"
			<< item[i].manufacture << "\t\t"
			<< item[i].price << "\t"
			<< item[i].group << "\t\t"
			<< item[i].date_reciev << "\t"
			<< item[i].date_expired << endl;
	}
}

void print(vector<Item>& item, vector<int> &num)
{
	cout << "\n ������ ������ ����: ";
	cout
		<< "\n| ��� " << "| ������������ " << "| ������������� " << "| ����"
		<< "| ������ ������" << "| ���� �����������" << "| ���� �������� |\n";

	for(int i = 0; i < num.size(); i++)
		cout
			<< "  " << i + 1 << "\t"
		<< item[num[i]].name << "\t\t"
			<< item[num[i]].manufacture << "\t\t"
			<< item[num[i]].price << "\t"
			<< item[num[i]].group << "\t\t"
			<< item[num[i]].date_reciev << "\t"
			<< item[num[i]].date_expired << endl;
}

void print(int& n)
{
	string txt{};
	switch (n)
	{
	case 1:
		txt = "\"������������\"";
		break;
	case 2:
		txt = "\"�������������\"";
		break;
	case 3:
		txt = "\"����\"";
		break;
	case 4:
		txt = "\"������ ������\"";
		break;
	case 5:
		txt = "\"���� �����������\"";
		break;
	case 6:
		txt = "\"���� ��������\"";
		break;
	default :
		txt = "\"������\"";
	}

	cout << "\n\t������� " << txt << "-> ";
}

void print()
{
	cout << "\n ���������� \"�����\"";
	cout
		<< "\n\t��������:"
		<< "\n\t1 - ������ ������ �� ������"
		<< "\n\t2 - ���������� ������ �� �����"
		<< "\n\t3 - �������� ������ �� ������"
		<< "\n\t4 - ������ ������"
		<< "\n\t5 - ����� ������"
		<< "\n\t6 - ���������� ������"
		<< endl;

}