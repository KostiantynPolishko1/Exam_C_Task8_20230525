#include<iostream>
#include<string>
#include"header.h"
using namespace std;

void sortPrice(Item item[], int& size)
{
	cout << "\n ���������� �� ����";

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = 0; j < size - 1; j++)
		{
			if (item[j].price > item[j + 1].price)
			{
				swap(item[j], item[j + 1]);
				sum++;
			}
		}
		if (!sum)
			break;
	}

	print(item, size);
}

void sortGroup(Item item[], int& size)
{
	cout << "\n ���������� �� ������ �������";

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = 0; j < size - 1; j++)
		{
			if (item[j].group > item[j + 1].group)
			{
				swap(item[j], item[j + 1]);
				sum++;
			}
		}
		if (!sum)
			break;
	}

	print(item, size);

}