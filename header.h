#include<iostream>
#include<vector>
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

void print(Item item[], int& size);
void print(Item item[], vector<int>& num);

void sortPrice(Item item[], int& size);
void sortGroup(Item item[], int& size);

void findName(Item item[], int& size);

#endif
