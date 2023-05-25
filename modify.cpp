#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void modify(vector<Item>& item, int& size)
{
	int i = 0;

	SetConsoleCP(1251);
	while (true)
	{
		cout << "\n Укажите позицию для изменения: ";
		i = checkV();
		i--;
		if (i > size)
		{
			cout << "\n Значение вне диапазона 1..." << size << endl;
			continue;
		}

		cout << "\n Поз " << i+1 << endl;
		cout << "\n Наименование: ";
		getline(cin, item[i].name);

		cout << "\n Производитель: ";
		getline(cin, item[i].manufacture);

		cout << "\n Цена: ";
		item[i].price = checkV();

		cout << "\n Группа товара: ";
		getline(cin, item[i].group);

		cout << "\n Дата поступления: ";
		getline(cin, item[i].date_reciev);

		cout << "\n Срок годности: ";
		getline(cin, item[i].date_expired);

		system("CLS");
		SetConsoleCP(1252);
		print(item, size);

		cout << "\n Для выхода нажмите \"0\": ";
		i = checkV();
		if (!i)
		{
			cout << "\n\tСТОП ИЗМЕНЕНИЯ. EXIT\n";
			break;
		}
	}
}