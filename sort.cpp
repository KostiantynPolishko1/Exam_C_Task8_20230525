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
		str = "цене";
	else
		str = "группе товаров";

	cout << "\n Сортировка по " << str;

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
		<< "\n Сортировка:"
		<< "\n\t1 - По цене"
		<< "\n\t2 - По группе товара"
		<< endl;

	while (true)
	{
		cout << "\n Введите номер подоперации -> ";

	restart:
		n = checkV();
		if (n > 2 || n == 0)
		{
			cout << "\n\t Значение вне диапазона 1...6";
			goto restart;
		}
		sort(item, size, n);

		cout << "\n Для выхода нажмите \"0\" или \"1\" продолжить: ";
		n = checkV();
		if (!n)
		{
			system("CLS");
			cout << "\n\tСТОП ИЗМЕНЕНИЯ. ВЫХОД\n";
			print();
			break;
		}

		cout
			<< "\n\t1 - По цене"
			<< "\n\t2 - По группе товара"
			<< endl;
	}
}