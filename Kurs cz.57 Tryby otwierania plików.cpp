#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		#include <fstream> file stream - potok plików, obs³uga plików.
		Utworzenie obiektu/instancji klasy fstream
		Otwieranie, zamykanie plików, trzeba pamiêtaæ.
		close() - zamkniêcie pliku, zwolnienie pamiêci, zasobów.
		
		=================================================================
		
		Flagi fstream, domyœlne flagi:
		fstream - ios::out | ios::in  (input, output stream, :: operator zasiêgu do 
		przestrzeni nazw out oraz in)
		
		=================================================================
		
		ios::out - output - wyjœcie - zapis
		ios::in - input - wejœcie - odczyt
		ios::trunc - truncate - ucinanie, ca³ej zawartoœci.
		ios::ate - At The End - ustawiæ pocz¹tkow¹ pozycjê, wskaŸnik na koniec pliku.
		np. ¿eby zacz¹æ pisaæ od samego koñca.
		Pozycje wskaŸnika mo¿na zmieniaæ. 
		Mo¿liwoœæ czytania i zapisywania.
		ios::app - Append - do³¹czyæ - zawartoœæ jest do³¹czana na koñcu pliku (nie da siê ju¿ zapisywaæ gdzie indziej).
		nie mo¿na usun¹æ zawartoœci.
		ios::binary - tryb binarny - nie otwieramy jako plik tekstowy. 
		Mo¿na otworzyæ tak zdjêcia, archiwa.
		
		in, dane wchodz¹ do obiektu klasy fstream, odczyt
		out, dane wychodz¹ z instancji klasy fstream, zapis
		
		=================================================================
		
		Mo¿emy zmieniaæ domyœlne zachowanie, w file.open("test2.txt");
		
		=================================================================

		file.open("test2.txt", ios::out); - sama flaga out,
		utworzy plik, gdy go nie ma.
		out automatycznie tworzy zawartoœæ pliku od nowa.
		
		file.open("test3.txt", ios::out | ios::ate);
		Dlatego drugi raz zapis jest taki sam bo plik jest utworzony
		od nowa i wskaŸnik na koñcu, czyli na pocz¹tku, bo nic tam ju¿ 
		nie ma.
		
		file.open("test3.txt", ios::out | ios::ate | ios::in); - zatrzymanie
		usuwania, dopisanie do istniej¹cej zawartoœci na jej koñcu.
		
		
		file.open("test3.txt", ios::out | ios::app | ios::trunc); - trunc
		nie zadzia³a, bo jest app.
		
		file.open("test3.txt", ios::out | ios::app | ios::binary); - wszystko
		nadpisze siê normalnie. Ka¿dy plik jest plikiem binarnym. 
		
		=================================================================


		ofstream jest to klasa dziedziczona przez fstream, ma na starcie flage
		out,  
		
		ofstream - ios::out // Utworzy plik, gdy go nie ma.
		ifstream - ios::in // Sam nie utworzy pliku, gdy go nie ma.
		
		=================================================================

		ios::out | ios::in -> ³¹czenie flag
		| operator OR bitowy, sumy
		
		
	*/
	fstream file;
	
	file.open("test3.txt", ios::out);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
	
	ofstream file2;
	
	file2.open("test4.txt");
	if (file2.is_open())
	{

	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
			
			
	ifstream file3;
	
	file3.open("test5.txt");
	if (file3.is_open())
	{

	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
	

	
	file.open("test3.txt", ios::out | ios::ate | ios::in);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}



	
	file.open("test3.txt", ios::out | ios::app | ios::in);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	



	file.open("test3.txt", ios::out | ios::app);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	
	


	file.open("test3.txt", ios::out | ios::app | ios::binary);
	if (file.is_open())
	{
		file << "test\n";
		file << "4test";
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
