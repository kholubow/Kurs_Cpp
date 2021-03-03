#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
		liczba jako string, bo bêdzie podawany ci¹g 0 i 1.
		
		1.wsza pêtla for:
			short i = short int = dwukrotnie mniej pamiêci zajmuje short od zwyk³ego int,
			mniejszy zakres.
			i < d³ugoœci wprowadzonego ci¹gu 0 i 1 (string).
			
			if napotkany znak w string liczba to jest jeden, to wynik *2 + 1, je¿eli 0, to
			wynik * 2 tylko.
			
		Dzia³anie:
		
		110101
		Od i = 0
		liczba[0] = 1
		...
		liczba[5] = 1
		
		1
		wynik = 1
		1
		wynik = 3
		0
		wynik = 6
		1
		wynik = 13
		0
		wynik = 26
		1
		wynik = 53
	*/
	string liczba;
	int wynik = 0;

	cout << "Podaj liczbe w systemie dwojkowym: " << endl;
	cin >> liczba;
	cin.ignore();
	
	for (short i = 0; i < liczba.length(); i++)
	{
		if (liczba[i] == '1')
			wynik = wynik * 2 + 1;
		else
			wynik = wynik * 2;
	}
	
	cout << "Postac dziesietna to: " << wynik << endl;
	
	getchar();
	system("PAUSE");
	return 0;
}
