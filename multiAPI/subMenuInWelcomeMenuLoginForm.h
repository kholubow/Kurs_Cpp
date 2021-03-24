#ifndef _UBER_SUB_MENU_IN_WELCOME_MENU_LOGIN_FORM
#define _UBER_SUB_MENU_IN_WELCOME_MENU_LOGIN_FORM 1

#include "namespacesForWelcomeMenu.h"
#include <iostream>
#include <conio.h>

using namespace std;

template<typename T>
class SubMenuInWelcomeMenuLoginForm
{
	protected:
		T x;
	public:
		void subMenuInWelcomeMenuLoginForm();
};

template<typename T>
void SubMenuInWelcomeMenuLoginForm<T>::subMenuInWelcomeMenuLoginForm()
{
	char character;
	
	
	string usernameError_msg = "Username is incorrect. Please try again.";
	string * pointerToUsernameErrorMsg = &usernameError_msg;
	
	
	string error_msg = "Username or password is incorrect. Please try logging in again.";
	string * pointerToErrorMsg = &error_msg;
	
	
	string passwordError_msg = "Password is incorrect. Please try again.";
	string * pointerToPasswordErrorMsg = &passwordError_msg;
	
	
	string username = "";
	string * pointerToUsernameValue = &username;
		
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| U - Username                                                   |" << endl;
		cout << "| P - Password                                                   |" << endl;
		cout << "| I - Finish login                                               |" << endl;
		cout << "| B - Back                                                       |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'U':
				cout << "Username can have all kind of letters, numbers. " << endl;
				cout << "Username have to have atleast 5 characters. "     << endl;								
				do 
				{ 
					
					cout << "Please insert your username: " << endl; 
					cin  >> username;
					
				}while(!verifyUsernameInLoginForm::verifyUsernameInLoginFormFunction(pointerToUsernameErrorMsg,pointerToUsernameValue));
				break;
			case 'u':
				cout << "Username can have all kind of letters, numbers. " << endl;
				cout << "Username have to have atleast 5 characters. "     << endl;								
				do 
				{ 
					
					cout << "Please insert your username: " << endl; 
					cin  >> username;
					
				}while(!verifyUsernameInLoginForm::verifyUsernameInLoginFormFunction(pointerToUsernameErrorMsg,pointerToUsernameValue));
				break;				
			case 'P':
				cout << "passwd" << endl;
				break;
			case 'p':
				cout << "passwd" << endl;
				break;
			case 'I':
				cout << "Finish login" << endl;
				break;
			case 'i':
				cout << "Finish login" << endl;
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
