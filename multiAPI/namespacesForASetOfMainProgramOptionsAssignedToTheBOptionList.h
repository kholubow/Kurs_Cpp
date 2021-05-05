#ifndef _UBER_NAMESPACESFORASETOFMAINPROGRAMOPTIONSASSIGNEDTOTHEBOPTIONLIST
#define _UBER_NAMESPACESFORASETOFMAINPROGRAMOPTIONSASSIGNEDTOTHEBOPTIONLIST 1


#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>


using namespace std;


namespace requireEnter
{
	void requireEnterMainMethodInASetOfMainProgramOptionsAssignedToTheBOptionList()
	{
		cout << "Click ENTER to continue." << endl;
		while(getch() != 13);		
	}
}


namespace aSetOfPolymorphismFunctions
{
	
	
	bool polymorphismFunction(string * error_msg, string * number)
	{
		int j = 0, k = 0, i = -1, n = 0, e = 0;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; i = -1; n = 0; e = 0;
			len = (*number).length();
			char char_array[len + 1];
			strcpy(char_array, (*number).c_str());
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
					
				if(j != 0 || n != 0 || e != 0)
					break;
			}	
				
			if(len >= 1 && k >= 1 && e == 0 && n == 0 && j == 0)
			{	
				if (stoi(*number) >= 0)
				{
					return true;
				}
				else
				{
					cout << *error_msg << endl;
					return false;					
				}
			}
			else 
			{
				cout << *error_msg << endl;
				return false;					
			}	
		}	
	}
	
	
	/*
	long long int **** polymorphismFunction(int * pointerToSizeWAsInt, int * pointerToSizeXAsInt, int * pointerToSizeYAsInt, int * pointerToSizeZAsInt)
	{
	    long long int **** _4DArrayWithDynamicAllocatedMemory = new long long int ***[*pointerToSizeYAsInt];
	    for (int i = 0; i < *pointerToSizeYAsInt; i++)
	    {
	        _4DArrayWithDynamicAllocatedMemory[i] = new long long int **[*pointerToSizeXAsInt];
	        for (int j = 0; j < *pointerToSizeXAsInt; j++)
	        {
	            _4DArrayWithDynamicAllocatedMemory[i][j] = new long long int *[*pointerToSizeZAsInt];
	        	for (int k = 0; k < *pointerToSizeZAsInt; k++)
					 _4DArrayWithDynamicAllocatedMemory[i][j][k] = new long long int [*pointerToSizeWAsInt];   
	    	}
	    }
		
		
		for (int i = 0; i < *pointerToSizeYAsInt; ++i)
		{
			for (int j = 0; j < *pointerToSizeXAsInt; ++j)
			{
				for (int k = 0; k < *pointerToSizeZAsInt; ++k)
				{
					_4DArrayWithDynamicAllocatedMemory[i][j][k] = (i*j) + k;
				}
				for (int l = 0; l < *pointerToSizeWAsInt; ++l)
				{
					_4DArrayWithDynamicAllocatedMemory[i][j][l] = (i*j) - l;
				}
			}
		}
		
	
		return _4DArrayWithDynamicAllocatedMemory;
	}
	*/
	
	
}


#endif
