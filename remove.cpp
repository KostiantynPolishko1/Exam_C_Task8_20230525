#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void remove(vector<Item>& item, int& size)
{
	int n = 0, j = 0;
	cout << "\n Введите кол-во удаляемых позиций: ";
	n = checkV();

	int* arr = new int[n];

	while (j < n)
	{
		cout << "\nВведите номера удаляемых позиций: ";

		arr[j] = checkV()-1;
		if (arr[j] > size + n)
		{
			cout << "\n Значение вне диапазона 1..." << size << endl;
			continue;
		}
		j++;
	}

	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		pos = arr[i] - i;
		auto iter = item.cbegin();
		item.erase(iter + pos);
		size--;
	}
	item.resize(size);

	delete[] arr;
	arr = nullptr;

	system("CLS");
	print(item, size);
	print();
}
