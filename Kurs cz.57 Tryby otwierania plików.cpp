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
		
		
	*/
	fstream file;
	
	file.open("test2.txt");
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
