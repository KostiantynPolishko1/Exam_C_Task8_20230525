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
		cout << "\n ������� ������� ��� ���������: ";
		i = checkV();
		i--;
		if (i > size)
		{
			cout << "\n �������� ��� ��������� 1..." << size << endl;
			continue;
		}

		cout << "\n ��� " << i+1 << endl;
		cout << "\n ������������: ";
		getline(cin, item[i].name);

		cout << "\n �������������: ";
		getline(cin, item[i].manufacture);

		cout << "\n ����: ";
		item[i].price = checkV();

		cout << "\n ������ ������: ";
		getline(cin, item[i].group);

		cout << "\n ���� �����������: ";
		getline(cin, item[i].date_reciev);

		cout << "\n ���� ��������: ";
		getline(cin, item[i].date_expired);

		system("CLS");
		SetConsoleCP(1252);
		print(item, size);

		cout << "\n ��� ������ ������� \"0\": ";
		i = checkV();
		if (!i)
		{
			cout << "\n\t���� ���������. EXIT\n";
			break;
		}
	}
}