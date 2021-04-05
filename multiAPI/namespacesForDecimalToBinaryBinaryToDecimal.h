#ifndef _UBER_NAMESPACESFORDECIMALTOBINARYBINARYTODECIMAL
#define _UBER_NAMESPACESFORDECIMALTOBINARYBINARYTODECIMAL 1


#include <iostream>
#include <conio.h>
#include <cstring>
#include <vector>
#include <string>
#include <sstream>


using namespace std;


namespace requireEnter
{
	void requireEnterMainMethodInDecimalToBinaryBinaryToDecimal()
	{
		cout << "Click ENTER to continue." << endl;
		while(getch() != 13);		
	}
}


namespace verifyDataFunctions
{
	bool verifyNumberToConvertToBinaryPolymorphismFunction(string * error_msg, string * number)
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
	
	
	int verifyNumberToConvertToBinaryPolymorphismFunction(string error_msg, string * binaryNumber)
	{
		int j = 0, k = 0, i = -1;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; i = -1;
			len = (*binaryNumber).length();
			char char_array[len + 1];
			strcpy(char_array, (*binaryNumber).c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '/'))
					j++;
			
				if((char_array[i] == '0') || (char_array[i] == '1'))
					k++;
					
				if((char_array[i] >= '2') && (char_array[i] <= '9'))
					j++;
							
				if((char_array[i] >= ':') && (char_array[i] <= '@'))
					j++;
				
				if((char_array[i] >= 'A') && (char_array[i] <= 'Z'))
					j++;
					
				if((char_array[i] >= '[') && (char_array[i] <= '`'))
					j++;
				
				if((char_array[i] >= 'a') && (char_array[i] <= 'z'))
					j++;
					
				if((char_array[i] >= '{') && (char_array[i] <= '~'))
					j++;
					
				if(j != 0)
					break;
			}	
				
			if(len >= 1 && k >= 1 && j == 0)
			{	
				return 200;
			}
			else 
			{
				cout << error_msg << endl;
				return 0;					
			}	
		}		
	}
}


namespace convertAddress
{
	template <typename T>
	std::string convertPointerToStringAddress(const T* obj)
	{
	  int address(reinterpret_cast<int>(obj));
	  std::stringstream ss;
	  ss << address;
	  return ss.str();
	}
	
	
	template <typename T>
	T* convertAddressStringToPointer(const std::string& address)
	{
	  std::stringstream ss;
	  ss << address;
	  int tmp(0);
	  if(!(ss >> tmp)) throw cout << "Failed - invalid address!" << endl;
	  return reinterpret_cast<T*>(tmp);
	}
}


#endif
