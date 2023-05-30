#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

//.cpp files changed format in UTF-8 with BOM

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 10, fun = 0;

	vector<Item> item;
	item.reserve(size);

	Data(item, size);
	print();

	bool tf = true;
	while (tf)
	{
		

		cout << "\n  0 - ВЫХОД!!!";
		cout << "\n Введите номер операции -> ";

		fun = checkV();
		if (fun == 0)
		{
			cout << "\n\tСТОП ИЗМЕНЕНИЯ. ВЫХОД\n";
			break;
		}
		fun--;

		if (fun > 5)
		{
			cout << "\n\tЗначение вне диапазона 1...5";
			continue;
		}

		void(*operation[6])(vector<Item> &, int& ) = { print, add, remove, modify, find, sort};
		operation[fun](item, size);
	}

	return 0;
}