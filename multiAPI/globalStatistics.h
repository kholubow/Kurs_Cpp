#ifndef _UBER_GLOBAL_STATISTICS
#define _UBER_GLOBAL_STATISTICS 1

#include "namespacesForWelcomeMenu.h"
#include <iostream>
#include <conio.h>

using namespace std;

template<typename T>
class GlobalStatistics
{
	protected:
		T x;
	public:
		void globalStatistics();
};

template<typename T>
void GlobalStatistics<T>::globalStatistics()
{
	char character;
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "|                       GLOBAL STATISTICS                        |" << endl;
		cout << "| A - Data1                                                      |" << endl;
		cout << "| T - Data2                                                      |" << endl;
		cout << "| C - Data3                                                      |" << endl;
		cout << "| D - Data4                                                      |" << endl;
		cout << "| E - Data5                                                      |" << endl;
		cout << "| F - Data6                                                      |" << endl;
		cout << "| G - Data7                                                      |" << endl;
		cout << "| B - Back                                                       |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'B':
				cout << endl;
				break;
			case 'b':
				cout << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInWelcomeMenu();
		system("cls");
		
	} while(character != 'b' && 
			character != 'B');
}

#endif
