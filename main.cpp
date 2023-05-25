#include<iostream>
#include<string>
#include<vector>
#include"header.h"
using namespace std;

//Task8

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 10;

	//Item item[1000];
	vector<Item> item;
	item.reserve(size);

	Data(item, size);

	//add(item, size);
	remove(item, size);

	//sortPrice(item, size);
	//sortGroup(item, size);

	//find(item, size, 2);

	return 0;
}