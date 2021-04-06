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
	
	
	int * tmpPointerInt       = &i;
	string * tmpPointerString = &numberToConvertToBinaryAsString;
	string address            = "";
	
	
	string ** tmpPointerToPointerString               = &pointerToNumberToConvertToDecimalValue;
	vector<int> * tmpPointerToVectorInt               = &finalDecimalFormOfANumberVectorSTL_Container;
	vector<int>::iterator * tmpPointerToIteratorItInt = &it;
	vector<int>::iterator ** tmpPointerToPointerToIteratorItInt = &tmpPointerToIteratorItInt;
	
	
	string textToEncryptionViaCaesarCipher                    = "";
	string textToEncryptionViaCaesarCipher_Error_msg          = "You can do encryption via Caesar cipher only with uppercase letters A - Z. Please try again.";
	string * pointerToTextToEncryptionViaCaesarCipherErrorMsg = &textToEncryptionViaCaesarCipher_Error_msg;
	
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| A - Decimal to binary algorithm                                |" << endl;
		cout << "| B - Binary to decimal algorithm                                |" << endl;
		cout << "| C - Check addresses [First use A and B options]                |" << endl;
		cout << "| D - Caesar cipher [encryption]                                 |" << endl;
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
				tmpPointerInt = &i;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'i' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'i' variable:         " + to_string(i));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'i' variable: " + to_string(*&i));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
				
				
				
				tmpPointerInt = &w;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'w' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'w' variable:         " + to_string(w));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'w' variable: " + to_string(*&w));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
			
				
				
				tmpPointerInt = &numberToConvertToBinaryAsInt;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToBinaryAsInt' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToBinaryAsInt' variable:         " + to_string(numberToConvertToBinaryAsInt));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToBinaryAsInt' variable: " + to_string(*&numberToConvertToBinaryAsInt));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");			



				tmpPointerString = &numberToConvertToBinaryAsString;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToBinaryAsString' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToBinaryAsString' variable:         " + numberToConvertToBinaryAsString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToBinaryAsString' variable: " + *&numberToConvertToBinaryAsString);
				tmpPointerToPointerString = &pointerToNumberToConvertToBinaryValue;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberToConvertToBinaryValue' pointer:  " + address);
				tmpPointerString = pointerToNumberToConvertToBinaryValue;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberToConvertToBinaryValue' pointer (address of the variable 'numberToConvertToBinaryAsString'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberToConvertToBinaryValue' pointer (Value of the variable 'numberToConvertToBinaryAsString'): " + *pointerToNumberToConvertToBinaryValue);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");	



				tmpPointerToPointerString = &pointerToNumberErrorMsg;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberErrorMsg' pointer:                                                  " + address);
				tmpPointerString = pointerToNumberErrorMsg;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberErrorMsg' pointer (address of the variable 'number_Error_msg'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberErrorMsg' pointer (Value of the variable 'number_Error_msg'): " + *pointerToNumberErrorMsg);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");	



				tmpPointerInt = &finalDecimalFormOfANumber;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'finalDecimalFormOfANumber' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'finalDecimalFormOfANumber' variable:         " + to_string(finalDecimalFormOfANumber));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'finalDecimalFormOfANumber' variable: " + to_string(*&finalDecimalFormOfANumber));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");



				tmpPointerString = &numberToConvertToDecimalAsString;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToDecimalAsString' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToDecimalAsString' variable:         " + numberToConvertToDecimalAsString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToDecimalAsString' variable: " + *&numberToConvertToDecimalAsString);
				tmpPointerToPointerString = &pointerToNumberToConvertToDecimalValue;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToPointerString);			
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberToConvertToDecimalValue' pointer:  " + address);
				tmpPointerString = pointerToNumberToConvertToDecimalValue;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);				
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberToConvertToDecimalValue' pointer (address of the variable 'numberToConvertToDecimalAsString'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberToConvertToDecimalValue' pointer (Value of the variable 'numberToConvertToDecimalAsString'): " + *pointerToNumberToConvertToDecimalValue);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");		 				

				
				
				tmpPointerToVectorInt = &finalDecimalFormOfANumberVectorSTL_Container;
				address               = convertAddress::convertPointerToStringAddress(tmpPointerToVectorInt);	
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'finalDecimalFormOfANumberVectorSTL_Container' vector: " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'it' iterator:         " + to_string((*it)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'it' iterator: " + to_string(*&(*it)));
				tmpPointerToIteratorItInt = tmpPointerToIteratorItInt;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToIteratorItInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'tmpPointerToIteratorItInt' pointer (address of the iterator 'it'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'tmpPointerToIteratorItInt' pointer (Value of the iterator 'it'): " + to_string(*&(*(*tmpPointerToIteratorItInt))));
				tmpPointerToIteratorItInt = &it;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToIteratorItInt);	
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'it' iterator: " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
								
				

				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned short int (2 bytes):     " + to_string(sizeof(unsigned short int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type short int (2 bytes):              " + to_string(sizeof(short int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type int (4 bytes):                    " + to_string(sizeof(int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type long int (4 bytes):               " + to_string(sizeof(long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned int (4 bytes):           " + to_string(sizeof(unsigned int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned long int (4 bytes):      " + to_string(sizeof(unsigned long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type long long int (8 bytes):          " + to_string(sizeof(long long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned long long int (8 bytes): " + to_string(sizeof(unsigned long long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type float (4 bytes):                  " + to_string(sizeof(float)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type double (8 bytes):                 " + to_string(sizeof(double)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type long double (16 bytes):           " + to_string(sizeof(long double)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type char (1 byte):                    " + to_string(sizeof(char)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type wchar_t (2 bytes):                " + to_string(sizeof(wchar_t)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type char16_t (2 bytes):               " + to_string(sizeof(char16_t)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type char32_t (4 bytes):               " + to_string(sizeof(char32_t)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type string (8 bytes):                 " + to_string(sizeof(string)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type bool (1 bytes):                   " + to_string(sizeof(bool)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type void (1 bytes):                   " + to_string(sizeof(void)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type NULL (8 bytes):                   " + to_string(sizeof(NULL)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");			
				
				
							
				itCollectionOfAddresses = collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.begin();
				verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToIteratorItCollectionOfAddresses,pointerToCollectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorValue);
					
					
					
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.clear();	
				break;
			case 'c':
				tmpPointerInt = &i;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'i' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'i' variable:         " + to_string(i));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'i' variable: " + to_string(*&i));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
				
				
				
				tmpPointerInt = &w;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'w' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'w' variable:         " + to_string(w));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'w' variable: " + to_string(*&w));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
			
				
				
				tmpPointerInt = &numberToConvertToBinaryAsInt;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToBinaryAsInt' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToBinaryAsInt' variable:         " + to_string(numberToConvertToBinaryAsInt));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToBinaryAsInt' variable: " + to_string(*&numberToConvertToBinaryAsInt));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");			



				tmpPointerString = &numberToConvertToBinaryAsString;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToBinaryAsString' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToBinaryAsString' variable:         " + numberToConvertToBinaryAsString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToBinaryAsString' variable: " + *&numberToConvertToBinaryAsString);
				tmpPointerToPointerString = &pointerToNumberToConvertToBinaryValue;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberToConvertToBinaryValue' pointer:  " + address);
				tmpPointerString = pointerToNumberToConvertToBinaryValue;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberToConvertToBinaryValue' pointer (address of the variable 'numberToConvertToBinaryAsString'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberToConvertToBinaryValue' pointer (Value of the variable 'numberToConvertToBinaryAsString'): " + *pointerToNumberToConvertToBinaryValue);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");	



				tmpPointerToPointerString = &pointerToNumberErrorMsg;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberErrorMsg' pointer:                                                  " + address);
				tmpPointerString = pointerToNumberErrorMsg;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberErrorMsg' pointer (address of the variable 'number_Error_msg'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberErrorMsg' pointer (Value of the variable 'number_Error_msg'): " + *pointerToNumberErrorMsg);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");	



				tmpPointerInt = &finalDecimalFormOfANumber;
				address       = convertAddress::convertPointerToStringAddress(tmpPointerInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'finalDecimalFormOfANumber' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'finalDecimalFormOfANumber' variable:         " + to_string(finalDecimalFormOfANumber));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'finalDecimalFormOfANumber' variable: " + to_string(*&finalDecimalFormOfANumber));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");



				tmpPointerString = &numberToConvertToDecimalAsString;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'numberToConvertToDecimalAsString' variable:       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'numberToConvertToDecimalAsString' variable:         " + numberToConvertToDecimalAsString);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'numberToConvertToDecimalAsString' variable: " + *&numberToConvertToDecimalAsString);
				tmpPointerToPointerString = &pointerToNumberToConvertToDecimalValue;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToPointerString);			
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'pointerToNumberToConvertToDecimalValue' pointer:  " + address);
				tmpPointerString = pointerToNumberToConvertToDecimalValue;
				address          = convertAddress::convertPointerToStringAddress(tmpPointerString);				
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'pointerToNumberToConvertToDecimalValue' pointer (address of the variable 'numberToConvertToDecimalAsString'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'pointerToNumberToConvertToDecimalValue' pointer (Value of the variable 'numberToConvertToDecimalAsString'): " + *pointerToNumberToConvertToDecimalValue);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");		 				

				
				
				tmpPointerToVectorInt = &finalDecimalFormOfANumberVectorSTL_Container;
				address               = convertAddress::convertPointerToStringAddress(tmpPointerToVectorInt);	
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'finalDecimalFormOfANumberVectorSTL_Container' vector: " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'it' iterator:         " + to_string((*it)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'it' iterator: " + to_string(*&(*it)));
				tmpPointerToIteratorItInt = tmpPointerToIteratorItInt;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToIteratorItInt);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Value of 'tmpPointerToIteratorItInt' pointer (address of the iterator 'it'):       " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Dereferencing of 'tmpPointerToIteratorItInt' pointer (Value of the iterator 'it'): " + to_string(*&(*(*tmpPointerToIteratorItInt))));
				tmpPointerToIteratorItInt = &it;
				address                   = convertAddress::convertPointerToStringAddress(tmpPointerToIteratorItInt);	
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("Address of 'it' iterator: " + address);
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");
								
				

				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned short int (2 bytes):     " + to_string(sizeof(unsigned short int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type short int (2 bytes):              " + to_string(sizeof(short int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type int (4 bytes):                    " + to_string(sizeof(int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type long int (4 bytes):               " + to_string(sizeof(long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned int (4 bytes):           " + to_string(sizeof(unsigned int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned long int (4 bytes):      " + to_string(sizeof(unsigned long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type long long int (8 bytes):          " + to_string(sizeof(long long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type unsigned long long int (8 bytes): " + to_string(sizeof(unsigned long long int)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type float (4 bytes):                  " + to_string(sizeof(float)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type double (8 bytes):                 " + to_string(sizeof(double)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type long double (16 bytes):           " + to_string(sizeof(long double)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type char (1 byte):                    " + to_string(sizeof(char)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type wchar_t (2 bytes):                " + to_string(sizeof(wchar_t)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type char16_t (2 bytes):               " + to_string(sizeof(char16_t)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type char32_t (4 bytes):               " + to_string(sizeof(char32_t)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type string (8 bytes):                 " + to_string(sizeof(string)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type bool (1 bytes):                   " + to_string(sizeof(bool)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type void (1 bytes):                   " + to_string(sizeof(void)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("The size of a variable of type NULL (8 bytes):                   " + to_string(sizeof(NULL)));
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.push_back("================================================================================");			
				
				
							
				itCollectionOfAddresses = collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.begin();
				verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToIteratorItCollectionOfAddresses,pointerToCollectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorValue);
					
					
					
				collectionOfAddressesIn_decimalToBinaryBinaryToDecimalHeader_VectorSTL_Container.clear();	
				break;
			case 'D':
				cout << "Caesar cipher algorithm"                                  << endl;
				cout << "Enter a text to encryption via Caesar cipher algorithm: " << endl;
				cout << "========================================================" << endl;
				cout << "The text must contain only the uppercase letters A - Z."  << endl;
				do 
				{ 
						
					cout << "Please enter the text to encryption via Caesar cipher algorithm: " << endl; 
					cin  >> textToEncryptionViaCaesarCipher;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToTextToEncryptionViaCaesarCipherErrorMsg,textToEncryptionViaCaesarCipher));
				
				
				cout << textToEncryptionViaCaesarCipher << endl;
				break;
			case 'd':
				cout << "Caesar cipher." << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInDecimalToBinaryBinaryToDecimal();
		system("cls");
		
	} while(character != 27);
}

#endif
