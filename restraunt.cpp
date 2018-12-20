#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <Windows.h>//need this so the Color function can work
#include <sstream>
#include "restraunt.h"

using namespace std;


restraunt::restraunt()//constructor
{
	head = NULL;
	current = NULL;
}

void restraunt::createNode()//creates the nodes to link the orders together
{
	ptr newNode = new node;
	newNode->next = NULL;

	if (head == NULL)
		head = newNode;
	else
		current->next = newNode;
	current = newNode;
}

void restraunt::order()//takes your order, stores the values into each node created
{
	createNode();
	int pick;
	char size;

	system("cls");
	cout << "****************Menu*****************\n" << endl;
	cout << "1 - Angus Burger" << setw(21) << " 6 - Mac & Cheese" << endl;
	cout << "2 - Cheese Burger" << setw(13) << " 7 - Steak" << endl;
	cout << "3 - Burger & Fries" << setw(18) << " 8 - Rice & Bean" << endl;
	cout << "4 - Mash Potatoes" << setw(15) << " 9 - Lobster" << endl;
	cout << "5 - Beef" << setw(27) << "10 - Pork Belly" << endl;

	do
	{
		cout << "\nOrder : ";
		cin >> pick;
		system("cls");
	} while (pick < 1 || pick > 10);

	switch (pick)
	{
		case 1:
			current->item = "Angus Burger";
			
			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 3.60;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 4.60;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 5.60;
			}
			break;

		case 2:
			current->item = "Cheese Burger";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 2.75;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 3.75;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 4.75;
			}
			break;

		case 3:
			current->item = "Burger & Fries";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 3.20;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 3.50;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 3.90;
			}
			break;

		case 4:
			current->item = "Mash Potatoes";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 2.00;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 2.50;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 3.00;
			}
			break;

		case 5:
			current->item = "Beef";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 3.60;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 4.20;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 5.60;
			}
			break;

		case 6:
			current->item = "Mac & Cheese";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 2.75;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 3.75;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 4.75;
			}
			break;

		case 7:
			current->item = "Steak";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 4.75;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 6.75;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 7.75;
			}
			break;

		case 8:
			current->item = "Rice & Beans";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 3.75;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 4.55;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 5.30;
			}
			break;

		case 9:
			current->item = "Lobster";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 4.75;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 5.83;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 7.54;
			}
			break;

		case 10:
			current->item = "Pork Belly";

			do
			{
				system("cls");
				cout << "Available sizes for your " << current->item << "\n\nS - Small\nM - Medium\nL - Large\n\nSize : ";
				cin >> size;
			} while ((size != 's') && (size != 'S') && (size != 'm') && (size != 'M') && (size != 'l') && (size != 'L'));

			system("cls");
			cout << "\n\nHow many " << current->item << " orders do you want? : ";
			cin >> current->amount;

			if (size == 's' || size == 'S')
			{
				current->size = "Small";
				current->price = current->amount * 3.75;
			}
			else if (size == 'm' || size == 'M')
			{
				current->size = "Medium";
				current->price = current->amount * 6.35;
			}
			else
			{
				current->size = "Large";
				current->price = current->amount * 7.85;
			}
			break;
	}
}

void restraunt::receipt()//prints the order out
{
	ptr show;
	string str;
	show = head;

	system("cls");
	cout << "Receipt:\n\n";

	while (show != NULL)
	{
		stringstream stream;                               //these 3 lines of code convert the price from double to string
		stream << fixed << setprecision(2) << show->price; //while also maintaing its precision of 2 decimal
		str = stream.str();
		
		cout << left << fixed << showpoint << setprecision(2);
		cout << "Item   : " << setw(16) << show->item << "Size  : " << show->size;
		cout << "\nAmount : " << setw(16) << show->amount << "Price : ";
		cout << Color(2, str) << "$" << endl;//sets the text back to the green
		Color(7,"");//sets the text back to the default color

		cout << "\n\n";
		show = show->next;//moves to the next node(next order)
	}
}

restraunt::~restraunt()//deconstructor
{

}

string  restraunt::Color(int color = 7, string value = "")//changes the color of whats stored in value, the color change depends 
{                                                         //on the number given to color, if no number is given the default number is 7
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	return value;
}

/*
	if you want to see all the color you have to your disposal
	just uncomment this and run it;

	system("color 1");
	cout << "1";
	system("pause");
	system("color 2");
	cout << "2";
	system("pause");
	system("color 3");
	cout << "3";
	system("pause");
	system("color 4");
	cout << "4";
	system("pause");
	system("color 5");
	cout << "5";
	system("pause");
	system("color 6");
	cout << "6";
	system("pause");
	system("color 7");
	cout << "7";
	system("pause");
	system("color 8");
	cout << "8";
	system("pause");
	system("color 9");
	cout << "9";
	system("pause");
	system("color 10");
	cout << "10";
	system("pause");
	system("color 11");
	cout << "11";
	system("pause");
	system("color 12");
	cout << "12";
	system("pause");
	system("color 13");
	cout << "13";
	system("pause");
	system("color 14");
	cout << "14";
	system("pause");
	system("color 15");
	cout << "15";
	system("pause");
*/
