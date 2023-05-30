#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

//.cpp files changed format in UTF-8 with BOM

void find(vector<Item>& item, int& size, int n)
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
			cout << "\n\t���� �����. �����\n";
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

		if (tf)
		{
			cout << "\t�� ������ ����� �� ������������\n";
			print(n);
			continue;
		}
		SetConsoleCP(1252);

		num.resize(count);
		system("CLS");
		print(item, num);
		cout
			<< "\n\t1 - �� ��������"
			<< "\n\t2 - �������������"
			<< "\n\t3 - �� ����"
			<< "\n\t4 - ������ ������"
			<< "\n\t5 - ���� ����������� �� �����"
			<< "\n\t6 - ����� ��������"
			<< endl;

	} while (tf != false);

}

void find(vector<Item>& item, int& size)
{
	int n = 0;
	cout
		<< "\n\t1 - �� ��������"
		<< "\n\t2 - �������������"
		<< "\n\t3 - �� ����"
		<< "\n\t4 - ������ ������"
		<< "\n\t5 - ���� ����������� �� �����"
		<< "\n\t6 - ����� ��������"
		<< endl;

	while (true)
	{
		cout << "\n ������� ����� ����������� -> ";

	restart:
		n = checkV();
		if (n > 6 || n == 0)
		{
			cout << "\n\t �������� ��� ��������� 1...6";
			goto restart;
		}
		find(item, size, n);

		cout << "\n ��� ������ ������� \"0\" ��� \"1\" ����������: ";
		n = checkV();
		if (!n)
		{
			cout << "\n\t���� ���������. �����\n";
			print();
			break;
		}
	}
}