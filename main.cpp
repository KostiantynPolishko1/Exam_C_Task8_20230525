#include<iostream>
#include<string>
#include"header.h"
using namespace std;

//Task8

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 9;

	Item item[1000];

	cout << "\n Данные склада дата: ";
	Data(item, size);
	printData(item, size);
	sortPrice(item, size);
	sortGroup(item, size);

	//int x = checkV();

	return 0;
}