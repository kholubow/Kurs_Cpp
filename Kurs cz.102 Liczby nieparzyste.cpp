#include <iostream>

using namespace std;

int main()
{
	/*
		a) Sprawdzenie, czy liczba jest nieparzysta.
		
		b) Wypisanie tylu liczb nieparzystych, ile chce u¿ytkownik.
		
		np.
		U¿ytkownik wpisuje 7:
		wynik: 1, 3, 5, 7, 9, 11, 13
		
		c) Liczby porz¹dkowe dla liczb nieparzystych:
		1. = 1
		2. = 3
		3. = 5
		4. = 7
		5. = 9
		6. = 11
		7. = 13
		
		Sprawdzanie liczb, czy s¹ nieparzyste:
		modulo
		1 % 2 == 1
		2 % 2 == 0
		3 % 2 == 1
		4 % 2 == 0
		5 % 2 == 1
		
		Pêtla for musi siê wykonywaæ dwa razy wiêcej, user poda 10, to wypisze 5, bo sprawdza wszystkie
		liczby, czy s¹ modulo 2 == 1.
		
		Je¿eli po instrukcji warunkowej, np. if nie dajemy klamerek {}, to wykona siê tylko
		pierwsza instrukcja pod warunkow¹ i nic dalej.
	*/
	int ileLiczb;
	int liczbaPorzadkowa = 1;
	
	cout << "Ile liczb nieparzystych trzeba wypisac? " << endl;
	cin >> ileLiczb;
	for (int i = 0; i < ileLiczb * 2; i++)
	{
		if(i % 2 == 1)
			cout << liczbaPorzadkowa++ << ". = " << i << endl;
	}
	

	getchar();
	system("PAUSE");
	return 0;
}
