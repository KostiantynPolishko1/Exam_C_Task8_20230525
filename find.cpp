#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

void findName(Item item[], int& size)
{
	setlocale(LC_ALL, "Russian");

	bool tf = true;
	int count = 0;
	string fname;
	vector<int> num;
	num.reserve(size);

	do
	{
		cout << "\n\tВведите наименование продукта, или q - ВЫХОД:\t";
		SetConsoleCP(1251);
		getline(cin, fname);

		if (fname == "q")
		{
			cout << "\n\tСТОП ПОИСК. EXIT\n";
			break;
		}
		for (int i = 0; i < size; i++)
			if (item[i].name.find(fname) != -1)
			{
				num.push_back(i);
				count++;
				tf = false;
			}
		num.resize(count);
		print(item, num);

		if (tf)
		{
			cout << "\tНе найден товар по наименованию\n";
			continue;
		}

	} while (tf != false);

	SetConsoleCP(1252);
}