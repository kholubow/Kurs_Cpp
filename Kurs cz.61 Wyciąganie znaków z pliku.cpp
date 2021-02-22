#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		Funkcje do wyci¹gania znaków:
	
		getline(miejsce przechowywania pobranych wartoœci, ile ma pobraæ znaków, ogranicznik)
		Funkcja ta ma ustawiony 3-ci argument jako domyœlny, ogranicznik do koñca linii (dlatego
		getline).
		1-wszy argument to zmienna typu wskaŸnik, do której bêd¹ zapisywane pobierane znaki.
		2-gi, to ile ma pobraæ znaków.
		getline pobiera ogranicznik i go usuwa.
		getline - pobierz po prostu linia za lini¹, je¿eli po drodze nie ma ¿adnych b³êdów.
		
		
		
		
		get dzia³a w inny sposób trochê:
		np. same inicja³y.	
		ignore	
		get (miejsce przechowywania pobranych wartoœci, ile ma pobraæ znaków, ogranicznik)
		get nie pobiera ogranicznika ani go nie usuwa.
		
		ignore(ile ma wyci¹gn¹æ (zignorowaæ znaków), ogranicznik)
		
	*/
	fstream file;	
	file.open("test.txt", ios::in | ios::binary);
	if (file.is_open())
	{
		char first, last;
		char tmpName[30];
		char tmp[50] = {0};
		cin.getline(tmp, 50); // Pobieranie ze strumienia, bufora. Znaki z klawiatury.
		
		cout << "cin.getline(tmp, 50); : " << endl;
		cout << tmp << endl;
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		cout << "while(file.getline(tmp, 50)): " << endl;
		tmp[50] = {0};	
		while(file.getline(tmp, 50))
			cout << tmp << endl;

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		file.clear();
		file.seekg(0);
		tmp[50] = {0};
		file.get(tmp, 50);
		cout << "file.get(tmp, 50); : " << endl;	
		cout << tmp << endl;
		
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		cout << "Inicjaly: " << endl;
		file.clear();
		file.seekg(0);
		/*
			Ignoruje 100 znaków do napotkania spacji, po pobraniu ju¿ pierwszej litery,
			napotyka literê i jest drugi inicja³. 
			Dalej ignoruje 100 znaków do napotkania nowej linii, i proces startuje od pocz¹tku
			a¿ do koñca pliku eof.
		*/
		do
		{
			first = file.get();
			cout << "Pierwsza litera: " << endl;	
			cout << first << endl;
			file.ignore(100, ' ');	// Ignore 100 znaków, chyba ¿e napotka spacje	
			last = file.get();	
			file.ignore(100, '\n'); // Ignore 100 znaków, chyba ¿e napotka enter	
			cout << "Druga litera: " << endl;	
			cout << last << endl;	
			cout << "===================================" << endl;		
		} while(!file.eof());
		
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		file.clear();
		file.seekg(0);
		last = {0};
		cout << "Inicjaly 2: " << endl;		
		do
		{
			file.get(tmpName, 30, ' ');
			cout << "Imie: " << endl;	
			cout << tmpName << endl;
			file.ignore(1, ' ');
			last = file.get();	
			file.ignore(100, '\n'); 	
			cout << "Druga litera: " << endl;	
			cout << last << endl;	
			cout << "===================================" << endl;		
		} while(!file.eof());		
		
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
