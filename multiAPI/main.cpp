#include "namespacesForMainMenu.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	char character;
		
	do
	{
		mainMenuDeclaration::menu.mainMenu();
		character = getch();
		
		switch(character)
		{
			case '1':
				system("cls");
				welcomeMenuDeclaration::startMenu.welcomeMenu();
				break;
			case '2':
				system("cls");
				globalStatisticsDeclaration::globalStatisticsMenu.globalStatistics();
				break;
		}
		
		requireEnter::requireEnterMainMethod();
		system("cls");
		
	} while(character != 27);
	
	system("PAUSE");
	return 0;
}
