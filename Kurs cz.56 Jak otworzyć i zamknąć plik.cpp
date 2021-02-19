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
	fstream myFileHandler;
	
	myFileHandler.open("test.txt");
	if (myFileHandler.is_open())
	{
		cout << "Plik zostal poprawnie otwarty" << endl;
		
		myFileHandler << "Testowy tekst id¹cy do pliku 22";
		
		myFileHandler.close();
	}		
			
	
	system("PAUSE");
	return 0;
}
