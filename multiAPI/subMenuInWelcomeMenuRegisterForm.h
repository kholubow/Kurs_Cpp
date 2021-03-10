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
	char ch;
	
	string error_msg = "Please insert data again.";
	string * pointerToErrorMsg = &error_msg;
	
	string firstName;
	string * pointerToFirstNameValue = &firstName;
	
	string lastName;
	string * pointerToLastNameValue = &lastName;
	
	string city;
	string * pointerToCityValue = &city;
	
	string email;
	string * pointerToEmailValue = &email;
	
	string password;
	string * pointerToPasswordValue = &password;
	
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
				do 
				{ 
				
					cout << "Please insert your first name" << endl; 
					cin >> firstName; 
				
				}while(!verifyFirstName::verifyFirstNameFunction(pointerToErrorMsg,pointerToFirstNameValue));
				break;
			case 'a':
				cout << "First name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your first name" << endl; 
					cin >> firstName; 
				
				}while(!verifyFirstName::verifyFirstNameFunction(pointerToErrorMsg,pointerToFirstNameValue));				
				break;	
			case 'T':
				cout << "Last name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your last name" << endl; 
					cin >> lastName; 
				
				}while(!verifyLastName::verifyLastNameFunction(pointerToErrorMsg,pointerToLastNameValue));			
				break;
			case 't':
				cout << "Last name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your last name" << endl; 
					cin >> lastName; 
				
				}while(!verifyLastName::verifyLastNameFunction(pointerToErrorMsg,pointerToLastNameValue));
				break;
			case 'C':
				cout << "City have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your city" << endl; 
					cin >> city;
				
				}while(!verifyCity::verifyCityFunction(pointerToErrorMsg,pointerToCityValue));
				break;
			case 'c':
				cout << "City have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your city" << endl; 
					cin >> city; 
				
				}while(!verifyCity::verifyCityFunction(pointerToErrorMsg,pointerToCityValue));
				break;
			case 'D':
				cout << "E-mail have to have only letters ('a - z' and 'A - Z') with numbers ('0' to '9') and also have to have ONE @ symbol" << endl;
				do 
				{ 
				
					cout << "Please insert your e-mail" << endl; 
					cin >> email; 
				
				}while(!verifyEmail::verifyEmailFunction(pointerToErrorMsg,pointerToEmailValue));
				break;
			case 'd':
				cout << "E-mail have to have only letters ('a - z' and 'A - Z') with numbers ('0' to '9') and also have to have ONE @ symbol" << endl;
				do 
				{ 
				
					cout << "Please insert your e-mail" << endl; 
					cin >> email; 
				
				}while(!verifyEmail::verifyEmailFunction(pointerToErrorMsg,pointerToEmailValue));
				break;	
			case 'E':
				cout << "Password can have all kind of symbols, letters, numbers. " << endl;
				cout << "Password have to have atleast 10 characters, including atleast 3 numbers, 3 small letters, 3 symbols and 1 big letter. " << endl;
				do 
				{
					
					password = "";
					cout << "Please insert your password" << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							password.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							password.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyPassword::verifyPasswordFunction(pointerToErrorMsg,pointerToPasswordValue));
				break;
			case 'e':
				cout << "Password can have all kind of symbols, letters, numbers. " << endl;
				cout << "Password have to have atleast 10 characters, including atleast 3 numbers, 3 small letters, 3 symbols and 1 big letter. " << endl;								
				do 
				{ 
					
					password = "";
					cout << "Please insert your password" << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							password.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							password.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyPassword::verifyPasswordFunction(pointerToErrorMsg,pointerToPasswordValue));
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
