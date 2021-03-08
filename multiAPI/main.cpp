#include "namespacesForMainMenu.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	char character;
		
	do
	{
		mainMenuDeclaration::menu.mainMenu();
		character = getch();
		system("cls");
		
	} while(character != 27);
	
	system("PAUSE");
	return 0;
}
