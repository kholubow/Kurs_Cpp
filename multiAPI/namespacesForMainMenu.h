#ifndef _UBER_NAMESPACESFORMAINMENU
#define _UBER_NAMESPACESFORMAINMENU 1

#include "subMenuInMainMenuLoginInfo.h"
#include <iostream>
#include <typeinfo>

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

#endif
