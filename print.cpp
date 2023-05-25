#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

void print(vector<Item> &item, int& size)
{
	cout
		<< "\n| Поз " << "| Наименование " << "| Производитель " << "| Цена"
		<< "| Группа товара" << "| Дата поступления" << "| Срок годности |\n";

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
	cout
		<< "\n| Поз " << "| Наименование " << "| Производитель " << "| Цена"
		<< "| Группа товара" << "| Дата поступления" << "| Срок годности |\n";

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
		txt = "\"Наименование\"";
		break;
	case 2:
		txt = "\"Производитель\"";
		break;
	case 3:
		txt = "\"Цена\"";
		break;
	case 4:
		txt = "\"Группа товара\"";
		break;
	case 5:
		txt = "\"Дата поступления\"";
		break;
	case 6:
		txt = "\"Срок годности\"";
		break;
	default :
		txt = "\"Данные\"";
	}

	cout << "\n\tВведите " << txt << ", или q - ВЫХОД:\t";
}