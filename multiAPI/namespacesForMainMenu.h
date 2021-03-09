#ifndef _UBER_NAMESPACESFORMAINMENU
#define _UBER_NAMESPACESFORMAINMENU 1

#include "subMenuInMainMenuLoginInfo.h"
#include <iostream>
#include <typeinfo>
#include <conio.h>

using namespace std;


namespace subMenuInMainMenuLoginInfoDeclaration
{
	typedef SubMenuInMainMenuLoginInfo<int> SubMenuInMainMenuLoginInfo;
	SubMenuInMainMenuLoginInfo currentLoginInfo;
}


#include "mainMenu.h"
namespace mainMenuDeclaration
{
	typedef MainMenu<int> MainMenu;
	MainMenu menu;
}

namespace requireEnter
{
	void requireEnterMainMethod()
	{
		cout << "Click ENTER to continue." << endl;
		while(getch() != 13);		
	}
}

#include "welcomeMenu.h"
namespace welcomeMenuDeclaration
{
	typedef WelcomeMenu<int> WelcomeMenu;
	WelcomeMenu startMenu;
}

#include "globalStatistics.h"
namespace globalStatisticsDeclaration
{
	typedef GlobalStatistics<int> GlobalStatistics;
	GlobalStatistics globalStatisticsMenu;
}

#endif
