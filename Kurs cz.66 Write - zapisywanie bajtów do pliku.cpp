#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
			write - pisaæ
			funkcja write zapisuje bajty do pliku.
			Po wpisaniu "Przykladowy tekst" za pomoc¹ funkcji write na koñcu dopisany
			jest NUL (plik txt otwarty przy pomocy Notepad++).
			write zapisuje wszystko jak leci, nawet znak zakoñczenia tekstu.
			
			
			write = niskopoziomowe operacje, gdy chcemy ustawiæ jakiœ bufor, itd.
			
			
			file.write(sample, sizeof(sample) - 1);
			- 1 ¿eby na koñcu funkcja write nie dopisywa³a znaku zakoñczenia tekstu (NUL)
	*/
	fstream file;	
	file.open("test.txt", ios::out | ios::binary);
	if (file.is_open())
	{
		char sample [] = "Przykladowy tekst";
		// file << sample;
		
		file.write(sample, sizeof(sample) - 1); // Parametr sample - wskaŸnik, sizeof rozmiar.
		// file.write(sample, 455);
		// write po wskazaniu na sample (wskaŸnik na 1-wszy element tablicy) i po wpisaniu
		// wielkoœci wiêkszej od rozmiaru sample, wczytane zostan¹ inne elementy z pamiêci (np. z 
		// innych programów itd.) bêd¹ce dalej za tablic¹ sample.
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}

	
	system("PAUSE");
	return 0;
}
