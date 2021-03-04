#include <iostream>
#include <string>

using namespace std;

void Wypisac(); // Procedura (nic nie zwraca, nie ma return w jej definicji)

string liczba;
short int t;

int main()
{
	/*
		U¿ytkownik podaje liczbe jako string, liczbe po przecinku.
		Program rozbija liczbe na czêœæ przed przecinkiem i po przecinku.
		short int t = tymczasowa = temporary = do zapamiêtania pozycji, w której znajduje siê przecinek w liczbie.
		short jest 2 razy mniejszy od samego int (zajmuje dwukrotnie mniej miejsca w pamiêci jako zmienna).
		string, jako tablica znaków, string to jest ci¹g znaków, czyli w sumie tablica typu char.
		
		Tablica ASCII:
		. = 46
		, = 44
		
		W procedurze Wypisac:
		od - nieskoñczonoœci do t i od t do + nieskoñczonoœci mamy liczby, trzeba je wypisaæ.
		Je¿eli indeks znaku jest mniejszy lub wiêkszy od zapisanego t (przecinek, kropka w liczbie), to
		wypisanie.
		Je¿eli indeks znaku w tablicy string jest równy t, to "Po znaku".
		Obs³uga liczb dodatnich.
		W przypadku liczby ujemnej nast¹pi przesuniêcie tablicy o jeden znak w lewo.
		czyli z liczby np. -100.99 zrobi siê 100.99
		t, pozycje przecinka/kropki te¿ trzeba zmieniæ o jeden mniej.
		
		Po takim przesuwaniu ostatni indeks w tablicy char dalej istnieje, zostaje ostatnia liczba 
		dodatkowo na samym koñcu.
		Przypisanie znaku koñca linii na samym koñcu tablicy '\0'
	*/	
	cout << "Podaj liczbe po przecinku: " << endl;
	cin >> liczba;
	cin.ignore();
	
	for (int i = 0; i < liczba.length(); i++)
	{
		if(liczba[i] == 44 || liczba[i] == 46)
			t = i;
	}
	
	
	cout << "Przed znakiem: " << endl;
	if(liczba[0] != '-')
	{
		Wypisac();
	}
	else
	{
		for(int i = 1; i < liczba.length(); i++)
		{
			liczba[i - 1] = liczba[i];
		}
		t--;
		liczba[liczba.length()-1] = '\0';
		Wypisac();		
	}
	

	getchar();
	system("PAUSE");
	return 0;
}

void Wypisac()
{
	for (int i = 0; i < liczba.length(); i++)
	{
		if(i < t || i > t)
			cout << liczba[i] << endl;
		else if (i == t)
			cout << "Po znaku:" << endl;
	}
}
