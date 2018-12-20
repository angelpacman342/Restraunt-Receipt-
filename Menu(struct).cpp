#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "restraunt.h"

using namespace std;

int main()
{
	char con;
	restraunt menu;

	do
	{
		menu.order();
		do
		{
			cout << endl;
			menu.line();
			cout << "Anything Else {Y - Yes, N - No} : ";
			cin >> con;
		} while ((con != 'Y') && (con != 'y') && (con != 'n') && (con != 'N'));
	} while (con == 'y' || con == 'Y');

	menu.receipt();
}
