#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void add(vector<Item>& item, int& size)
{
	int n = 0, i = 0;
	cout << "\n ������ ���-�� ����� �������: ";
	n = checkV();

	

	Item *temp = new Item[n];

	SetConsoleCP(1251);

	while (i < n)
	{
		size++;
		item.reserve(size);

		cout << "\n ��� " << size << endl;
		cout << " ������������: ";
		getline(cin, temp[i].name);

		cout << " �������������: ";
		getline(cin, temp[i].manufacture);

		cout << " ����: ";
		temp[i].price = checkV();

		cout << " ������ ������: ";
		getline(cin, temp[i].group);

		cout << " ���� �����������: ";
		getline(cin, temp[i].date_reciev);

		cout << " ���� ��������: ";
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