#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

void add(vector<Item>& item, int& size)
{
	int n = 0, i = 0;
	cout << "\n������ ���-�� ����� �������: ";
	n = checkV();

	int size2 = size + n;
	item.reserve(size2);

	Item *temp = new Item[n];

	while (i < n)
	{
		cout << "\n ��� " << size + 1 << endl;
		cout << "\n ������������: ";
		getline(cin, temp[i].name);

		cout << "\n �������������: ";
		getline(cin, temp[i].manufacture);

		cout << "\n ����: ";
		temp[i].price = checkV();

		cout << "\n ������ ������: ";
		getline(cin, temp[i].group);

		cout << "\n ���� �����������: ";
		getline(cin, temp[i].date_reciev);

		cout << "\n ���� ��������: ";
		getline(cin, temp[i].date_expired);

		item.push_back(temp[i]);
		i++;
	} 

	delete[] temp;
	temp = nullptr;

	print(item, size2);
}