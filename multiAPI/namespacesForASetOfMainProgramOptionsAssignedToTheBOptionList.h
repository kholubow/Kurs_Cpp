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


#endif
