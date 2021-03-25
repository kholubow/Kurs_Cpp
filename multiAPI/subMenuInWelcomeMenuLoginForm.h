#ifndef _UBER_SUB_MENU_IN_WELCOME_MENU_LOGIN_FORM
#define _UBER_SUB_MENU_IN_WELCOME_MENU_LOGIN_FORM 1

#include "namespacesForWelcomeMenu.h"
#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include "hmac.h"

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
	char character, ch;
	
	
	string usernameError_msg = "Username is incorrect. Please try again.";
	string * pointerToUsernameErrorMsg = &usernameError_msg;
	
	
	string error_msg = "Username or password is incorrect. Please try logging in again.";
	string * pointerToErrorMsg = &error_msg;
	
	
	string passwordError_msg = "Password is incorrect. Please try again.";
	string * pointerToPasswordErrorMsg = &passwordError_msg;
	
	
	string username = "";
	string * pointerToUsernameValue = &username;
	
	
	string password = "";
	string * pointerToPasswordValue = &password;
	
	
	vector<string> allLoginDataFromForm;
	vector<string>::iterator itLogin = allLoginDataFromForm.begin();
	
	
	vector<string> * pointerToAllLoginDataFromFormVectorValue = &allLoginDataFromForm;
	vector<string>::iterator * pointerToIteratorItLogin = &itLogin; 
	
	
	string cryptographicallySecuredPassword = "";
	string key = "Sup3RSecREtK3Y";
		
		
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
				cout << "Password can have all kind of symbols, letters, numbers. " << endl;
				cout << "Password have to have atleast 10 characters, including atleast 3 numbers, 3 small letters, 3 symbols and 1 big letter. " << endl;
				do 
				{
					
					password = "";
					cout << "Please insert your password: " << endl; 
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
					
				}while(!verifyPasswordInLoginForm::verifyPasswordInLoginFormFunction(pointerToPasswordErrorMsg,pointerToPasswordValue));
				break;
			case 'p':
				cout << "Password can have all kind of symbols, letters, numbers. " << endl;
				cout << "Password have to have atleast 10 characters, including atleast 3 numbers, 3 small letters, 3 symbols and 1 big letter. " << endl;
				do 
				{
					
					password = "";
					cout << "Please insert your password: " << endl; 
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
					
				}while(!verifyPasswordInLoginForm::verifyPasswordInLoginFormFunction(pointerToPasswordErrorMsg,pointerToPasswordValue));
				break;
			case 'I':
				cout << "All data have to be completed." << endl;
				cout << "==============================" << endl;
				cout << endl;
				cout << endl;								
				
				if (!password.empty() &&
					!username.empty())
				{
					
					allLoginDataFromForm.clear();
					
					
					cryptographicallySecuredPassword = hmac::get_hmac(key, password, hmac::TypeHash::SHA512);
				
					
					allLoginDataFromForm.push_back("Username: " + username);
					allLoginDataFromForm.push_back("Password: " + cryptographicallySecuredPassword);
					
					itLogin = allLoginDataFromForm.begin();
					checkDataFromLoginForm::checkDataFromLoginForm(pointerToErrorMsg,pointerToIteratorItLogin,pointerToAllLoginDataFromFormVectorValue);

					username        = "";
					password        = "";
					cryptographicallySecuredPassword = "";
					
					
					cout << "Data has been sent." << endl;
					
				}
				else
				{
					
					if (password.empty())
					{
						
						cout << "Please complete correctly your password" << endl;
						
					}
					else if (username.empty())
					{
						
						cout << "Please complete correctly your username" << endl;
						
					}
					else
						cout << "Please complete all data correctly" << endl;
						
				}
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
