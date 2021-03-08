#ifndef _UBER_MENU
#define _UBER_MENU 1

#include "namespacesForMainMenu.h"
#include <iostream>

using namespace std;

template<typename T>
class MainMenu
{
	protected:
		T x;
	public:
		void mainMenu();
};

template<typename T>
void MainMenu<T>::mainMenu()
{
	cout << "------------------------------------------------------------------" << endl;
	cout << "| System v. 1.0       |   MultiAPI            |   ESC - Exit     |" << endl;
	cout << "| by Imie Nazwisko    |   Choose one option   |                  |" << endl;
	cout << "| All rights reserved |   _________________   |                  |" << endl;
	cout << "------------------------------------------------------------------" << endl;	
	subMenuInMainMenuLoginInfoDeclaration::currentLoginInfo.subMenuInMainMenuLoginInfo();
}

#endif
