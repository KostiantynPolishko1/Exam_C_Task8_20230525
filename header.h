#include<iostream>
#include<string>
using namespace std;

struct Item
{
	string
		name,
		manufacture;
	int price;
	string
		group,
		date_reciev,
		date_expired;
};

#ifndef HEADER_H
#define HEADER_H

int checkV();
void Data(Item item[], int& size);
void printData(Item item[], int& size);

#endif
