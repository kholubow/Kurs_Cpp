#ifndef _UBER_A_SET_OF_MAIN_PROGRAM_OPTIONS_ASSIGNED_TO_THE_B_OPTION_LIST
#define _UBER_A_SET_OF_MAIN_PROGRAM_OPTIONS_ASSIGNED_TO_THE_B_OPTION_LIST 1


#include "namespacesForASetOfMainProgramOptionsAssignedToTheBOptionList.h"
#include <iostream>
#include <string>
#include <conio.h>


using namespace std;


template<typename T>
class ASetOfMainProgramOptionsAssignedToTheBOptionList
{
	protected:
		T x;
	public:
		void aSetOfMainProgramOptionsAssignedToTheBOptionList();
};


template<typename T>
void ASetOfMainProgramOptionsAssignedToTheBOptionList<T>::aSetOfMainProgramOptionsAssignedToTheBOptionList()
{
	char character;
		
	
	do
	{
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "| A -                                                                    |" << endl;
		cout << "| B -                                                                    |" << endl;
		cout << "| C -                                                                    |" << endl;
		cout << "| D -                                                                    |" << endl;
		cout << "| E -                                                                    |" << endl;
		cout << "| F -                                                                    |" << endl;
		cout << "| G -                                                                    |" << endl;
		cout << "| H -                                                                    |" << endl;
		cout << "| I -                                                                    |" << endl;
		cout << "| J -                                                                    |" << endl;
		cout << "| K -                                                                    |" << endl;
		cout << "| L -                                                                    |" << endl;
		cout << "| M -                                                                    |" << endl;
		cout << "| N -                                                                    |" << endl;
		cout << "| O -                                                                    |" << endl;
		cout << "| P -                                                                    |" << endl;
		cout << "| ESC - Exit                                                             |" << endl;
		cout << "--------------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'A':
				cout << "A" << endl;
				break;
			case 'a':
				cout << "a" << endl;
				break;				
			case 'B':
				cout << "B" << endl;
				break;
			case 'b':
				cout << "b" << endl;
				break;
			case 'C':
				cout << "C" << endl;
				break;
			case 'c':
				cout << "c" << endl;
				break;
			case 'D':
				cout << "D" << endl;
				break;
			case 'd':
				cout << "d" << endl;
				break;
			case 'E':
				cout << "E" << endl;
				break;
			case 'e':
				cout << "e" << endl;
				break;
			case 'F':
				cout << "F" << endl;
				break;
			case 'f':
				cout << "f" << endl;
				break;
			case 'G':
				cout << "G" << endl;
				break;
			case 'g':
				cout << "g" << endl;
				break;
			case 'H':
				cout << "H" << endl;
				break;
			case 'h':
				cout << "h" << endl;
				break;
			case 'I':
				cout << "I" << endl;
				break;
			case 'i':
				cout << "i" << endl;
				break;
			case 'J':
				cout << "J" << endl;
				break;
			case 'j':
				cout << "j" << endl;
				break;
			case 'K':
				cout << "K" << endl;
				break;
			case 'k':
				cout << "k" << endl;
				break;
			case 'L':
				cout << "L" << endl;
				break;	
			case 'l':
				cout << "l" << endl;
				break;
			case 'M':
				cout << "M" << endl;
				break;
			case 'm':
				cout << "m" << endl;
				break;
			case 'N':
				cout << "N" << endl;
				break;
			case 'n':
				cout << "n" << endl;
				break;
			case 'O':
				cout << "O" << endl;
				break;
			case 'o':
				cout << "o" << endl;
				break;
			case 'P':
				cout << "P" << endl;
				break;
			case 'p':
				cout << "p" << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInASetOfMainProgramOptionsAssignedToTheBOptionList();
		system("cls");
		
	} while(character != 27);
}

#endif
