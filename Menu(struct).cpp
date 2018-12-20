#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "restraunt.h"

using namespace std;

void line();

int main()
{
	char con;
	restraunt menu;

	do
	{
		menu.order();
		do
		{
			line();
			cout << "Anything Else {Y - Yes, N - No} : ";
			cin >> con;
		} while ((con != 'Y') && (con != 'y') && (con != 'n') && (con != 'N'));
	} while (con == 'y' || con == 'Y');

	menu.receipt();
}

void line()
{
	cout << endl;
	for (int i = 0; i < 40; i++)
		cout<<"-";
	cout << endl;
}