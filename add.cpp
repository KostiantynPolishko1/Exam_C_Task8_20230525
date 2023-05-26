#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void add(vector<Item>& item, int& size)
{
	int n = 0, i = 0;
	cout << "\n Введте кол-во новых позиций: ";
	n = checkV();

	

	Item *temp = new Item[n];

	SetConsoleCP(1251);

	while (i < n)
	{
		size++;
		item.reserve(size);

		cout << "\n Поз " << size << endl;
		cout << " Наименование: ";
		getline(cin, temp[i].name);

		cout << " Производитель: ";
		getline(cin, temp[i].manufacture);

		cout << " Цена: ";
		temp[i].price = checkV();

		cout << " Группа товара: ";
		getline(cin, temp[i].group);

		cout << " Дата поступления: ";
		getline(cin, temp[i].date_reciev);

		cout << " Срок годности: ";
		getline(cin, temp[i].date_expired);

		item.push_back(temp[i]);
		i++;
		system("CLS");
	} 

	SetConsoleCP(1252);

	delete[] temp;
	temp = nullptr;

	print(item, size);
	print();
}