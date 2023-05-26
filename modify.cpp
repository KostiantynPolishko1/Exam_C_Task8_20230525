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
		cout << " Наименование: ";
		getline(cin, item[i].name);

		cout << " Производитель: ";
		getline(cin, item[i].manufacture);

		cout << " Цена: ";
		item[i].price = checkV();

		cout << " Группа товара: ";
		getline(cin, item[i].group);

		cout << " Дата поступления: ";
		getline(cin, item[i].date_reciev);

		cout << " Срок годности: ";
		getline(cin, item[i].date_expired);

		system("CLS");
		SetConsoleCP(1252);
		print(item, size);
		print();

		cout << "\n Для нажмите \"0\" - выход или \"1\" - продолжить: ";
		i = checkV();
		if (!i)
		{
			cout << "\n\tСТОП ИЗМЕНЕНИЯ. EXIT\n";
			break;
		}
	}
}