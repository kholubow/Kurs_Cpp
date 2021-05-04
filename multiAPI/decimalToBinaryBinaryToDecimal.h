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
	
	
	string textToDecryptionViaCaesarCipher                    = "";
	string textToDecryptionViaCaesarCipher_Error_msg          = "You can do decryption via Caesar cipher only with uppercase letters A - Z. Please try again.";
	string * pointerToTextToDecryptionViaCaesarCipherErrorMsg = &textToDecryptionViaCaesarCipher_Error_msg;
	
	
	int k = 0;
	int arrayWithNumbersToSortViaBubbleSortAlgorithm[9];
	string numberToArrayToSortViaBubbleSortAlgorithm            = "";
	string bubbleSortAlgorithm_Error_msg                        = "You can do sort via bubble sort only with the numbers. Please try again.";
	string * pointerToNumberToArrayToSortViaBubbleSortAlgorithm = &numberToArrayToSortViaBubbleSortAlgorithm;
	string * pointerToBubbleSortAlgorithmErrorMsg               = &bubbleSortAlgorithm_Error_msg;
	int * pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm = arrayWithNumbersToSortViaBubbleSortAlgorithm;
	
	
	int k2 = 0;
	int arrayWithNumbersToFindMinMaxValuesViaAlgorithm[9];
	string numberToArrayToFindMinMaxValuesViaAlgorithm            = "";
	string findMinMaxValuesInArrayAlgorithm_Error_msg             = "You can find min/max value via algorithm only with the numbers. Please try again.";
	string * pointerToNumberToArrayToFindMinMaxValuesViaAlgorithm = &numberToArrayToFindMinMaxValuesViaAlgorithm;
	string * pointerToFindMinMaxValuesInArrayAlgorithmErrorMsg    = &findMinMaxValuesInArrayAlgorithm_Error_msg;
	int * pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm = arrayWithNumbersToFindMinMaxValuesViaAlgorithm;
	
	
	string textToConvertFromRomanNumbersToArabicNumbers            = "";
	string textToConvertFromRomanNumbersToArabicNumbers_Error_msg  = "You can convert from roman numbers to arabic numbers only 'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'. The roman numeral can contain also 'V_' = 5 000, 'X_' = 10 000, 'L_' = 50 000, 'C_' = 100 000, 'D_' = 500 000, 'M_' = 1 000 000. Please try again.";
	
	
	int sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt               = 0;
	int sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt               = 0;
	string sizeXForDynamicAllocated2DArrayInMultiplicationTableOption                 = "";
	string sizeYForDynamicAllocated2DArrayInMultiplicationTableOption                 = "";
	string sizeXForDA2DAInMTOptionValue_Error_msg                                     = "You can set the size X for the multiplication table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA2DAInMTOptionValue_Error_msg                                     = "You can set the size Y for the multiplication table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionValue = &sizeXForDynamicAllocated2DArrayInMultiplicationTableOption;
	string * pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionValue = &sizeYForDynamicAllocated2DArrayInMultiplicationTableOption;
	string * pointerToSizeXForDA2DAInMTOptionValueErrorMsg                            = &sizeXForDA2DAInMTOptionValue_Error_msg;
	string * pointerToSizeYForDA2DAInMTOptionValueErrorMsg                            = &sizeYForDA2DAInMTOptionValue_Error_msg;
	int * pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt    = &sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt;
	int * pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt    = &sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt;
	
	
	int sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt               = 0;
	int sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt               = 0;
	string sizeXForDynamicAllocated2DArrayInExponentiationTableOption                 = "";
	string sizeYForDynamicAllocated2DArrayInExponentiationTableOption                 = "";
	string sizeXForDA2DAInETOptionValue_Error_msg                                     = "You can set the size X for the exponentiation table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA2DAInETOptionValue_Error_msg                                     = "You can set the size Y for the exponentiation table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDynamicAllocated2DArrayInExponentiationTableOptionValue = &sizeXForDynamicAllocated2DArrayInExponentiationTableOption;
	string * pointerToSizeYForDynamicAllocated2DArrayInExponentiationTableOptionValue = &sizeYForDynamicAllocated2DArrayInExponentiationTableOption;
	string * pointerToSizeXForDA2DAInETOptionValueErrorMsg                            = &sizeXForDA2DAInETOptionValue_Error_msg;
	string * pointerToSizeYForDA2DAInETOptionValueErrorMsg                            = &sizeYForDA2DAInETOptionValue_Error_msg;
	
		
	int sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt               = 0;
	int sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt               = 0;	
	string sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOption                 = "";
	string sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOption                 = "";
	string sizeXForDA2DAInAROADOptionValue_Error_msg                               = "You can set the size X for the root table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA2DAInAROADOptionValue_Error_msg                               = "You can set the size Y for the root table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionValue = &sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOption;
	string * pointerToSizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionValue = &sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOption;
	string * pointerToSizeXForDA2DAInAROADOptionValueErrorMsg                      = &sizeXForDA2DAInAROADOptionValue_Error_msg;
	string * pointerToSizeYForDA2DAInAROADOptionValueErrorMsg                      = &sizeYForDA2DAInAROADOptionValue_Error_msg;
	int * pointerToSizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt    = &sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt;
	
	
	int sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt               = 0;
	int sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt               = 0;	
	string sizeXForDynamicAllocated2DArrayInLogarithmicTableOption                 = "";
	string sizeYForDynamicAllocated2DArrayInLogarithmicTableOption                 = "";
	string sizeXForDA2DAInLTOptionValue_Error_msg                                  = "You can set the size X for the logarithmic table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA2DAInLTOptionValue_Error_msg                                  = "You can set the size Y for the logarithmic table 2D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDynamicAllocated2DArrayInLogarithmicTableOptionValue = &sizeXForDynamicAllocated2DArrayInLogarithmicTableOption;
	string * pointerToSizeYForDynamicAllocated2DArrayInLogarithmicTableOptionValue = &sizeYForDynamicAllocated2DArrayInLogarithmicTableOption;
	string * pointerToSizeXForDA2DAInLTOptionValueErrorMsg                         = &sizeXForDA2DAInLTOptionValue_Error_msg;
	string * pointerToSizeYForDA2DAInLTOptionValueErrorMsg                         = &sizeYForDA2DAInLTOptionValue_Error_msg;
	int * pointerToSizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt    = &sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt;
	
	
	int sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt               = 0;
	int sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt               = 0;	
	int sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt               = 0;	
	string sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption                 = "";
	string sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption                 = "";
	string sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption                 = "";
	string sizeXForDA3DAInAROADWTROTRMBZOptionValue_Error_msg                                                         = "You can set the size X for the root with the result of the multiplication table 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA3DAInAROADWTROTRMBZOptionValue_Error_msg                                                         = "You can set the size Y for the root with the result of the multiplication table 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeZForDA3DAInAROADWTROTRMBZOptionValue_Error_msg                                                         = "You can set the size Z for the root with the result of the multiplication table 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDA3DAInAROADWTROTRMBZOptionValueErrorMsg                                                = &sizeXForDA3DAInAROADWTROTRMBZOptionValue_Error_msg;
	string * pointerToSizeYForDA3DAInAROADWTROTRMBZOptionValueErrorMsg                                                = &sizeYForDA3DAInAROADWTROTRMBZOptionValue_Error_msg;
	string * pointerToSizeZForDA3DAInAROADWTROTRMBZOptionValueErrorMsg                                                = &sizeZForDA3DAInAROADWTROTRMBZOptionValue_Error_msg;
	string * pointerToSizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue = &sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
	string * pointerToSizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue = &sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
	string * pointerToSizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue = &sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
	int * pointerToSizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt    = &sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt;
	int * pointerToSizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt	  = &sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt;
	int * pointerToSizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt	  = &sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt;
	
	
	int sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt               = 0;
	int sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt               = 0;	
	int sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt               = 0;	
	string sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption                 = "";
	string sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption                 = "";
	string sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption                 = "";
	string sizeXForDA3DAInMTWVDBTNZOptionValue_Error_msg                                                           = "You can set the size X for the multiplication table with values divided by the number 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA3DAInMTWVDBTNZOptionValue_Error_msg                                                           = "You can set the size Y for the multiplication table with values divided by the number 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeZForDA3DAInMTWVDBTNZOptionValue_Error_msg                                                           = "You can set the size Z for the multiplication table with values divided by the number 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDA3DAInMTWVDBTNZOptionValueErrorMsg                                                  = &sizeXForDA3DAInMTWVDBTNZOptionValue_Error_msg;
	string * pointerToSizeYForDA3DAInMTWVDBTNZOptionValueErrorMsg                                                  = &sizeYForDA3DAInMTWVDBTNZOptionValue_Error_msg;
	string * pointerToSizeZForDA3DAInMTWVDBTNZOptionValueErrorMsg                                                  = &sizeZForDA3DAInMTWVDBTNZOptionValue_Error_msg;
	string * pointerToSizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue = &sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
	string * pointerToSizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue = &sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
	string * pointerToSizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue = &sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
	
	
	int sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt               = 0;
	int sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt               = 0;	
	int sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt               = 0;	
	string sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption                 = "";
	string sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption                 = "";
	string sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption                 = "";
	string sizeXForDA3DAInLTWVDBTNZOptionValue_Error_msg                                                        = "You can set the size X for the logarithmic table with values divided by the number 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA3DAInLTWVDBTNZOptionValue_Error_msg                                                        = "You can set the size Y for the logarithmic table with values divided by the number 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeZForDA3DAInLTWVDBTNZOptionValue_Error_msg                                                        = "You can set the size Z for the logarithmic table with values divided by the number 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDA3DAInLTWVDBTNZOptionValueErrorMsg                                               = &sizeXForDA3DAInLTWVDBTNZOptionValue_Error_msg;
	string * pointerToSizeYForDA3DAInLTWVDBTNZOptionValueErrorMsg                                               = &sizeYForDA3DAInLTWVDBTNZOptionValue_Error_msg;
	string * pointerToSizeZForDA3DAInLTWVDBTNZOptionValueErrorMsg                                               = &sizeZForDA3DAInLTWVDBTNZOptionValue_Error_msg;
	string * pointerToSizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue = &sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
	string * pointerToSizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue = &sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
	string * pointerToSizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue = &sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
	int * pointerToSizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt    = &sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt;
	int * pointerToSizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt    = &sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt;		

	
	int sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt               = 0;
	int sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt               = 0;	
	int sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt               = 0;	
	string sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption                 = "";
	string sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption                 = "";
	string sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption                 = "";
	string sizeXForDA3DAInETWVMBZOptionValue_Error_msg                                                       = "You can set the size X for the exponentiation table with values multiplied by 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeYForDA3DAInETWVMBZOptionValue_Error_msg                                                       = "You can set the size Y for the exponentiation table with values multiplied by 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string sizeZForDA3DAInETWVMBZOptionValue_Error_msg                                                       = "You can set the size Z for the exponentiation table with values multiplied by 'Z', 3D array only with the numbers which are equal to or greater than 0. Please try again.";
	string * pointerToSizeXForDA3DAInETWVMBZOptionValueErrorMsg                                              = &sizeXForDA3DAInETWVMBZOptionValue_Error_msg;
	string * pointerToSizeYForDA3DAInETWVMBZOptionValueErrorMsg                                              = &sizeYForDA3DAInETWVMBZOptionValue_Error_msg;
	string * pointerToSizeZForDA3DAInETWVMBZOptionValueErrorMsg                                              = &sizeZForDA3DAInETWVMBZOptionValue_Error_msg;
	string * pointerToSizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue = &sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
	string * pointerToSizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue = &sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
	string * pointerToSizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue = &sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
	int * pointerToSizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt    = &sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt;	
	
	
	do
	{
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "| A - Decimal to binary algorithm                                        |" << endl;
		cout << "| B - Binary to decimal algorithm                                        |" << endl;
		cout << "| C - Check addresses [First use A and B options]                        |" << endl;
		cout << "| D - Caesar cipher [encryption]                                         |" << endl;
		cout << "| E - Caesar cipher [decryption]                                         |" << endl;
		cout << "| F - Bubble sort                                                        |" << endl;
		cout << "| G - Find min/max values algorithm                                      |" << endl;
		cout << "| H - Roman numerals                                                     |" << endl;
		cout << "| I - Multiplication table                                               |" << endl;
		cout << "| J - Exponentiation table                                               |" << endl;
		cout << "| K - A root of any degree                                               |" << endl;
		cout << "| L - Logarithmic table                                                  |" << endl;
		cout << "| M - A root of any degree with the result of the root multiplied by 'Z' |" << endl;
		cout << "| N - Multiplication table with values divided by the number 'Z'         |" << endl;
		cout << "| O - Logarithmic table with values divided by the number 'Z'            |" << endl;
		cout << "| P - Exponentiation table with values multiplied by 'Z'                 |" << endl;
		cout << "| ESC - Exit                                                             |" << endl;
		cout << "--------------------------------------------------------------------------" << endl;	
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
				
				
				cout << "Encrypted data: "     << encryptionAlgorithms::doEncryptionTextDataViaCaesarCipherAlgorithm(textToEncryptionViaCaesarCipher) << endl;
				cout << "===============================================================================" << endl;
				cout << "Original text data: " << encryptionAlgorithms::doDecryptionTextDataViaCaesarCipherAlgorithm(encryptionAlgorithms::doEncryptionTextDataViaCaesarCipherAlgorithm(textToEncryptionViaCaesarCipher)) << endl;
				break;
			case 'd':
				cout << "Caesar cipher algorithm"                                  << endl;
				cout << "Enter a text to encryption via Caesar cipher algorithm: " << endl;
				cout << "========================================================" << endl;
				cout << "The text must contain only the uppercase letters A - Z."  << endl;
				do 
				{ 
						
					cout << "Please enter the text to encryption via Caesar cipher algorithm: " << endl; 
					cin  >> textToEncryptionViaCaesarCipher;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToTextToEncryptionViaCaesarCipherErrorMsg,textToEncryptionViaCaesarCipher));
				
				
				cout << "Encrypted data: "     << encryptionAlgorithms::doEncryptionTextDataViaCaesarCipherAlgorithm(textToEncryptionViaCaesarCipher) << endl;
				cout << "===============================================================================" << endl;
				cout << "Original text data: " << encryptionAlgorithms::doDecryptionTextDataViaCaesarCipherAlgorithm(encryptionAlgorithms::doEncryptionTextDataViaCaesarCipherAlgorithm(textToEncryptionViaCaesarCipher)) << endl;
				break;
			case 'E':
				cout << "Caesar cipher algorithm"                                  << endl;
				cout << "Enter a text to decryption via Caesar cipher algorithm: " << endl;
				cout << "========================================================" << endl;
				cout << "The text must contain only the uppercase letters A - Z."  << endl;
				do 
				{ 
						
					cout << "Please enter the text to decryption via Caesar cipher algorithm: " << endl; 
					cin  >> textToDecryptionViaCaesarCipher;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToTextToDecryptionViaCaesarCipherErrorMsg,textToDecryptionViaCaesarCipher));
				
				
				cout << "Decrypted data: "     << encryptionAlgorithms::doDecryptionTextDataViaCaesarCipherAlgorithm(textToDecryptionViaCaesarCipher) << endl;
				cout << "===============================================================================" << endl;
				cout << "Original text data: " << encryptionAlgorithms::doEncryptionTextDataViaCaesarCipherAlgorithm(encryptionAlgorithms::doDecryptionTextDataViaCaesarCipherAlgorithm(textToDecryptionViaCaesarCipher)) << endl;
				break;
			case 'e':
				cout << "Caesar cipher algorithm"                                  << endl;
				cout << "Enter a text to decryption via Caesar cipher algorithm: " << endl;
				cout << "========================================================" << endl;
				cout << "The text must contain only the uppercase letters A - Z."  << endl;
				do 
				{ 
						
					cout << "Please enter the text to decryption via Caesar cipher algorithm: " << endl; 
					cin  >> textToDecryptionViaCaesarCipher;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToTextToDecryptionViaCaesarCipherErrorMsg,textToDecryptionViaCaesarCipher));
				
				
				cout << "Decrypted data: "     << encryptionAlgorithms::doDecryptionTextDataViaCaesarCipherAlgorithm(textToDecryptionViaCaesarCipher) << endl;
				cout << "===============================================================================" << endl;
				cout << "Original text data: " << encryptionAlgorithms::doEncryptionTextDataViaCaesarCipherAlgorithm(encryptionAlgorithms::doDecryptionTextDataViaCaesarCipherAlgorithm(textToDecryptionViaCaesarCipher)) << endl;
				break;
			case 'F':
				cout << "Bubble sort algorithm with steps"                    << endl;
				cout << "Enter a numbers to sort via bubble sort algorithm: " << endl;
				cout << "==========================================="         << endl;
				cout << "Numbers must be equal to or greater than 0."         << endl;
				cout << "You have to enter 10 numbers."                       << endl;
				k = 0;
				do
				{


					cout << "\n\nYou are trying to enter a number: " << (k + 1) << endl;
					do 
					{ 
						
						cout << "Please enter the number to sort via bubble sort: " << endl; 
						cin  >> numberToArrayToSortViaBubbleSortAlgorithm;
						
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToBubbleSortAlgorithmErrorMsg,pointerToNumberToArrayToSortViaBubbleSortAlgorithm));
					
					arrayWithNumbersToSortViaBubbleSortAlgorithm[k] = stoi(numberToArrayToSortViaBubbleSortAlgorithm);
					k++;
					
			
				}while(k < 10);
				
				
				bubbleSortAlgorithms::exerciseWithVector(5);
					
				
				cout << "The state of the array before sorting: " << endl;
				bubbleSortAlgorithms::showTheCurrentStateOfTheArray(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
				cout << endl;
				
				
				bubbleSortAlgorithms::sortArrayValuesViaBubbleSortAlgorithm(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
				
				
				cout << "The state of the array after sorting: " << endl;
				bubbleSortAlgorithms::showTheCurrentStateOfTheArray(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
				cout << endl;
				break;
			case 'f':
				cout << "Bubble sort algorithm with steps"                    << endl;
				cout << "Enter a numbers to sort via bubble sort algorithm: " << endl;
				cout << "==========================================="         << endl;
				cout << "Numbers must be equal to or greater than 0."         << endl;
				cout << "You have to enter 10 numbers."                       << endl;
				k = 0;
				do
				{


					cout << "\n\nYou are trying to enter a number: " << (k + 1) << endl;
					do 
					{ 
						
						cout << "Please enter the number to sort via bubble sort: " << endl; 
						cin  >> numberToArrayToSortViaBubbleSortAlgorithm;
						
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToBubbleSortAlgorithmErrorMsg,pointerToNumberToArrayToSortViaBubbleSortAlgorithm));
					
					arrayWithNumbersToSortViaBubbleSortAlgorithm[k] = stoi(numberToArrayToSortViaBubbleSortAlgorithm);
					k++;
					
			
				}while(k < 10);
				
				
				bubbleSortAlgorithms::exerciseWithVector(5);
					
				
				cout << "The state of the array before sorting: " << endl;
				bubbleSortAlgorithms::showTheCurrentStateOfTheArray(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
				cout << endl;
				
				
				bubbleSortAlgorithms::sortArrayValuesViaBubbleSortAlgorithm(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
				
				
				cout << "The state of the array after sorting: " << endl;
				bubbleSortAlgorithms::showTheCurrentStateOfTheArray(pointerToArrayWithNumbersToSortViaBubbleSortAlgorithm);
				cout << endl;
				break;
			case 'G':
				cout << "Find min/max values in array algorithm"                 << endl;
				cout << "Enter a numbers to find min/max values via algorithm: " << endl;
				cout << "==========================================="            << endl;
				cout << "Numbers must be equal to or greater than 0."            << endl;
				cout << "You have to enter 10 numbers."                          << endl;
				k2 = 0;
				do
				{


					cout << "\n\nYou are trying to enter a number: " << (k2 + 1) << endl;
					do 
					{ 
						
						cout << "Please enter the number to find min/max values via algorithm: " << endl; 
						cin  >> numberToArrayToFindMinMaxValuesViaAlgorithm;
						
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToFindMinMaxValuesInArrayAlgorithmErrorMsg,pointerToNumberToArrayToFindMinMaxValuesViaAlgorithm));
					
					arrayWithNumbersToFindMinMaxValuesViaAlgorithm[k2] = stoi(numberToArrayToFindMinMaxValuesViaAlgorithm);
					k2++;
					
			
				}while(k2 < 10);
				
				
				cout << "Minimum value in array is: " << to_string(findMinMaxValuesInArray::findMinValueInArray(pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm,0)) << endl;
				cout << "Maximum value in array is: " << to_string(findMinMaxValuesInArray::findMaxValueInArray(pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm,0)) << endl;
				
				
				break;
			case 'g':
				cout << "Find min/max values in array algorithm"                 << endl;
				cout << "Enter a numbers to find min/max values via algorithm: " << endl;
				cout << "==========================================="            << endl;
				cout << "Numbers must be equal to or greater than 0."            << endl;
				cout << "You have to enter 10 numbers."                          << endl;
				k2 = 0;
				do
				{


					cout << "\n\nYou are trying to enter a number: " << (k2 + 1) << endl;
					do 
					{ 
						
						cout << "Please enter the number to find min/max values via algorithm: " << endl; 
						cin  >> numberToArrayToFindMinMaxValuesViaAlgorithm;
						
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToFindMinMaxValuesInArrayAlgorithmErrorMsg,pointerToNumberToArrayToFindMinMaxValuesViaAlgorithm));
					
					arrayWithNumbersToFindMinMaxValuesViaAlgorithm[k2] = stoi(numberToArrayToFindMinMaxValuesViaAlgorithm);
					k2++;
					
			
				}while(k2 < 10);
				
				
				cout << "Minimum value in array is: " << to_string(findMinMaxValuesInArray::findMinValueInArray(pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm,0)) << endl;
				cout << "Maximum value in array is: " << to_string(findMinMaxValuesInArray::findMaxValueInArray(pointerToArrayWithNumbersToFindMinMaxValuesViaAlgorithm,0)) << endl;
				
				
				break;
			case 'H':
				cout << "Convert from roman numbers to arabic numbers algorithm"                                                                            << endl;
				cout << "Enter a roman numeral to convert to arabic number via algorithm: "                                                                 << endl;
				cout << "========================================================"                                                                          << endl;
				cout << "The roman numeral must contain only 'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'."                        << endl;
				cout << "The roman numeral can contain also 'V_' = 5 000, 'X_' = 10 000, 'L_' = 50 000, 'C_' = 100 000, 'D_' = 500 000, 'M_' = 1 000 000."  << endl;
				do 
				{ 
						
					cout << "Please enter the roman numeral to convert to arabic number via algorithm: " << endl; 
					cin  >> textToConvertFromRomanNumbersToArabicNumbers;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(textToConvertFromRomanNumbersToArabicNumbers_Error_msg,textToConvertFromRomanNumbersToArabicNumbers));
				
				
				cout << "The roman number: " << textToConvertFromRomanNumbersToArabicNumbers << " converted to arabic number is equal: ";
				verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(textToConvertFromRomanNumbersToArabicNumbers);
				
				
				break;
			case 'h':
				cout << "Convert from roman numbers to arabic numbers algorithm"                                                                            << endl;
				cout << "Enter a roman numeral to convert to arabic number via algorithm: "                                                                 << endl;
				cout << "========================================================"                                                                          << endl;
				cout << "The roman numeral must contain only 'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'."                        << endl;
				cout << "The roman numeral can contain also 'V_' = 5 000, 'X_' = 10 000, 'L_' = 50 000, 'C_' = 100 000, 'D_' = 500 000, 'M_' = 1 000 000."  << endl;
				do 
				{ 
						
					cout << "Please enter the roman numeral to convert to arabic number via algorithm: " << endl; 
					cin  >> textToConvertFromRomanNumbersToArabicNumbers;
						
				}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(textToConvertFromRomanNumbersToArabicNumbers_Error_msg,textToConvertFromRomanNumbersToArabicNumbers));
				
				
				cout << "The roman number: " << textToConvertFromRomanNumbersToArabicNumbers << " converted to arabic number is equal: ";
				verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(textToConvertFromRomanNumbersToArabicNumbers);
				
				
				break;
			case 'I':
				{
					cout << "Multiplication table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"          << endl;
					cout << "The number for size must be equal to or greater than 0."                           << endl;
					cout << "Multiplication table using dynamic allocated, 2d array via using 'new' structure." << endl;
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the multiplication table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInMultiplicationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInMTOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the multiplication table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInMultiplicationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInMTOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionValue));			
					
					
					sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInMultiplicationTableOption);		
					sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInMultiplicationTableOption);	
					sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt++;
					
					
					int ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt,pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt);	
	
	
					for (int i = 0; i < (sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++i)
					{
						for (int j = 0; j < (sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++j)
						{
							if (pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] != 0)
							{
								cout.width(6);
								cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];
							}
						}
						cout << endl;
					}	
					
					
					for(int i = 0; i < (sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;			
				}
				break;
			case 'i':
				{
					cout << "Multiplication table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"          << endl;
					cout << "The number for size must be equal to or greater than 0."                           << endl;
					cout << "Multiplication table using dynamic allocated, 2d array via using 'new' structure." << endl;
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the multiplication table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInMultiplicationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInMTOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the multiplication table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInMultiplicationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInMTOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionValue));			
					
					
					sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInMultiplicationTableOption);		
					sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInMultiplicationTableOption);	
					sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt++;
					
					
					int ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt,pointerToSizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt);	
	
	
					for (int i = 0; i < (sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++i)
					{
						for (int j = 0; j < (sizeXForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++j)
						{
							if (pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] != 0)
							{
								cout.width(6);
								cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];
							}
						}
						cout << endl;
					}	
					
					
					for(int i = 0; i < (sizeYForDynamicAllocated2DArrayInMultiplicationTableOptionAsInt); ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;			
				}
				break;
			case 'J':
				{
					cout << "Exponentiation table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"          << endl;
					cout << "The number for size must be equal to or greater than 0."                           << endl;
					cout << "Exponentiation table using dynamic allocated, 2d array via using 'new' structure." << endl;
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the exponentiation table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInExponentiationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInETOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInExponentiationTableOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the exponentiation table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInExponentiationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInETOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInExponentiationTableOptionValue));
					
					
					sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInExponentiationTableOption);		
					sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInExponentiationTableOption);	
					sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt++;	
					
					
					long long int ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt,sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt);	
					
					
					cout << "base^exponent. base = x, exponent = y." << endl;
					cout << "base = col, exponent = row."            << endl;
					for (int j = 0; j < sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++j)
					{
						if (j != 0)
						{
							cout.width(14);
							cout << j << "^...";							
						}
						else
						{
							cout.width(14);
							cout << " ";
						}
					}
					cout << endl;
					
					
					for (int i = 0; i < sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++j)
						{
							if (j == 0)
								pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] = i;
							cout.width(18);
							cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];			
						}
						cout << endl;
					}
					
					
					for(int i = 0; i < sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;					
				}
				break;
			case 'j':
				{
					cout << "Exponentiation table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"          << endl;
					cout << "The number for size must be equal to or greater than 0."                           << endl;
					cout << "Exponentiation table using dynamic allocated, 2d array via using 'new' structure." << endl;
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the exponentiation table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInExponentiationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInETOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInExponentiationTableOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the exponentiation table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInExponentiationTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInETOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInExponentiationTableOptionValue));
					
					
					sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInExponentiationTableOption);		
					sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInExponentiationTableOption);	
					sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt++;	
					
					
					long long int ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt,sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt);	
					
					
					cout << "base^exponent. base = x, exponent = y." << endl;
					cout << "base = col, exponent = row."            << endl;
					for (int j = 0; j < sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++j)
					{
						if (j != 0)
						{
							cout.width(14);
							cout << j << "^...";							
						}
						else
						{
							cout.width(14);
							cout << " ";
						}
					}
					cout << endl;
					
					
					for (int i = 0; i < sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++j)
						{
							if (j == 0)
								pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] = i;
							cout.width(18);
							cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];			
						}
						cout << endl;
					}
					
					
					for(int i = 0; i < sizeYForDynamicAllocated2DArrayInExponentiationTableOptionAsInt; ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;					
				}
				break;
			case 'K':
				{
					cout << "Root table with setable dynamic allocated memory size by user"            << endl;
					cout << "========================================================================" << endl;
					cout << "The number for size must be equal to or greater than 0."                  << endl;
					cout << "Root table using dynamic allocated, 2d array via using 'new' structure."  << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the root table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInAROADOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the root table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInAROADOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionValue));
					
					
					sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOption);		
					sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOption);	
					sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt++;	
					
					
					long double ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt,sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt);	
					
					
					cout << "root = x,   of degree = y."   << endl;
					cout << "root = col, of degree = row." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++j)
					{
						if (j != 0)
						{
							cout.width(17);
							cout << "root of " << j;							
						}
						else
						{
							cout.width(17);
							cout << " ";
						}
					}
					cout << endl;
					
					
					for (int i = 0; i < sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++j)
						{
							if (j == 0)
								pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] = i;
							if (isinf(pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j]))
							{
								cout.width(18);
								cout << "divided by 0";
							}
							else
							{
								cout.width(18);
								cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];			
							}		
						}
						cout << endl;
					}
					
					
					for(int i = 0; i < sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;						
				}
				break;
			case 'k':
				{
					cout << "Root table with setable dynamic allocated memory size by user"            << endl;
					cout << "========================================================================" << endl;
					cout << "The number for size must be equal to or greater than 0."                  << endl;
					cout << "Root table using dynamic allocated, 2d array via using 'new' structure."  << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the root table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInAROADOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the root table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInAROADOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionValue));
					
					
					sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOption);		
					sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOption);	
					sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt++;	
					
					
					long double ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt,sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt);	
					
					
					cout << "root = x,   of degree = y."   << endl;
					cout << "root = col, of degree = row." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++j)
					{
						if (j != 0)
						{
							cout.width(17);
							cout << "root of " << j;							
						}
						else
						{
							cout.width(17);
							cout << " ";
						}
					}
					cout << endl;
					
					
					for (int i = 0; i < sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++j)
						{
							if (j == 0)
								pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] = i;
							if (isinf(pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j]))
							{
								cout.width(18);
								cout << "divided by 0";
							}
							else
							{
								cout.width(18);
								cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];			
							}		
						}
						cout << endl;
					}
					
					
					for(int i = 0; i < sizeYForDynamicAllocated2DArrayInARootOfAnyDegreeOptionAsInt; ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;						
				}
				break;	
			case 'L':
				{
					cout << "logarithmic table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"       << endl;
					cout << "The number for size must be equal to or greater than 0."                        << endl;
					cout << "logarithmic table using dynamic allocated, 2d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the logarithmic table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInLogarithmicTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInLTOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInLogarithmicTableOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the logarithmic table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInLogarithmicTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInLTOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInLogarithmicTableOptionValue));
					
					
					sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInLogarithmicTableOption);		
					sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInLogarithmicTableOption);	
					sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt++;	
					
					
					long double ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt,pointerToSizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt);	
					
					
					cout << "log of = x,   to base = y."   << endl;
					cout << "log of = col, to base = row." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++j)
					{
						if (j != 0)
						{
							cout.width(17);
							cout << "log of " << j;							
						}
						else
						{
							cout.width(17);
							cout << " ";
						}
					}
					cout << endl;
					
					
					for (int i = 0; i < sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++j)
						{
							if (j == 0)
								pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] = i;
							if (isinf(pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j]))
							{
								cout.width(18);
								cout << "divided by 0";
							}
							else if (isnan(pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j]))
							{
								cout.width(18);
								cout << "not a number";								
							}
							else
							{
								cout.width(18);
								cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];			
							}						
						}
						cout << endl;
					}
					
					
					for(int i = 0; i < sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;						
				}
				break;	
			case 'l':
				{
					cout << "logarithmic table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"       << endl;
					cout << "The number for size must be equal to or greater than 0."                        << endl;
					cout << "logarithmic table using dynamic allocated, 2d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the logarithmic table array: " << endl; 
						cin  >> sizeXForDynamicAllocated2DArrayInLogarithmicTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA2DAInLTOptionValueErrorMsg,pointerToSizeXForDynamicAllocated2DArrayInLogarithmicTableOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the logarithmic table array: " << endl; 
						cin  >> sizeYForDynamicAllocated2DArrayInLogarithmicTableOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA2DAInLTOptionValueErrorMsg,pointerToSizeYForDynamicAllocated2DArrayInLogarithmicTableOptionValue));
					
					
					sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt = stoi(sizeXForDynamicAllocated2DArrayInLogarithmicTableOption);		
					sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt = stoi(sizeYForDynamicAllocated2DArrayInLogarithmicTableOption);	
					sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt++;
					sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt++;	
					
					
					long double ** pointerToPointerTo_2DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt,pointerToSizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt);	
					
					
					cout << "log of = x,   to base = y."   << endl;
					cout << "log of = col, to base = row." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++j)
					{
						if (j != 0)
						{
							cout.width(17);
							cout << "log of " << j;							
						}
						else
						{
							cout.width(17);
							cout << " ";
						}
					}
					cout << endl;
					
					
					for (int i = 0; i < sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++j)
						{
							if (j == 0)
								pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j] = i;
							if (isinf(pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j]))
							{
								cout.width(18);
								cout << "divided by 0";
							}
							else if (isnan(pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j]))
							{
								cout.width(18);
								cout << "not a number";								
							}
							else
							{
								cout.width(18);
								cout << pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i][j];			
							}						
						}
						cout << endl;
					}
					
					
					for(int i = 0; i < sizeYForDynamicAllocated2DArrayInLogarithmicTableOptionAsInt; ++i) {
						delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory[i];		
					}			
					delete [] pointerToPointerTo_2DArrayWithDynamicAllocatedMemory;						
				}
				break;
			case 'M':
				{
					cout << "Root with the result of the multiplication table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                      << endl;
					cout << "The number for size must be equal to or greater than 0."                                                       << endl;
					cout << "Root with the result of the multiplication table using dynamic allocated, 3d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the root with the result of the multiplication array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInAROADWTROTRMBZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the root with the result of the multiplication array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInAROADWTROTRMBZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the root with the result of the multiplication array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInAROADWTROTRMBZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue));		
					
					
					sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption);		
					sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption);	
					sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption);
					sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt++;	
					
					
					long double *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt,pointerToSizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt,pointerToSizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt);	
					
					
					cout << "root = x,   of degree = y."          << endl;
					cout << "root = col, of degree = row."        << endl;
					cout << "A root of any degree multiplied by " << sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "degree ";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << "root of " << j;							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;	
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  multiplier " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "x" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;			
				}
				break;
			case 'm':
				{
					cout << "Root with the result of the multiplication table with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                      << endl;
					cout << "The number for size must be equal to or greater than 0."                                                       << endl;
					cout << "Root with the result of the multiplication table using dynamic allocated, 3d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the root with the result of the multiplication array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInAROADWTROTRMBZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the root with the result of the multiplication array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInAROADWTROTRMBZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the root with the result of the multiplication array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInAROADWTROTRMBZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionValue));		
					
					
					sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption);		
					sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption);	
					sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption);
					sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt++;	
					
					
					long double *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt,pointerToSizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt,pointerToSizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt);	
					
					
					cout << "root = x,   of degree = y."          << endl;
					cout << "root = col, of degree = row."        << endl;
					cout << "A root of any degree multiplied by " << sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOption << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "degree ";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << "root of " << j;							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;	
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  multiplier " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "x" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInARootOfAnyDegreeWithTheResultOfTheRootMultipliedByZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;			
				}
				break;
			case 'N':
				{
					cout << "Multiplication table with values divided by the number 'Z' with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                                << endl;
					cout << "The number for size must be equal to or greater than 0."                                                                 << endl;
					cout << "Multiplication table with values divided by the number 'Z' using dynamic allocated, 3d array via using 'new' structure." << endl;		
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the multiplication table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInMTWVDBTNZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the multiplication table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInMTWVDBTNZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the multiplication table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInMTWVDBTNZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue));
					
					
					sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption);		
					sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption);	
					sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption);
					sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt++;
					
					
					long double *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt,sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt,sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt);
					
					
					cout << "Multiplication table with values divided by " << (sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt - 1) << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "x*y ";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << "x =  " << j;							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  divided by " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "/" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;	
				}
				break;
			case 'n':
				{
					cout << "Multiplication table with values divided by the number 'Z' with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                                << endl;
					cout << "The number for size must be equal to or greater than 0."                                                                 << endl;
					cout << "Multiplication table with values divided by the number 'Z' using dynamic allocated, 3d array via using 'new' structure." << endl;		
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the multiplication table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInMTWVDBTNZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the multiplication table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInMTWVDBTNZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the multiplication table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInMTWVDBTNZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionValue));
					
					
					sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption);		
					sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption);	
					sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOption);
					sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt++;
					
					
					long double *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt,sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt,sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt);
					
					
					cout << "Multiplication table with values divided by " << (sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt - 1) << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "x*y ";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << "x =  " << j;							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  divided by " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "/" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInMultiplicationTableWithValuesDividedByTheNumberZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;	
				}
				break;
			case 'O':
				{
					cout << "Logarithmic table with values divided by the number 'Z' with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                             << endl;
					cout << "The number for size must be equal to or greater than 0."                                                              << endl;
					cout << "Logarithmic table with values divided by the number 'Z' using dynamic allocated, 3d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the logarithmic table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInLTWVDBTNZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the logarithmic table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInLTWVDBTNZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the logarithmic table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInLTWVDBTNZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue));
					
					
					sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption);		
					sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption);	
					sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption);
					sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt++;
					
					
					long double *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt,pointerToSizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt,sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt);
					
					
					cout << "log of = x,   to base = y."   << endl;
					cout << "log of = col, to base = row." << endl;
					cout << "Logarithmic table with values divided by " << (sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt - 1) << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "to base ";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << "log of " << j;							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  divided by " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "/" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;	
				}
				break;
			case 'o':
				{
					cout << "Logarithmic table with values divided by the number 'Z' with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                             << endl;
					cout << "The number for size must be equal to or greater than 0."                                                              << endl;
					cout << "Logarithmic table with values divided by the number 'Z' using dynamic allocated, 3d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the logarithmic table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInLTWVDBTNZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the logarithmic table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInLTWVDBTNZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the logarithmic table with values divided by the number 'Z' array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInLTWVDBTNZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionValue));
					
					
					sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption);		
					sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption);	
					sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOption);
					sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt++;
					
					
					long double *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt,pointerToSizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt,sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt);
					
					
					cout << "log of = x,   to base = y."   << endl;
					cout << "log of = col, to base = row." << endl;
					cout << "Logarithmic table with values divided by " << (sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt - 1) << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "to base ";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << "log of " << j;							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  divided by " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "/" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInLogarithmicTableWithValuesDividedByTheNumberZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;	
				}
				break;
			case 'P':
				{
					cout << "Exponentiation table with values multiplied by 'Z' with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                        << endl;
					cout << "The number for size must be equal to or greater than 0."                                                         << endl;
					cout << "Exponentiation table with values multiplied by 'Z' using dynamic allocated, 3d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the exponentiation table with values multiplied by 'Z' array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInETWVMBZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the exponentiation table with values multiplied by 'Z' array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInETWVMBZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the exponentiation table with values multiplied by 'Z' array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInETWVMBZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue));					
					
					
					sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption);		
					sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption);	
					sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption);
					sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt++;
					
					
					long long int *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt,sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt,sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt);
					
					
					cout << "base^exponent. base = x,   exponent = y."         << endl;
					cout << "               base = col, exponent = row."       << endl;
					cout << "Exponentiation table with values multiplied by "  << (sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt - 1) << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "base ^...";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << j << "^...";							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  multiplied by " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "*" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;	
				}
				break;
			case 'p':
				{
					cout << "Exponentiation table with values multiplied by 'Z' with setable dynamic allocated memory size by user"           << endl;
					cout << "========================================================================"                                        << endl;
					cout << "The number for size must be equal to or greater than 0."                                                         << endl;
					cout << "Exponentiation table with values multiplied by 'Z' using dynamic allocated, 3d array via using 'new' structure." << endl;	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeX of the exponentiation table with values multiplied by 'Z' array: " << endl; 
						cin  >> sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDA3DAInETWVMBZOptionValueErrorMsg,pointerToSizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeY of the exponentiation table with values multiplied by 'Z' array: " << endl; 
						cin  >> sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeYForDA3DAInETWVMBZOptionValueErrorMsg,pointerToSizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue));	
					
					
					do 
					{ 
							
						cout << "Please enter the number for sizeZ of the exponentiation table with values multiplied by 'Z' array: " << endl; 
						cin  >> sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption;
							
					}while(!verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeZForDA3DAInETWVMBZOptionValueErrorMsg,pointerToSizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionValue));					
					
					
					sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt = stoi(sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption);		
					sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt = stoi(sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption);	
					sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt = stoi(sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOption);
					sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt++;
					sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt++;	
					sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt++;
					
					
					long long int *** pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory = verifyDataFunctions::verifyNumberToConvertToBinaryPolymorphismFunction(pointerToSizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt,sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt,sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt);
					
					
					cout << "base^exponent. base = x,   exponent = y."         << endl;
					cout << "               base = col, exponent = row."       << endl;
					cout << "Exponentiation table with values multiplied by "  << (sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt - 1) << ", 'Z' number." << endl;
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(9);
							cout << "base ^...";						
						}
						else if (j != 0)
						{
							cout.width(9);
							cout << j << "^...";							
						}
						else
						{
							cout.width(9);
							cout << " ";
						}
						for (int i = 0; i < sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++i)
						{
							cout.width(9);
							cout << " ";								
						}						
					}
					cout << endl;
					
					
					for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++j)
					{
						if (j == 0)
						{
							cout.width(10);
							cout << "  multiplied by " << endl;
							cout.width(10);
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++k)
							{
								if (k != 0)
									cout << "*" << k << "           ";		
							}													
						}
						else
						{
							cout.width(17);
							cout << " ";						
						}
					
					}
					cout << endl;
					
					
					int c = 0;
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++i)
					{
						for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++j)
						{	
							for (int k = 0; k < sizeZForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; ++k)
							{
								if (j == 0)
									pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k] = i;
								if (k != 0)
								{
									if (isinf(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "divided by 0";
									}
									else if (isnan(pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k]))
									{
										cout.width(14);
										cout << "not a number";								
									}
									else
									{
										cout.width(14);
										cout << pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j][k];			
									}										
								}
							}
							cout << "    |#|";
						}
						cout << endl;
					}
					
					
					for (int i = 0; i < sizeYForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; i++)
					{
					    for (int j = 0; j < sizeXForDynamicAllocated3DArrayInExponentiationTableWithValuesMultipliedByZOptionAsInt; j++)
					        delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i][j];
					    delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory[i];
					}
					delete[] pointerToPointerToPointerTo_3DArrayWithDynamicAllocatedMemory;	
				}
				break;
		}
		
		requireEnter::requireEnterMainMethodInDecimalToBinaryBinaryToDecimal();
		system("cls");
		
	} while(character != 27);
}

#endif
