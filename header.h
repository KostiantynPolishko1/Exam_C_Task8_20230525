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
void Data(vector<Item> &item, int& size);

void add(vector<Item>& item, int& size);
void remove(vector<Item>& item, int& size);
void modify(vector<Item>& item, int& size);

void find(vector<Item>& item, int& size, int n);

void sortPrice(vector<Item>& item, int& size);
void sortGroup(vector<Item>& item, int& size);

void print(vector<Item>& item, int& size);
void print(int &n);
void print(vector<Item>& item, vector<int>& num);

#endif
