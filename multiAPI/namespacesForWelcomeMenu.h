#ifndef _UBER_NAMESPACESFORWELCOMEMENU
#define _UBER_NAMESPACESFORWELCOMEMENU 1

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;


namespace verifyUsernameInLoginForm
{
	bool verifyUsernameInLoginFormFunction(string * error_msg, string * username)
	{
		int j = 0, k = 0, i = -1, n = 0, e = 0;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; i = -1; n = 0; e = 0;
			len = (*username).length();
			char char_array[len + 1];
			strcpy(char_array, (*username).c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '/'))
					j++;
			
				if((char_array[i] >= '0') && (char_array[i] <= '9'))
					k++;
							
				if((char_array[i] >= ':') && (char_array[i] <= '@'))
					j++;
				
				if((char_array[i] >= 'A') && (char_array[i] <= 'Z'))
					n++;
					
				if((char_array[i] >= '[') && (char_array[i] <= '`'))
					j++;
				
				if((char_array[i] >= 'a') && (char_array[i] <= 'z'))
					e++;
					
				if((char_array[i] >= '{') && (char_array[i] <= '~'))
					j++;
					
				if(j != 0)
					break;
			}	
				
			if(len >= 5 && (k >= 1 || e >= 1 || n >= 1) && j == 0)
			{	
				return true;
			}
			else 
			{
				cout << *error_msg << endl;
				return false;					
			}	
		}	
	}
}


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
