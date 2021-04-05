#ifndef _UBER_DECIMAL_TO_BINARY_BINARY_TO_DECIMAL
#define _UBER_DECIMAL_TO_BINARY_BINARY_TO_DECIMAL 1


#include "namespacesForDecimalToBinaryBinaryToDecimal.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <vector>


using namespace std;


template<typename T>
class DecimalToBinaryBinaryToDecimal
{
	protected:
		T x;
	public:
		void decimalToBinaryBinaryToDecimal();
};


template<typename T>
void DecimalToBinaryBinaryToDecimal<T>::decimalToBinaryBinaryToDecimal()
{
	char character;
		
		
	int i = 0, w = 0, numberToConvertToBinaryAsInt = 0;
	string numberToConvertToBinaryAsString         = "";
	string number_Error_msg                        = "You can convert only numbers to binary. Please try again.";
	string * pointerToNumberErrorMsg               = &number_Error_msg;
	string * pointerToNumberToConvertToBinaryValue = &numberToConvertToBinaryAsString;
	
	
	int finalDecimalFormOfANumber                      = 0;
	string numberToConvertToDecimalAsString            = "";
	string numberToDecimal_Error_msg                   = "You can convert only zeros and ones to decimal. Please try again.";
	string * pointerToNumberToConvertToDecimalValue    = &numberToConvertToDecimalAsString;
	string * pointerToNumberToConvertToDecimalErrorMsg = &numberToDecimal_Error_msg;
	vector<int> finalDecimalFormOfANumberVectorSTL_Container;
	vector<int>::iterator it                           = finalDecimalFormOfANumberVectorSTL_Container.begin();
	
	
	vector<string> collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container;
	vector<string>::iterator itCollectionOfAddresses                                                   = collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.begin();	
	vector<string> * pointerToCollectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorValue = &collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container;
	vector<string>::iterator * pointerToIteratorItCollectionOfAddresses                                = &itCollectionOfAddresses; 
	
	
	int * tmpPointer = &i;
	string address   = "";
	
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| A - Decimal to binary algorithm                                |" << endl;
		cout << "| B - Binary to decimal algorithm                                |" << endl;
		cout << "| C - Check addresses                                            |" << endl;
		cout << "| D - Option 4                                                   |" << endl;
		cout << "| ESC - Exit                                                     |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'A':
				{
					cout << "Decimal to binary algorithm"                << endl;
					cout << "Enter a number to convert to binary: "      << endl;
					cout << "==========================================="<< endl;
					cout << "Number must be equal to or greater than 0." << endl;
					do 
					{ 
						
						cout << "Please enter the number to convert to binary: " << endl; 
						cin  >> numberToConvertToBinaryAsString;
						
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToNumberErrorMsg,pointerToNumberToConvertToBinaryValue));
					
					
					int * int_arrayWithZerosAndOnesDynamicallyAllocatedMemory = new int[numberToConvertToBinaryAsString.length() + 10];
					numberToConvertToBinaryAsInt                              = stoi(numberToConvertToBinaryAsString);
					do
					{
						
						i++;
						
						int_arrayWithZerosAndOnesDynamicallyAllocatedMemory[i] = numberToConvertToBinaryAsInt % 2;
						numberToConvertToBinaryAsInt                           = numberToConvertToBinaryAsInt / 2;
						
						w = 2 * numberToConvertToBinaryAsInt + int_arrayWithZerosAndOnesDynamicallyAllocatedMemory[i];
						
					}while(w >= 2);
					
					
					cout << "A binary number: ";
					for (; i > 0; i--)
					{
						cout << int_arrayWithZerosAndOnesDynamicallyAllocatedMemory[i];
					}
					cout << endl;
		
		
					i = 0; w = 0, numberToConvertToBinaryAsInt = 0;
					numberToConvertToBinaryAsString = "";
					delete [] int_arrayWithZerosAndOnesDynamicallyAllocatedMemory;
				}
				break;
			case 'a':
				{
					cout << "Decimal to binary algorithm"                << endl;
					cout << "Enter a number to convert to binary: "      << endl;
					cout << "==========================================="<< endl;
					cout << "Number must be equal to or greater than 0." << endl;
					do 
					{ 
						
						cout << "Please enter the number to convert to binary: " << endl; 
						cin  >> numberToConvertToBinaryAsString;
						
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToNumberErrorMsg,pointerToNumberToConvertToBinaryValue));
					
					
					int * int_arrayWithZerosAndOnesDynamicallyAllocatedMemory = new int[numberToConvertToBinaryAsString.length() + 10];
					numberToConvertToBinaryAsInt                              = stoi(numberToConvertToBinaryAsString);
					do
					{
						
						i++;
						
						int_arrayWithZerosAndOnesDynamicallyAllocatedMemory[i] = numberToConvertToBinaryAsInt % 2;
						numberToConvertToBinaryAsInt                           = numberToConvertToBinaryAsInt / 2;
						
						w = 2 * numberToConvertToBinaryAsInt + int_arrayWithZerosAndOnesDynamicallyAllocatedMemory[i];
						
					}while(w >= 2);
					
					
					cout << "A binary number: ";
					for (; i > 0; i--)
					{
						cout << int_arrayWithZerosAndOnesDynamicallyAllocatedMemory[i];
					}
					cout << endl;
		
		
					i = 0; w = 0, numberToConvertToBinaryAsInt = 0;
					numberToConvertToBinaryAsString = "";
					delete [] int_arrayWithZerosAndOnesDynamicallyAllocatedMemory;
				}
				break;				
			case 'B':
				cout << "Binary to decimal algorithm"                  << endl;
				cout << "Enter a binary number to convert to decimal: "<< endl;
				cout << "============================================="<< endl;
				cout << "Binary number must have zeros and ones only." << endl;
				do 
				{ 
						
					cout << "Please enter the binary number to convert to decimal: " << endl; 
					cin  >> numberToConvertToDecimalAsString;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(numberToDecimal_Error_msg,pointerToNumberToConvertToDecimalValue));
					
					
				for (short i = 0; i < numberToConvertToDecimalAsString.length(); i++)
				{
					if (numberToConvertToDecimalAsString[i] == '1')
						finalDecimalFormOfANumber = finalDecimalFormOfANumber * 2 + 1;
					else
						finalDecimalFormOfANumber = finalDecimalFormOfANumber * 2;
				}
				finalDecimalFormOfANumberVectorSTL_Container.push_back(finalDecimalFormOfANumber);
				it = finalDecimalFormOfANumberVectorSTL_Container.begin();
				
				
				cout << "A decimal number: ";
				for (it; it != finalDecimalFormOfANumberVectorSTL_Container.end(); it++)
				{
					cout << (*it);
				}
				cout << endl;
					
		
				finalDecimalFormOfANumber        = 0;
				numberToConvertToDecimalAsString = "";
				finalDecimalFormOfANumberVectorSTL_Container.clear();
					
				break;
			case 'b':
				cout << "Binary to decimal algorithm"                  << endl;
				cout << "Enter a binary number to convert to decimal: "<< endl;
				cout << "============================================="<< endl;
				cout << "Binary number must have zeros and ones only." << endl;
				do 
				{ 
						
					cout << "Please enter the binary number to convert to decimal: " << endl; 
					cin  >> numberToConvertToDecimalAsString;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(numberToDecimal_Error_msg,pointerToNumberToConvertToDecimalValue));
					
					
				for (short i = 0; i < numberToConvertToDecimalAsString.length(); i++)
				{
					if (numberToConvertToDecimalAsString[i] == '1')
						finalDecimalFormOfANumber = finalDecimalFormOfANumber * 2 + 1;
					else
						finalDecimalFormOfANumber = finalDecimalFormOfANumber * 2;
				}
				finalDecimalFormOfANumberVectorSTL_Container.push_back(finalDecimalFormOfANumber);
				it = finalDecimalFormOfANumberVectorSTL_Container.begin();
				
				
				cout << "A decimal number: ";
				for (it; it != finalDecimalFormOfANumberVectorSTL_Container.end(); it++)
				{
					cout << (*it);
				}
				cout << endl;
					
		
				finalDecimalFormOfANumber        = 0;
				numberToConvertToDecimalAsString = "";
				finalDecimalFormOfANumberVectorSTL_Container.clear();
					
				break;
			case 'C':
				tmpPointer = &i;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'i' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'i' variable:         " + i);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'i' variable: " + *&i);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
				
				
				
				tmpPointer = &w;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'w' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'w' variable:         " + w);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'w' variable: " + *&w);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
			
				
				
				tmpPointer = &numberToConvertToBinaryAsInt;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToBinaryAsInt' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToBinaryAsInt' variable:         " + numberToConvertToBinaryAsInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToBinaryAsInt' variable: " + *&numberToConvertToBinaryAsInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");			



				tmpPointer = &numberToConvertToBinaryAsString;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToBinaryAsString' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToBinaryAsString' variable:         " + numberToConvertToBinaryAsString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToBinaryAsString' variable: " + *&numberToConvertToBinaryAsString);
				tmpPointer = &pointerToNumberToConvertToBinaryValue;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberToConvertToBinaryValue' pointer:  " + address);
				tmpPointer = pointerToNumberToConvertToBinaryValue;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberToConvertToBinaryValue' pointer (address of the variable 'numberToConvertToBinaryAsString'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberToConvertToBinaryValue' pointer (Value of the variable 'numberToConvertToBinaryAsString'): " + *pointerToNumberToConvertToBinaryValue);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");	



				tmpPointer = &pointerToNumberErrorMsg;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberErrorMsg' pointer:                                                  " + address);
				tmpPointer = pointerToNumberErrorMsg;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberErrorMsg' pointer (address of the variable 'number_Error_msg'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberErrorMsg' pointer (Value of the variable 'number_Error_msg'): " + *pointerToNumberErrorMsg);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");	



				tmpPointer = &finalDecimalFormOfANumber;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'finalDecimalFormOfANumber' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'finalDecimalFormOfANumber' variable:         " + finalDecimalFormOfANumber);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'finalDecimalFormOfANumber' variable: " + *&finalDecimalFormOfANumber);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");



				tmpPointer = &numberToConvertToDecimalAsString;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToDecimalAsString' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToDecimalAsString' variable:         " + numberToConvertToDecimalAsString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToDecimalAsString' variable: " + *&numberToConvertToDecimalAsString);
				tmpPointer = &pointerToNumberToConvertToDecimalValue;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);			
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberToConvertToDecimalValue' pointer:  " + address);
				tmpPointer = pointerToNumberToConvertToDecimalValue;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);				
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberToConvertToDecimalValue' pointer (address of the variable 'numberToConvertToDecimalAsString'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberToConvertToDecimalValue' pointer (Value of the variable 'numberToConvertToDecimalAsString'): " + *pointerToNumberToConvertToDecimalValue);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");		 				

				
				
				tmpPointer = &finalDecimalFormOfANumberVectorSTL_Container;
				address    = convertAddress::convertPointerToStringAddress(tmpPointer);	
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'finalDecimalFormOfANumberVectorSTL_Container' vector:       " + address);
				
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'it' iterator:         " + (*it));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'it' iterator: " + *&(*it));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
				
					
							
				itCollectionOfAddresses = collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.begin();
				//	saveDataFromRegisterForm::saveDataFromRegisterForm(pointerToErrorMsg,pointerToIteratorIt,pointerToAllRegisterDataFromFormVectorValue);
					
					
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.clear();	
				break;
			case 'c':
				cout << "Check addresses" << endl;
				break;
			case 'D':
				cout << "Option 4." << endl;
				break;
			case 'd':
				cout << "Option 4." << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInDecimalToBinaryBinaryToDecimal();
		system("cls");
		
	} while(character != 27);
}

#endif
