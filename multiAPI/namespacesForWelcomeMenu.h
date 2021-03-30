#ifndef _UBER_NAMESPACESFORWELCOMEMENU
#define _UBER_NAMESPACESFORWELCOMEMENU 1

#include <iostream>
#include <conio.h>
#include <cstring>
#include <vector>
#include <fstream>

using namespace std;


#include "menuWithMainOptionsAfterSignIn.h"
namespace menuWithMainOptionsAfterSignInDeclaration
{
	typedef MenuWithMainOptionsAfterSignIn<int> MenuWithMainOptionsAfterSignIn;
	MenuWithMainOptionsAfterSignIn menuWithMainOptions;	
}


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
	bool checkDataFromLoginForm(string * error_msg, vector<string>::iterator * itLogin, vector<string> * allLoginDataFromFormVector)
	{
		
		cout << "The following data will be checked: " << endl;
		for (*itLogin; *itLogin != (*allLoginDataFromFormVector).end(); (*itLogin)++)
		{
			cout << (**itLogin) << endl;
		}
		cout << endl;
		cout << "Checking login data is in progress..." << endl;
		
		
		string username, password;
		*itLogin = (*allLoginDataFromFormVector).begin();
		username = **itLogin; 
		(*itLogin)++;
		password = **itLogin;
		cout << "Username: " << username << endl << "Password: " << password << endl;
		
		
		fstream myDatabaseFileHandler;
		myDatabaseFileHandler.open("database.txt", ios::in);
				
				
		if (myDatabaseFileHandler.is_open())
		{
			if (myDatabaseFileHandler.bad())
			{
				cout << "A critical error" << endl;
			}
					
			if (myDatabaseFileHandler.fail())
			{
				cout << "Failed file" << endl;
			}
							
			if (myDatabaseFileHandler.good())
			{
				
				cout << "The database file is valid" << endl;
				
						
				string tmpBuffer, bufferToUsing;
				int arrayForBufferToUsingLength = 0;
				
						
				do 
				{
					
					myDatabaseFileHandler >> tmpBuffer;
					bufferToUsing += tmpBuffer + '\n';
									
				} while (!myDatabaseFileHandler.eof());	
						
						
				char char_arrayForBufferToUsing[bufferToUsing.length() + 1];
				strcpy(char_arrayForBufferToUsing, bufferToUsing.c_str());
				arrayForBufferToUsingLength = bufferToUsing.length() - 10;
					
					
				int i = -1;
				int j = 0;
				string tmpStringForUsername, tmpStringForPassword;	
				while(i < arrayForBufferToUsingLength)
				{
					i++;
							
					if((char_arrayForBufferToUsing[i]     == 'U') &&
					   (char_arrayForBufferToUsing[i + 1] == 's') &&
				       (char_arrayForBufferToUsing[i + 2] == 'e') &&
					   (char_arrayForBufferToUsing[i + 3] == 'r') &&
					   (char_arrayForBufferToUsing[i + 4] == 'n') &&
					   (char_arrayForBufferToUsing[i + 5] == 'a') &&
					   (char_arrayForBufferToUsing[i + 6] == 'm') &&
					   (char_arrayForBufferToUsing[i + 7] == 'e') &&
					   (char_arrayForBufferToUsing[i + 8] == ':'))
					{
						j = (i + 10);
						do
						{
							tmpStringForUsername += char_arrayForBufferToUsing[j];
									
							j++;	
						}
						while(char_arrayForBufferToUsing[j] != '\n');	
								
						
						if (tmpStringForUsername == username)
						{
							cout << "Username exist. Checking password..." << endl;
							
							
							j += 1;
							
							
							if((char_arrayForBufferToUsing[j]     == 'P') &&
							   (char_arrayForBufferToUsing[j + 1] == 'a') &&
						       (char_arrayForBufferToUsing[j + 2] == 's') &&
							   (char_arrayForBufferToUsing[j + 3] == 's') &&
							   (char_arrayForBufferToUsing[j + 4] == 'w') &&
							   (char_arrayForBufferToUsing[j + 5] == 'o') &&
							   (char_arrayForBufferToUsing[j + 6] == 'r') &&
							   (char_arrayForBufferToUsing[j + 7] == 'd') &&
							   (char_arrayForBufferToUsing[j + 8] == ':'))
							{
								
								j += 10;
									
							
								do
								{
									tmpStringForPassword += char_arrayForBufferToUsing[j];
											
									j++;	
								}
								while(char_arrayForBufferToUsing[j] != '\n');
								
								
								if (tmpStringForPassword == password)
								{
									cout << "Password is correct. Welcome." << endl;
									
									myDatabaseFileHandler.close();
									tmpStringForUsername = "";
									tmpStringForPassword = "";
									return true;
								}
								else
								{
									cout << *error_msg << endl;
									myDatabaseFileHandler.close();
									tmpStringForUsername = "";
									tmpStringForPassword = "";
									return false;		
								}
							
							}
							else
							{
								cout << *error_msg << endl;
								myDatabaseFileHandler.close();
								tmpStringForUsername = "";
								return false;					
							}
						}
						
						tmpStringForUsername = "";
						j = 0;
					}
				}
				
				
				cout << *error_msg << endl;
				myDatabaseFileHandler.close();
				tmpStringForUsername = "";
				return false;
				
								
			}
		}
		else
		{
			cout << "The file was not opened properly" << endl;	
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
