#ifndef _UBER_NAMESPACESFORWELCOMEMENU
#define _UBER_NAMESPACESFORWELCOMEMENU 1

#include <iostream>
#include <conio.h>
#include <cstring>
#include <vector>

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


namespace verifyPasswordInLoginForm
{
	bool verifyPasswordInLoginFormFunction(string * error_msg, string * password)
	{
		int j = 0, k = 0, i = -1, n = 0, e = 0;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; i = -1; n = 0; e = 0;
			len = (*password).length();
			char char_array[len + 1];
			strcpy(char_array, (*password).c_str());
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
					
				if(len >= 10 && k >= 3 && e >= 3 && j >= 3 && n >= 1)
					break;
			}	
				
			if(len >= 10 && k >= 3 && e >= 3 && j >= 3 && n >= 1)
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


namespace checkDataFromLoginForm
{
	void checkDataFromLoginForm(string * error_msg, vector<string>::iterator * itLogin, vector<string> * allLoginDataFromFormVector)
	{
		
		cout << "The following data will be checked: " << endl;
		for (*itLogin; *itLogin != (*allLoginDataFromFormVector).end(); (*itLogin)++)
		{
			cout << (**itLogin) << endl;
		}
		cout << endl;
		cout << "Checking login data is in progress..." << endl;
		
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
