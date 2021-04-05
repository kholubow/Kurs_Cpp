#ifndef _UBER_NAMESPACESFORMENUWITHMAINOPTIONSAFTERSIGNIN
#define _UBER_NAMESPACESFORMENUWITHMAINOPTIONSAFTERSIGNIN 1


#include <iostream>
#include <conio.h>
#include <cstring>


using namespace std;


namespace requireEnter
{
	void requireEnterMainMethodInMenuWithMainOptionsAfterSignIn()
	{
		cout << "Click ENTER to continue." << endl;
		while(getch() != 13);		
	}
}


#include "DecimalToBinaryBinaryToDecimal.h"
namespace decimalToBinaryBinaryToDecimalDeclaration
{
	typedef DecimalToBinaryBinaryToDecimal<int> DecimalToBinaryBinaryToDecimal;
	DecimalToBinaryBinaryToDecimal decimalToBinaryBinaryToDecimalMenu;
}


#endif
