#include "biblioteka.h"

#define PI 3.14


int main(int argc, char** argv) 
{
	/*
			Zmiana w³aœciwoœci pliku exe:
			Projekt --> Opcje Projektu 
			- Zmiana ikonki 
			- Nazwa programu.exe
			Dodatkowo s¹ zak³adki z opcjami:
			- Informacje: do³¹cz informacje o wersji do projektu.
			Automatyczne zwiêkszanie nr. wersji przy kompilacji.
			Jêzyk programu: Polski
			Opis (File Description) - co siê wyœwietla w Windows pod nazw¹ programu, opis programu.
			
			Opcje projektu --> CTRL + H
			
			Zawsze to lepszy wygl¹d pliku programu.exe
			
	*/
	cout << "#define PI 3.14: " << endl;
	cout << "PI: " << PI << endl;
	
	cout << "Zmienna a z biblioteka.h: " << endl;
	cout << "a: " << a << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz z biblioteka.h: " << endl;
	cout << "wypisz(): " << endl;
	wypisz();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz2 z biblioteka.h: " << endl;
	cout << "wypisz2(): " << endl;
	wypisz2();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Zmienna b zdefiniowana w biblioteka.cpp i wyexternowana przez biblioteka.h: " << endl;
	cout << "b: " << b << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz3 z biblioteka.h (definicja w pliku biblioteka.cpp): " << endl;
	cout << "wypisz3(): " << endl;
	wypisz3();
		
	
	system("PAUSE");
	return 0;
}

void wypisz2()
{
	cout << "cosik2" << endl;
}
