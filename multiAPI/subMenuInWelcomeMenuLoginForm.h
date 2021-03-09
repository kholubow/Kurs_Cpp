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
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| U - Username                                                   |" << endl;
		cout << "| P - Password                                                   |" << endl;
		cout << "| B - Back                                                       |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'U':
				cout << "username" << endl;
				break;
			case 'u':
				cout << "username" << endl;
				break;				
			case 'P':
				cout << "passwd" << endl;
				break;
			case 'p':
				cout << "passwd" << endl;
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
