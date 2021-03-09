#ifndef _UBER_WELCOME_MENU
#define _UBER_WELCOME_MENU 1

#include "namespacesForWelcomeMenu.h"
#include <iostream>
#include <conio.h>

using namespace std;

template<typename T>
class WelcomeMenu
{
	protected:
		T x;
	public:
		void welcomeMenu();
};

template<typename T>
void WelcomeMenu<T>::welcomeMenu()
{
	char character;
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| L - Login                                                      |" << endl;
		cout << "| R - Register                                                   |" << endl;
		cout << "| B - Back                                                       |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'L':
				system("cls");
				subMenuInWelcomeMenuLoginFormDeclaration::loginForm.subMenuInWelcomeMenuLoginForm();
				break;
			case 'l':
				system("cls");
				subMenuInWelcomeMenuLoginFormDeclaration::loginForm.subMenuInWelcomeMenuLoginForm();
				break;				
			case 'R':
				system("cls");
				subMenuInWelcomeMenuRegisterFormDeclaration::registerForm.subMenuInWelcomeMenuRegisterForm();
				break;
			case 'r':
				system("cls");
				subMenuInWelcomeMenuRegisterFormDeclaration::registerForm.subMenuInWelcomeMenuRegisterForm();
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
		
	} while(character != 'l' && 
			character != 'L' && 
			character != 'r' && 
			character != 'R' && 
			character != 'b' && 
			character != 'B');
}

#endif
