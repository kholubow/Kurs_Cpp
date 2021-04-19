#ifndef _UBER_MENU_WITH_MAIN_OPTIONS_AFTER_SIGN_IN
#define _UBER_MENU_WITH_MAIN_OPTIONS_AFTER_SIGN_IN 1


#include "namespacesForMenuWithMainOptionsAfterSignIn.h"
#include <iostream>
#include <string>
#include <conio.h>


using namespace std;


template<typename T>
class MenuWithMainOptionsAfterSignIn
{
	protected:
		T x;
	public:
		void menuWithMainOptionsAfterSignIn();
};


template<typename T>
void MenuWithMainOptionsAfterSignIn<T>::menuWithMainOptionsAfterSignIn()
{
	char character;
		
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| A - Options list:                                              |" << endl;
		cout << "|     * Decimal to binary algorithm                              |" << endl;
		cout << "|     * Binary to decimal algorithm                              |" << endl;
		cout << "|     * Caesar cipher                                            |" << endl;
		cout << "|     * Bubble sort                                              |" << endl;
		cout << "|     * Find min/max values algorithm                            |" << endl;
		cout << "|     * Roman numerals                                           |" << endl;
		cout << "|     * Multiplication table                                     |" << endl;
		cout << "|                                                                |" << endl;
		cout << "|                                                                |" << endl;
		cout << "| B - Option 2                                                   |" << endl;
		cout << "| C - Option 3                                                   |" << endl;
		cout << "| D - Option 4                                                   |" << endl;
		cout << "| ESC - Exit                                                     |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'A':
				system("cls");
				decimalToBinaryBinaryToDecimalDeclaration::decimalToBinaryBinaryToDecimalMenu.decimalToBinaryBinaryToDecimal();
				break;
			case 'a':
				system("cls");
				decimalToBinaryBinaryToDecimalDeclaration::decimalToBinaryBinaryToDecimalMenu.decimalToBinaryBinaryToDecimal();
				break;				
			case 'B':
				cout << "Option 2." << endl;
				break;
			case 'b':
				cout << "Option 2." << endl;
				break;
			case 'C':
				cout << "Option 3." << endl;
				break;
			case 'c':
				cout << "Option 3." << endl;
				break;
			case 'D':
				cout << "Option 4." << endl;
				break;
			case 'd':
				cout << "Option 4." << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInMenuWithMainOptionsAfterSignIn();
		system("cls");
		
	} while(character != 27);
}

#endif