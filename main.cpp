#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

//Task8

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 10, fun = 0;

	vector<Item> item;
	item.reserve(size);

	print();

	bool tf = true;
	while (tf)
	{
		Data(item, size);
		SetConsoleCP(1251);
		cout << "\n  0 - �����!!!";
		cout << "\n ������� ����� �������� -> ";

		fun = checkV();
		if (fun == 0)
		{
			cout << "\n\t���� ���������. �����\n";
			break;
		}
		fun--;

		if (fun > 5)
		{
			cout << "\n\t�������� ��� ��������� 1...5";
			continue;
		}
		SetConsoleCP(1252);
		void(*operation[6])(vector<Item> &, int& ) = { print, add, remove, modify, find, sort};
		operation[fun](item, size);
	}

	return 0;
}