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
		short size = 0;	
		while(true)
		{
			j = 0; k = 0; l = 0; i = -1;
			size = (*first_name).size();
			while(i < size)
			{
				i++;
				
				if(*first_name[i] >= ' ' && *first_name[i] <= '@')
					j++;
			
					
				if(*first_name[i] >= '[' && *first_name[i] <= '`')
					k++;
					
					
				if(*first_name[i] >= '{' && *first_name[i] <= '~')
					l++;
					
				if(j != 0 && k != 0 && l != 0)
					break;
			}	
				
			if(j != 0 && k != 0 && l != 0)
			{	
				cout << error_msg;
				return false;
			}
			else
				return true;
			
		}	
	}
}

#endif
