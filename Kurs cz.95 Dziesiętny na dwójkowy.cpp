#include <iostream>

using namespace std;

int main()
{
	/*
		Np. 10 = 1010
		
		1 1 0 1 0 1 = (1*1) + (1*4) + (1*16) + (1*32) = 5 + 48 = 53
		Od lewej do prawej strony liczymy
		Od prawej do lewej na koniec
	*/
	int a, w;
	/*
		Nazwa tablicy = wskaŸnik na jej pierwszy element (jego adres).
		Dane s¹ przechowywane w pamiêci obok siebie, w przypadku takiej tablicy 
		oraz tablicy dynamicznej, tutaj by³oby przy pomocy new int.
		new int w przypadku braku mo¿liwoœci znalezienia miejsca obok siebie w pamiêci
		dla swoich elementów zwróci NULL
		Mo¿na zastosowaæ vector, kontener, ze STL - Standard Template Library.
		Rozbudowany bardziej od tablic, do szukania adresów elementów w vector s³u¿y
		iterator, obiekt.
		Dane nie musz¹ byæ przechowywane obok siebie w pamiêci w przypadku vectora.
		4 elementy = rezerwacja na 8.
	*/
	// W tablicy przechowywane s¹ 0 i 1.
	int tab[100];
	
	cout << "Podaj liczbe, ktora mam zamienic na kod binarny: ";
	cin >> a;
	cin.ignore(); // Ignorowanie entera w buforze wejœciowych danych.
	
	int i = 0;
	
	/*
	 Np. 53
		i = 1
		tab[1] = 53 % 2 = 1
		a = 26
		w = 52 + 1 = 53
		w >= 2
		
		i = 2
		tab[2] = 26 % 2 = 0
		a = 13
		w = 26 + 0 = 26
		w >= 2
		
		i = 3
		tab[3] = 13 % 2 = 1
		a = 6
		w = 12 + 1 = 13
		w >= 2
		
		
		i = 4
		tab[4] = 6 % 2 = 0
		a = 3
		w = 6 + 0 = 6
		w >= 2
		
		i = 5
		tab[5] = 3 % 2 = 1
		a = 1
		w = 2 + 1 = 3
		w >= 2
		
		i = 6
		tab[6] = 1 % 2 = 1
		a = 0
		w = 0 + 1 = 1
		w >/= 2
		
		101011
		
		
		Odczyt z tablicy przechowuj¹cej 0 i 1 w drug¹ stronê,
		POSTdekrementacja w pêtli for
		--i = PREdekrementacja
		
		110101
	*/
	do
	{
		
		i++;
		tab[i] = a % 2;
		a = a / 2;
		w = 2 * a + tab[i];
		
	}while(w >= 2);
	
	cout << "Liczba w systemie dwojkowym wyglada: " << endl;
	for (; i > 0; i--)
	{
		cout << tab[i];
	}
	
		
	getchar();
	system("PAUSE");
	return 0;
}
