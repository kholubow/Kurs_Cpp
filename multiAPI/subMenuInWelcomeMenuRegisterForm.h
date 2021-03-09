#ifndef _UBER_SUB_MENU_IN_WELCOME_MENU_REGISTER_FORM
#define _UBER_SUB_MENU_IN_WELCOME_MENU_REGISTER_FORM 1

#include "namespacesForWelcomeMenu.h"
#include "namespacesForRegisterForm.h"
#include <iostream>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

template<typename T>
class SubMenuInWelcomeMenuRegisterForm
{
	protected:
		T x;
	public:
		void subMenuInWelcomeMenuRegisterForm();
};

template<typename T>
void SubMenuInWelcomeMenuRegisterForm<T>::subMenuInWelcomeMenuRegisterForm()
{
	char character;
	string error_msg = "Please insert data again.";
	string * pointerToErrorMsg = &error_msg;
	string firstName;
	string * pointerToFirstNameValue = &firstName;
	vector<string> allRegisterDataFromForm;
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| A - First Name                                                 |" << endl;
		cout << "| T - Last Name                                                  |" << endl;
		cout << "| C - City                                                       |" << endl;
		cout << "| D - E-mail                                                     |" << endl;
		cout << "| E - Password                                                   |" << endl;
		cout << "| F - Confirm Password                                           |" << endl;
		cout << "| G - Username                                                   |" << endl;
		cout << "| H - Age                                                        |" << endl;
		cout << "| I - Finish registration                                        |" << endl;
		cout << "| B - Back                                                       |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'A':
				cout << "First name have to have only letters ('a - z' and 'A - Z')" << endl;
				do { cout << "Please insert your first name" << endl; cin >> firstName; }while(!verifyFirstName::verifyFirstNameFunction(pointerToErrorMsg,pointerToFirstNameValue));
				break;
			case 'a':
				
				break;	
			case 'T':
				cout << "Type Data2" << endl;
				break;
			case 't':
				cout << "Type Data2" << endl;
				break;
			case 'C':
				cout << "Type Data3" << endl;
				break;
			case 'c':
				cout << "Type Data3" << endl;
				break;
			case 'D':
				cout << "Type Data4" << endl;
				break;
			case 'd':
				cout << "Type Data4" << endl;
				break;	
			case 'E':
				cout << "Type Data5" << endl;
				break;
			case 'e':
				cout << "Type Data5" << endl;
				break;	
			case 'F':
				cout << "Type Data6" << endl;
				break;
			case 'f':
				cout << "Type Data6" << endl;
				break;	
			case 'G':
				cout << "Type Data7" << endl;
				break;
			case 'g':
				cout << "Type Data7" << endl;
				break;
			case 'H':
				cout << "Type Data8" << endl;
				break;
			case 'h':
				cout << "Type Data8" << endl;
				break;
			case 'I':
				cout << "Type Data9" << endl;
				break;
			case 'i':
				cout << "Type Data9" << endl;
				break;
			case 'B':
				cout << endl;
				break;
			case 'b':
				cout << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInWelcomeMenu();
		system("cls");
		
	} while(character != 'b' && 
			character != 'B');
}

#endif
