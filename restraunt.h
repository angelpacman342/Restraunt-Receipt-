#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class restraunt
{
public:

	restraunt();
	void createNode();
	void order();
	void receipt();
	string Color(int, string);
	~restraunt();

private:

	typedef struct node
	{
		string item;
		string size;
		int amount;
		double price;
		node* next;
	}*ptr;

	ptr head, current;
};

