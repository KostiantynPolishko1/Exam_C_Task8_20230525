#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

//.cpp files changed format in UTF-8 with BOM

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 10, fun = 0;

	vector<Item> item;
	item.reserve(size);

	Data(item, size);
	print();

	bool tf = true;
	while (tf)
	{
		

		cout << "\n  0 - ÂÛÕÎÄ!!!";
		cout << "\n Ââåäèòå íîìåð îïåðàöèè -> ";

		fun = checkV();
		if (fun == 0)
		{
			cout << "\n\tÑÒÎÏ ÈÇÌÅÍÅÍÈß. ÂÛÕÎÄ\n";
			break;
		}
		fun--;

		if (fun > 5)
		{
			cout << "\n\tÇíà÷åíèå âíå äèàïàçîíà 1...5";
			continue;
		}

		void(*operation[6])(vector<Item> &, int& ) = { print, add, remove, modify, find, sort};
		operation[fun](item, size);
	}

	return 0;
}