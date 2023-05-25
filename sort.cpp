#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void sort(vector<Item>& item, int& size, int &n)
{
	string str{};
	if (n == 1)
		str = "����";
	else
		str = "������ �������";

	cout << "\n ���������� �� " << str;

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = 0; j < size - 1; j++)
		{
			if (n == 1)
				if (item[j].group > item[j + 1].group)
				{
					swap(item[j], item[j + 1]);
					sum++;
				}
			else
				if (item[j].price > item[j + 1].price)
				{
					swap(item[j], item[j + 1]);
					sum++;
				}
		}
		if (!sum)
			break;
	}

	system("CLS");
	print(item, size);

}

void sort(vector<Item>& item, int& size)
{
	int n = 0;
	cout
		<< "\n\t1 - �� ����"
		<< "\n\t2 - �� ������ ������"
		<< endl;

	while (true)
	{
		cout << "\n ������� ����� ����������� -> ";

	restart:
		n = checkV();
		if (n > 2 || n == 0)
		{
			cout << "\n\t �������� ��� ��������� 1...6";
			goto restart;
		}
		sort(item, size, n);

		cout << "\n ��� ������ ������� \"0\" ��� \"1\" ����������: ";
		n = checkV();
		if (!n)
		{
			system("CLS");
			cout << "\n\t���� ���������. �����\n";
			print();
			break;
		}

		cout
			<< "\n\t1 - �� ����"
			<< "\n\t2 - �� ������ ������"
			<< endl;
	}
}