#include <iostream>
#include <fstream>
#include "string.h"

using namespace std;

int main()
{
	/*
			read(gdzie zapisaæ, ile bajtów);
			funkcja read() - czytanie zawartoœci plików.
			Kiedy chcemy przeczytaæ ka¿dy bia³y znak, np. obrazki.
			Nie ma tutaj mo¿liwoœci pomijania, np. 100 znaków a¿ do 
			napotkania czegoœ (ograniczników).
	*/
	fstream file;	
	file.open("test5.txt", ios::in | ios::binary);
	if (file.is_open())
	{
			
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
