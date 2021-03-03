/*

tekst	A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z

szyfr	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z	A	B	C

*/
#include <iostream>
#include <string>

using namespace std;

string Zaszyfrowanie(string); // Deklaracja funkcji zwracaj¹cej string, przyjmuje 1 parametr typu string
string Odszyfrowanie(string);
const int ile = 3; // Przesuwanie o 3 pozycje w alfabecie.

int main()
{
	/*
		Szyfr Cezara s³u¿y do szyfrowania danych, aby nikt inny nie móg³ ich odczytaæ
		
		Ka¿da literka z tekstu zamienia siê na literkê o 3 pozycje dalej w alfabecie.
		
		Jest to jeden z najprostszych sposobów na napisanie szyfru Cezara.
		
		Do przeskakiwania miêdzy literami w alfabecie wykorzystano tablice kodów ASCII
		A = 65
		...
		Z = 90
		
		Przy XYZ trzeba ustawiæ od pocz¹tku, ABC, od 65.
		
		W kodach ASCII polskich znaków akurat nie ma.
	*/
	string slowo;
	cout << "Podaj slowo do zaszyfrowania: " << endl;
	cin >> slowo;
	cin.ignore();

	cout << "Zaszyfrowane dane: " << Zaszyfrowanie(slowo) << endl;
	
	cout << "Odszyfrowane dane to: " << Odszyfrowanie(Zaszyfrowanie(slowo)) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

string Zaszyfrowanie(string slowo) // Definicja funkcji
{
	int t;
	
	for (int i = 0; i < slowo.length(); i++)
	{
		t = slowo[i] + ile;
		
		if (t < 65) // mniejsze od A w ASCII
			slowo[i] += (26 + ile);
		else if (t > 90) // wiêksze od Z w ASCII
			slowo[i] -= (26 - ile); // slowo[i] = slowo[i] - (26 - ile) = slowo[i] - 26 + ile
		else
			slowo[i] += ile;
	}
	
	return slowo;
}

string Odszyfrowanie(string slowo)
{
	int t;
	
	for (int i = 0; i < slowo.length(); i++)
	{
		t = slowo[i] - ile;
		
		if (t < 65)
			slowo[i] += (26 - ile);
		else if (t > 90) 
			slowo[i] -= (26 + ile);
		else
			slowo[i] -= ile;
	}

	return slowo;
}
