#include<iostream>
#include<string>
#include"header.h"
using namespace std;

//Task8

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 10;

	Item item[1000];

	cout << "\n Данные склада дата: ";
	Data(item, size);

	//sortPrice(item, size);
	//sortGroup(item, size);
	findName(item, size);

	//int x = checkV();

	return 0;
}