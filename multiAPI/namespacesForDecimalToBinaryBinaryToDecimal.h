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
	
	
	void verifyNumberToConvertToBinaryPolymorphismFunction(vector<string>::iterator * itCollectionOfAddresses, vector<string> * collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container)
	{
		cout << "The following data is known as addresses from 'decimalToBinaryBinaryToDecimal' header file: " << endl;
		cout << "The following addresses are hexadecimal values." << endl;
		for (*itCollectionOfAddresses; *itCollectionOfAddresses != (*collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container).end(); (*itCollectionOfAddresses)++)
		{
			cout << (**itCollectionOfAddresses) << endl;
		}
		cout << endl;
	}


	int verifyNumberToConvertToBinaryPolymorphismFunction(string * error_msg, string textToEncryptionViaCaesarCipher)
	{
		int j = 0, k = 0, i = -1;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; i = -1;
			len = textToEncryptionViaCaesarCipher.length();
			char char_array[len + 1];
			strcpy(char_array, textToEncryptionViaCaesarCipher.c_str());
			while(i < len)
			{
				i++;
				
				if((char_array[i] >= ' ') && (char_array[i] <= '/'))
					j++;
			
				if((char_array[i] >= '0') && (char_array[i] <= '9'))
					j++;
							
				if((char_array[i] >= ':') && (char_array[i] <= '@'))
					j++;
				
				if((char_array[i] >= 'A') && (char_array[i] <= 'Z'))
					k++;
					
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
				return 202;
			}
			else 
			{
				cout << *error_msg << endl;
				return 0;					
			}	
		}		
	}
	
	
	bool verifyNumberToConvertToBinaryPolymorphismFunction(string error_msg, string textToConvertFromRomanNumbersToArabicNumbers)
	{
		int j = 0, k = 0, i = -1;
		short len = 0;	
		while(true)
		{
			j = 0; k = 0; i = -1;
			len = textToConvertFromRomanNumbersToArabicNumbers.length();
			char char_array[len + 1];
			strcpy(char_array, textToConvertFromRomanNumbersToArabicNumbers.c_str());
			while(i < len)
			{
				i++;

				if((char_array[i] == 'M') && (char_array[i+1] == '_') ||
				   (char_array[i] == 'D') && (char_array[i+1] == '_') ||
				   (char_array[i] == 'C') && (char_array[i+1] == '_') ||
				   (char_array[i] == 'L') && (char_array[i+1] == '_') ||
				   (char_array[i] == 'X') && (char_array[i+1] == '_') ||
			       (char_array[i] == 'V') && (char_array[i+1] == '_') ||
				   (char_array[i] == 'C') && (char_array[i+1] == 'M') ||
				   (char_array[i] == 'C') && (char_array[i+1] == 'D') ||
				   (char_array[i] == 'X') && (char_array[i+1] == 'C') ||
				   (char_array[i] == 'X') && (char_array[i+1] == 'L') ||
				   (char_array[i] == 'I') && (char_array[i+1] == 'X') ||
				   (char_array[i] == 'I') && (char_array[i+1] == 'V'))
				   {
				   		k++;
				   		i++;
				   }
				else if((char_array[i] == 'M') || 
					    (char_array[i] == 'D') || 
					    (char_array[i] == 'C') || 
					    (char_array[i] == 'L') || 
					    (char_array[i] == 'X') || 
					    (char_array[i] == 'V') || 
					    (char_array[i] == 'I'))
							k++;
				else if ((char_array[i] != NULL) && 
						 (char_array[i] != '\0'))
							j++;
							
				
				if(j != 0)
					break;
			}	
				
			if(len >= 1 && k >= 1 && j == 0)
			{	
				return true;
			}
			else 
			{
				cout << error_msg << endl;
				return false;					
			}	
		}		
	}
	
	
	void verifyNumberToConvertToBinaryPolymorphismFunction(string textToConvertFromRomanNumbersToArabicNumbers)
	{
		int arabicNumbersArray[]                      = { 1000000, 500000, 100000, 50000, 10000, 5000, 1000, 900,  500, 400,  100, 90,   50,  40,   10,  9,    5,   4,    1};
		char * pointerToPointerToRomanNumeralsArray[] = { "M_",    "D_",   "C_",   "L_",  "X_",  "V_", "M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};	
			
			
		long int  counterFromRomanNumbersToArabicNumbers = 0;
		auto  i   = -1;
		short len = 0;	


		i   = -1;
		len = textToConvertFromRomanNumbersToArabicNumbers.length();
		char char_array[len + 1];
		strcpy(char_array, textToConvertFromRomanNumbersToArabicNumbers.c_str());
		while(i < len)
		{
			i++;
	
			if((char_array[i] == 'M') && (char_array[i+1] == '_'))
			{
				counterFromRomanNumbersToArabicNumbers += 1000000;
				i++;
				continue;
			}
			
			if((char_array[i] == 'D') && (char_array[i+1] == '_'))
			{
				counterFromRomanNumbersToArabicNumbers += 500000;
				i++;
				continue;
			}
			
			if((char_array[i] == 'C') && (char_array[i+1] == '_'))
			{
				counterFromRomanNumbersToArabicNumbers += 100000;
				i++;
				continue;
			}
			
			if((char_array[i] == 'L') && (char_array[i+1] == '_'))
			{
				counterFromRomanNumbersToArabicNumbers += 50000;
				i++;
				continue;
			}
			
			if((char_array[i] == 'X') && (char_array[i+1] == '_'))
			{
				counterFromRomanNumbersToArabicNumbers += 10000;
				i++;
				continue;
			}
			
			if((char_array[i] == 'V') && (char_array[i+1] == '_'))
			{
				counterFromRomanNumbersToArabicNumbers += 5000;
				i++;
				continue;
			}
			
			if((char_array[i] == 'C') && (char_array[i+1] == 'M'))
			{
				counterFromRomanNumbersToArabicNumbers += 900;
				i++;
				continue;
			}
							
			if((char_array[i] == 'C') && (char_array[i+1] == 'D'))
			{
				counterFromRomanNumbersToArabicNumbers += 400;
				i++;
				continue;
			}
							
			if((char_array[i] == 'X') && (char_array[i+1] == 'C'))
			{
				counterFromRomanNumbersToArabicNumbers += 90;
				i++;
				continue;
			}
						
			if((char_array[i] == 'X') && (char_array[i+1] == 'L'))
			{
				counterFromRomanNumbersToArabicNumbers += 40;
				i++;
				continue;
			}
						
			if((char_array[i] == 'I') && (char_array[i+1] == 'X'))
			{
				counterFromRomanNumbersToArabicNumbers += 9;
				i++;
				continue;
			}
					
			if((char_array[i] == 'I') && (char_array[i+1] == 'V'))
			{
				counterFromRomanNumbersToArabicNumbers += 4;
				i++;
				continue;
			}
						
			if((char_array[i] == 'M'))
				counterFromRomanNumbersToArabicNumbers += 1000;
						
			if((char_array[i] == 'D'))
				counterFromRomanNumbersToArabicNumbers += 500;
						
			if((char_array[i] == 'C'))
				counterFromRomanNumbersToArabicNumbers += 100;
						
			if((char_array[i] == 'L'))
				counterFromRomanNumbersToArabicNumbers += 50;
					
			if((char_array[i] == 'X'))
				counterFromRomanNumbersToArabicNumbers += 10;
						
			if((char_array[i] == 'V'))
				counterFromRomanNumbersToArabicNumbers += 5;	
						
			if((char_array[i] == 'I'))
				counterFromRomanNumbersToArabicNumbers += 1;	
		}
		cout << to_string(counterFromRomanNumbersToArabicNumbers) << endl;	
	}
	
	
	int ** verifyNumberToConvertToBinaryPolymorphismFunction(int * pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt, int * pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt)
	{
		int **_2DArrayWithDynamicAllocatedMemory  = new int*[*pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt];
		for(int i = 0; i <= (*pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++i) {
		    _2DArrayWithDynamicAllocatedMemory[i] = new int[*pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt];
		}	
		
		
		for (int i = 0; i <= (*pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); i++)
		{
			for (int j = 0; j <= (*pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); j++)
			{
				_2DArrayWithDynamicAllocatedMemory[i][j] = i*j;
			}
		}
		
	
		return _2DArrayWithDynamicAllocatedMemory;	
	}
}


namespace convertAddress
{
	template <typename T>
	string convertPointerToStringAddress(T obj)
	{
	  T address(reinterpret_cast<T>(obj));
	  stringstream ss;
	  ss << address;
	  return ss.str();
	}
	
	
	template <typename T>
	T* convertAddressStringToPointer(const std::string &address)
	{
	  stringstream ss;
	  ss << address;
	  int tmp(0);
	  if(!(ss >> tmp)) throw cout << "Failed - invalid address!" << endl;
	  return reinterpret_cast<T*>(tmp);
	}
}


namespace encryptionAlgorithms
{
	const auto count                   = 3;
	const auto ASCII_codeForTheLetterA = 65;
	const auto ASCII_codeForTheLetterZ = 90;
	const auto jumpCounter             = 26;
	
	
	template <typename T>
	T doEncryptionTextDataViaCaesarCipherAlgorithm(T textToEncrypt)
	{
		auto t = 0;
		
		
		for (auto i = 0; i < textToEncrypt.length(); i++)
		{
			t = textToEncrypt[i] + count;
			
			if (t < ASCII_codeForTheLetterA) 
				textToEncrypt[i] += (jumpCounter + count);
			else if (t > ASCII_codeForTheLetterZ) 
				textToEncrypt[i] -= (jumpCounter - count); 
			else
				textToEncrypt[i] += count;
		}
		
		
		cout << "\n\n\n\n\nExercise with addresses: " << endl;
		cout << "The name of the array - a pointer - pointing to the first element of the array, and more precisely to its address."                                  << endl;
		cout << "In dynamically allocated memory (array new int) also the name of the array is a pointer to its first element, and more precisely to its address."    << endl;
		cout << "Array and dynamically allocated (new int) reserves space in memory so that all elements must be in one block in memory next to each other. "         << endl;
		cout << "If a dynamically allocated array does not find enough memory, it returns NULL."                                                                      << endl;
		cout << "For Vector containers, the data may or may not be in memory side by side. Therefore, it is necessary to use iterators (objects), "                   << endl;
		cout << "which you can move around the vector. Vector reserves twice as much space as needed, e.g. size = 4 but capacity = 8."                                << endl;
		cout << "So the rule in arrays that their name is a pointer to their first element cannot work for vector due to its specificity in data memory reservation." << endl;
		cout << "\n\n\n\n" << endl;
		
		
		int * exerciseArray_DynamicallyAllocatedMemory_IntType = new int[textToEncrypt.length() + 10];
		int exerciseArray[11];
		
		
		exerciseArray[0] = 5;
		exerciseArray[1] = 2;
		exerciseArray[2] = 1;
		exerciseArray[3] = 9;
		exerciseArray[4] = 4;
		
		
		*(exerciseArray_DynamicallyAllocatedMemory_IntType)     = 100;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 1) = 5;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 2) = 6;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 3) = 4;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 4) = 99;
		
		
		cout << "Address 'exerciseArray[0]' via '&exerciseArray[0]': " << &exerciseArray[0] << endl;
		cout << "Address 'exerciseArray[0]' via 'exerciseArray':     " << exerciseArray     << endl;
		cout << "Address 'exerciseArray[1]' via '&exerciseArray[1]': " << &exerciseArray[1] << endl;
		cout << "Address 'exerciseArray[2]' via '&exerciseArray[2]': " << &exerciseArray[2] << endl;
		cout << "Value of the 'exerciseArray[0]':     " << exerciseArray[0] << endl;
		cout << "Value of the 'exerciseArray[1]':     " << exerciseArray[1] << endl;
		cout << "Value of the 'exerciseArray[2]':     " << exerciseArray[2] << endl;
		cout << "\n\n\n\n" << endl;
		
		
		cout << "Address 'exerciseArray_DynamicallyAllocatedMemory_IntType[0]' via '&exerciseArray_DynamicallyAllocatedMemory_IntType[0]': " << &exerciseArray_DynamicallyAllocatedMemory_IntType[0] << endl;
		cout << "Address 'exerciseArray_DynamicallyAllocatedMemory_IntType[0]' via 'exerciseArray_DynamicallyAllocatedMemory_IntType':     " << exerciseArray_DynamicallyAllocatedMemory_IntType     << endl;
		cout << "Address 'exerciseArray_DynamicallyAllocatedMemory_IntType[1]' via '&exerciseArray_DynamicallyAllocatedMemory_IntType[1]': " << &exerciseArray_DynamicallyAllocatedMemory_IntType[1] << endl;
		cout << "Address 'exerciseArray_DynamicallyAllocatedMemory_IntType[2]' via '&exerciseArray_DynamicallyAllocatedMemory_IntType[2]': " << &exerciseArray_DynamicallyAllocatedMemory_IntType[2] << endl;
		cout << "Value of the 'exerciseArray_DynamicallyAllocatedMemory_IntType[0]':   " << exerciseArray_DynamicallyAllocatedMemory_IntType[0]  << endl;
		cout << "Value of the 'exerciseArray_DynamicallyAllocatedMemory_IntType[1]':   " << exerciseArray_DynamicallyAllocatedMemory_IntType[1]  << endl;
		cout << "Value of the 'exerciseArray_DynamicallyAllocatedMemory_IntType[2]':   " << exerciseArray_DynamicallyAllocatedMemory_IntType[2]  << endl;	
		cout << "\n\n\n\n" << endl;
		
		
		delete [] exerciseArray_DynamicallyAllocatedMemory_IntType;
		return textToEncrypt;
	}
	
	
	template <typename T>
	T doDecryptionTextDataViaCaesarCipherAlgorithm(T textToDecrypt)
	{
		auto t = 0;
		
		
		for (auto i = 0; i < textToDecrypt.length(); i++)
		{
			t = textToDecrypt[i] - count;
			
			if (t < ASCII_codeForTheLetterA) 
				textToDecrypt[i] += (jumpCounter - count);
			else if (t > ASCII_codeForTheLetterZ) 
				textToDecrypt[i] -= (jumpCounter + count); 
			else
				textToDecrypt[i] -= count;
		}
		
		
		cout << "\n\n\n\n\nExercise with sizeof: " << endl;
		cout << "Number of elements in an array or dynamically allocated (new int) = array size / array data type size." << endl;
		cout << "An 11-element array of int type will have 11 * 4 = 44 bytes of size, so 44 bytes / 4 = 11 elements."    << endl;
		cout << "\n\n\n\n" << endl;
		
		
		int * exerciseArray_DynamicallyAllocatedMemory_IntType = new int[textToDecrypt.length() + 10];
		int exerciseArray[11];
		
		
		exerciseArray[0] = 89;
		exerciseArray[1] = 23;
		exerciseArray[2] = 11;
		exerciseArray[3] = 97;
		exerciseArray[4] = 43;
		
		
		*(exerciseArray_DynamicallyAllocatedMemory_IntType)     = 120;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 1) = 54;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 2) = 1;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 3) = 7;
		*(exerciseArray_DynamicallyAllocatedMemory_IntType + 4) = 990;
		
		
		cout << "Value of the 'exerciseArray[0]':     " << exerciseArray[0] << endl;
		cout << "Value of the 'exerciseArray[1]':     " << exerciseArray[1] << endl;
		cout << "Value of the 'exerciseArray[2]':     " << exerciseArray[2] << endl;
		cout << "Size of 'exerciseArray':                         " << sizeof(exerciseArray)               << endl;
		cout << "Size of 'int' type:                              " << sizeof(int)                         << endl;
		cout << "Number of elements in array 'exerciseArray':     " << sizeof(exerciseArray) / sizeof(int) << endl;
		cout << "\n\n\n\n" << endl;
		
		
		cout << "In the case of dynamically allocated memory (new int array), it is impossible to assess the size of the array on the fly due to"<< endl;
		cout << "the specificity of the (new) structure on the arrays. The methods for determining the size are in vectors (size, capacity)."    << endl;
		cout << "Value of the 'exerciseArray_DynamicallyAllocatedMemory_IntType[0]':   " << exerciseArray_DynamicallyAllocatedMemory_IntType[0]  << endl;
		cout << "Value of the 'exerciseArray_DynamicallyAllocatedMemory_IntType[1]':   " << exerciseArray_DynamicallyAllocatedMemory_IntType[1]  << endl;
		cout << "Value of the 'exerciseArray_DynamicallyAllocatedMemory_IntType[2]':   " << exerciseArray_DynamicallyAllocatedMemory_IntType[2]  << endl;
		cout << "Size of 'exerciseArray_DynamicallyAllocatedMemory_IntType':                         " << sizeof(exerciseArray_DynamicallyAllocatedMemory_IntType)               << endl;
		cout << "Size of 'int' type:                                                                 " << sizeof(int)                                                            << endl;
		cout << "Number of elements in array 'exerciseArray_DynamicallyAllocatedMemory_IntType':     " << sizeof(exerciseArray_DynamicallyAllocatedMemory_IntType) / sizeof(int) << endl;	
		cout << "\n\n\n\n" << endl;
		
		
		delete [] exerciseArray_DynamicallyAllocatedMemory_IntType;
		return textToDecrypt;
	}
	
	
}


namespace bubbleSortAlgorithms
{
	
	template <typename T>
	void showTheCurrentStateOfTheArray(T * pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm)
	{
		for (auto i = 0; i < sizeof(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm) + 2; i++)
		{
			cout << (i+1) << ". = " << pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[i] << endl;
		}
	}
	
	
	template <typename T>
	void sortArrayValuesViaBubbleSortAlgorithm(T * pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm)
	{
		auto temp = 0;
		
		for (auto i = 0; i < sizeof(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm) + 1; i++)
		{
			cout << "Sort number: " << i << endl;
			showTheCurrentStateOfTheArray(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
			
			
			for (auto j = 0; j < sizeof(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm) + 1; j++)
			{
				if (pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[j] > pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[j+1])
				{
					temp = pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[j];
					
					pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[j]   = pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[j+1];
					pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm[j+1] = temp;
				}
			}
		}		
	}
	

	template <typename T>
	void exerciseWithVector(T irrelevantNumber)
	{
		cout << "\n\n\n\n\nExercise with vector: " << endl;
		cout << "size vector = 3 but capacity = 4. After adding another item, capacity still remains = 4."                 << endl;
		cout << "Generally vector reserves a little more space in memory than it currently needs."                         << endl;
		cout << "If he had to keep releasing up memory after adding items, looking for new places, reserving them again, " << endl;
		cout << "it could take a little longer with larger amounts of data, so he reserves more. "                         << endl;
		cout << "When adding items, the capacity changes from 4 to 8 at once. It doubles in size."                         << endl;
		cout << "\n\n\n\n" << endl;		
		
		
		vector<int> exerciseVector;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(5);
		
		
		cout << "After add first item" << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(1);
		
		
		cout << "\n\n\n\n\nAfter add second item"         << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(9);
		
		
		cout << "\n\n\n\n\nAfter add third item"          << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(19);
		
		
		cout << "After add fourth item" << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(177);
		
		
		cout << "\n\n\n\n\nAfter add fifth item"          << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;	
		exerciseVector.push_back(1003);
		
		
		cout << "After add sixth item" << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;	
		exerciseVector.push_back(2003);
		
		
		cout << "After add seventh item" << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(0);
		
		
		cout << "After add eighth item" << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(1);
		
		
		cout << "\n\n\n\n\nAfter add ninth item"          << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.push_back(88);
		
		
		cout << "After add tenth item" << endl;
		cout << "Size:     " << exerciseVector.size()     << endl;
		cout << "Capacity: " << exerciseVector.capacity() << endl;
		exerciseVector.clear();	
	}
	
	
}


namespace findMinMaxValuesInArray
{
	template <typename T, typename T2>
	T2 findMinValueInArray(T * pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm, T2 irrelevantNumber)
	{
		auto minx = 0;
		
		
		for (auto i = 0; i < sizeof(pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm) + 2; i++)
		{
			if (i == 0)
			{
				minx = pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm[i];
			} 
			else if (pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm[i] < minx)
			{
				minx = pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm[i];
			}
		}
		
		
		return minx;		
	}
	
	
	template <typename T, typename T2>
	T2 findMaxValueInArray(T * pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm, T2 irrelevantNumber)
	{
		auto maxx = 0;
		
		
		for (auto i = 0; i < sizeof(pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm) + 2; i++)
		{
			if (i == 0)
			{
				maxx = pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm[i];
			} 
			else if (pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm[i] > maxx)
			{
				maxx = pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm[i];
			}
		}
		
		
		return maxx;	
	}
}


#endif
