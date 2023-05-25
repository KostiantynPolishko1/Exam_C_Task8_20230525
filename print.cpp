#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

void print(Item item[], int& size)
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

void print(Item item[], vector<int> &num)
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