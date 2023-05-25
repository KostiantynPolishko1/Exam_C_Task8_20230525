#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

void find(Item item[], int& size, int n)
{
	setlocale(LC_ALL, "Russian");

	bool tf = true;
	int count = 0, price = 0;
	string fname, txt;
	vector<int> num;
	num.reserve(size);

	print(n);

	do
	{
		if (n == 3)
			price = checkV();
		else
		{
			SetConsoleCP(1251);
			getline(cin, fname);
		}
		
		if (fname == "q")
		{
			cout << "\n\tСТОП ПОИСК. EXIT\n";
			break;
		}
		for (int i = 0; i < size; i++)
		{
			if (n == 1) txt = item[i].name;
			if (n == 2) txt = item[i].manufacture;

			if (n == 4) txt = item[i].group;
			if (n == 5) txt = item[i].date_reciev;
			if (n == 6) txt = item[i].date_expired;

			if (n == 3)
				if (item[i].price == price)
				{
					num.push_back(i);
					count++;
					tf = false;
				}

			if ( n != 3 )
				if (txt.find(fname) != -1)
				{
					num.push_back(i);
					count++;
					tf = false;
				}

		}

		num.resize(count);
		print(item, num);

		if (tf)
		{
			cout << "\tНе найден товар по наименованию\n";
			continue;
		}
		SetConsoleCP(1252);

	} while (tf != false);

}