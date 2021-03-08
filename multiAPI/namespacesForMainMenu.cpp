#ifndef _UBER_NAMESPACESFORMAINMENU
#define _UBER_NAMESPACESFORMAINMENU 1

#include <iostream>
#include "subMenuInMainMenuLoginInfo.h"
#include "mainMenu.h"
#include <typeinfo>

using namespace std;

namespace subMenuInMainMenuLoginInfoDeclaration
{
	typedef SubMenuInMainMenuLoginInfo<auto> SubMenuInMainMenuLoginInfo;
	SubMenuInMainMenuLoginInfo currentLoginInfo;
}

namespace mainMenuDeclaration
{
	typedef MainMenu<auto> MainMenu;
	MainMenu menu;
}

#endif
