#ifndef _UBER_NAMESPACESFORREGISTERFORM
#define _UBER_NAMESPACESFORREGISTERFORM 1

#include <iostream>
#include <cstring>

using namespace std;


namespace verifyFirstName
{
	bool verifyFirstNameFunction(string * error_msg, string * first_name)
	{
		int j = 0, k = 0, l = 0, i = -1;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; l = 0; i = -1;
			len = (*first_name).length();
			char char_array[len + 1];
			strcpy(char_array, (*first_name).c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '@'))
					j++;
			
					
				if((char_array[i] >= '[') && (char_array[i] <= '`'))
					k++;
					
					
				if((char_array[i] >= '{') && (char_array[i] <= '~'))
					l++;
				
					
				if(j != 0 || k != 0 || l != 0)
					break;
			}	
				
			if(j != 0 || k != 0 || l != 0)
			{	
			    cout << *error_msg << endl;
				return false;
			}
			else return true;
				
			
		}	
	}
}

namespace verifyLastName
{
	bool verifyLastNameFunction(string * error_msg, string * last_name)
	{
		int j = 0, k = 0, l = 0, i = -1;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; l = 0; i = -1;
			len = (*last_name).length();
			char char_array[len + 1];
			strcpy(char_array, (*last_name).c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '@'))
					j++;
			
					
				if((char_array[i] >= '[') && (char_array[i] <= '`'))
					k++;
					
					
				if((char_array[i] >= '{') && (char_array[i] <= '~'))
					l++;
				
					
				if(j != 0 || k != 0 || l != 0)
					break;
			}	
				
			if(j != 0 || k != 0 || l != 0)
			{	
			    cout << *error_msg << endl;
				return false;
			}
			else return true;
				
			
		}	
	}
}

namespace verifyCity
{
	bool verifyCityFunction(string * error_msg, string * city)
	{
		int j = 0, k = 0, l = 0, i = -1;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; l = 0; i = -1;
			len = (*city).length();
			char char_array[len + 1];
			strcpy(char_array, (*city).c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '@'))
					j++;
			
					
				if((char_array[i] >= '[') && (char_array[i] <= '`'))
					k++;
					
					
				if((char_array[i] >= '{') && (char_array[i] <= '~'))
					l++;
				
					
				if(j != 0 || k != 0 || l != 0)
					break;
			}	
				
			if(j != 0 || k != 0 || l != 0)
			{	
			    cout << *error_msg << endl;
				return false;
			}
			else return true;
				
			
		}	
	}
}

namespace verifyEmail
{
	bool verifyEmailFunction(string * error_msg, string * email)
	{
		int j = 0, k = 0, l = 0, i = -1, m = 0, n = 0, at = 0;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; l = 0; i = -1; m = 0; n = 0; at = 0;
			len = (*email).length();
			char char_array[len + 1];
			strcpy(char_array, (*email).c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '-'))
					j++;
			
				if((char_array[i] == '/'))
					m++;
					
				if((char_array[i] >= ':') && (char_array[i] <= '?'))
					k++;
							
				if((char_array[i] >= '[') && (char_array[i] <= '`'))
					l++;
				
				if((char_array[i] >= '{') && (char_array[i] <= '~'))
					n++;
					
				if((char_array[i] == '@'))
					at++;
					
				if(j != 0 || k != 0 || l != 0 || m != 0 || n != 0)
					break;
			}	
				
			if(j != 0 || k != 0 || l != 0 || m != 0 || n != 0)
			{	
			    cout << *error_msg << endl;
				return false;
			}
			else 
			{
				if(at == 1)
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
}

namespace verifyPassword
{
	bool verifyPasswordFunction(string * error_msg, string * password)
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

#endif
