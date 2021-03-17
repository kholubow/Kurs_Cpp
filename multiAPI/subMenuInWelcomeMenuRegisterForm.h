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
	
	string firstName = "";
	string * pointerToFirstNameValue = &firstName;
	
	string lastName = "";
	string * pointerToLastNameValue = &lastName;
	
	string city = "";
	string * pointerToCityValue = &city;
	
	string email = "";
	string * pointerToEmailValue = &email;
	
	string password = "";
	string * pointerToPasswordValue = &password;
	
	string confirmPassword = "";
	string * pointerToConfirmPasswordValue = &confirmPassword;
	
	string username = "";
	string * pointerToUsernameValue = &username;
	
	string age = "";
	string * pointerToAgeValue = &age;
	
	vector<string> allRegisterDataFromForm;
	vector<string>::iterator it = allRegisterDataFromForm.begin();
		
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
				cout << "Confirm password. " << endl;
				cout << "Passwords must match. " << endl;
				do 
				{	
				
					confirmPassword = "";
					cout << "Please insert your password again" << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							confirmPassword.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							confirmPassword.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyConfirmPassword::verifyConfirmPasswordFunction(pointerToErrorMsg,pointerToConfirmPasswordValue,pointerToPasswordValue));
				break;
			case 'f':
				cout << "Confirm password. " << endl;
				cout << "Passwords must match. " << endl;
				do 
				{	
				
					confirmPassword = "";
					cout << "Please insert your password again" << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							confirmPassword.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							confirmPassword.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyConfirmPassword::verifyConfirmPasswordFunction(pointerToErrorMsg,pointerToConfirmPasswordValue,pointerToPasswordValue));
				break;	
			case 'G':
				cout << "Username can have all kind of letters, numbers. " << endl;
				cout << "Username have to have atleast 5 characters. " << endl;								
				do 
				{ 
					
					cout << "Please insert your username" << endl; 
					cin >> username;
					
				}while(!verifyUsername::verifyUsernameFunction(pointerToErrorMsg,pointerToUsernameValue));
				break;
			case 'g':
				cout << "Username can have all kind of letters, numbers. " << endl;
				cout << "Username have to have atleast 5 characters. " << endl;								
				do 
				{ 
					
					cout << "Please insert your username" << endl; 
					cin >> username;
					
				}while(!verifyUsername::verifyUsernameFunction(pointerToErrorMsg,pointerToUsernameValue));
				break;
			case 'H':
				cout << "Age have to have only numbers." << endl;
				cout << "Only 18+ users are available." << endl;								
				do 
				{ 
					
					cout << "Please insert your age" << endl; 
					cin >> age;
					
				}while(!verifyAge::verifyAgeFunction(pointerToErrorMsg,pointerToAgeValue));
				break;
			case 'h':
				cout << "Age have to have only numbers." << endl;
				cout << "Only 18+ users are available." << endl;								
				do 
				{ 
					
					cout << "Please insert your age" << endl; 
					cin >> age;
					
				}while(!verifyAge::verifyAgeFunction(pointerToErrorMsg,pointerToAgeValue));
				break;
			case 'I':
				cout << "All data have to be completed." << endl;
				cout << "==============================" << endl;
				cout << endl;
				cout << endl;								
				
				if (!firstName.empty()       &&
					!lastName.empty()        &&
					!city.empty()            &&
					!email.empty()           &&
					!password.empty()        &&
					!confirmPassword.empty() &&
					!username.empty()        &&
					!age.empty())
				{
					
					allRegisterDataFromForm.clear();
					
					allRegisterDataFromForm.push_back("Username: "         + username);
					allRegisterDataFromForm.push_back("Password: "         + password);
					allRegisterDataFromForm.push_back("First_name: "       + firstName);
					allRegisterDataFromForm.push_back("Last_name: "        + lastName);
					allRegisterDataFromForm.push_back("City: "             + city);
					allRegisterDataFromForm.push_back("Email: "            + email);
					allRegisterDataFromForm.push_back("Confirm_password: " + confirmPassword);
					
					it = allRegisterDataFromForm.begin();
					/*
						for (it; it != allRegisterDataFromForm.end(); it++)
						{
							cout << *it << endl;
						}
					*/
					username        = "";
					password        = "";
					firstName       = "";
					lastName        = "";
					city            = "";
					email           = "";
					confirmPassword = "";	
					cout << "Data has been sent." << endl;
					
				}
				else
				{
					if      (firstName.empty())
					{
						
						cout << "Please complete correctly your first name" << endl;
						
					}
					else if (lastName.empty())
					{
						
						cout << "Please complete correctly your last name" << endl;
						
					}
					else if (city.empty())
					{
						
						cout << "Please complete correctly your city" << endl;
						
					}
					else if (email.empty())
					{
						
						cout << "Please complete correctly your email" << endl;
						
					}
					else if (password.empty())
					{
						
						cout << "Please complete correctly your password" << endl;
						
					}
					else if (confirmPassword.empty())
					{
						
						cout << "Please complete correctly your password again in [confirm password] option" << endl;
							
					}
					else if (username.empty())
					{
						
						cout << "Please complete correctly your username" << endl;
						
					}
					else if (age.empty())
					{
						
						cout << "Please complete correctly your age" << endl;
						
					}
					else
						cout << "Please complete all data correctly" << endl;
				}
				
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
