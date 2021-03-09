#ifndef _UBER_NAMESPACESFORWELCOMEMENU
#define _UBER_NAMESPACESFORWELCOMEMENU 1

#include <iostream>
#include <conio.h>

using namespace std;

namespace requireEnter
{
	void requireEnterMainMethodInWelcomeMenu()
	{
		cout << "Click ENTER to continue." << endl;
		while(getch() != 13);		
	}
}

#include "subMenuInWelcomeMenuLoginForm.h"
namespace subMenuInWelcomeMenuLoginFormDeclaration
{
	typedef SubMenuInWelcomeMenuLoginForm<int> SubMenuInWelcomeMenuLoginForm;
	SubMenuInWelcomeMenuLoginForm loginForm;
}

#include "subMenuInWelcomeMenuRegisterForm.h"
namespace subMenuInWelcomeMenuRegisterFormDeclaration
{
	typedef SubMenuInWelcomeMenuRegisterForm<int> SubMenuInWelcomeMenuRegisterForm;
	SubMenuInWelcomeMenuRegisterForm registerForm;
}

#endif
