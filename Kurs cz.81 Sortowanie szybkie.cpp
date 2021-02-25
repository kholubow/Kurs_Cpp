#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury



const int ile = 5;
int tab[ile];


int main()
{
	/*
		Sortowanie szybkie - szybko sortuje.
		
		1. Dzielenie tablicy na dwie czêœci. Po œrodku wybieramy piwot.
		2. Piwot podmieniamy z ostatni¹ cyfr¹ tablicy ostatniej.
		3. Wszystkie liczby porównujemy z piwotem.
		4. Liczby nie wiêksze od piwotu l¹duj¹ po lewej stronie.
		5. Liczby wiêksze od piwotu l¹duj¹ po prawej stronie.
		6. Algorytm jest wykonywany rekurencyjnie, od lewej strony do j-1, -1, bo nie mo¿emy
		braæ pod uwagê miejsca, gdzie jest piwot.
		7. Od j+1 do prawej strony, rekurencyjnie jest to wszystko wykonywane.
		
		Rekurencyjnie - czyli funkcja jest wywo³ywana w funkcji.
	*/
	
	
	// Pobieranie danych od u¿ytkownika do tablicy.
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj " << (i+1) << " liczbe: " << endl;
		cin >> tab[i];
		cin.ignore();
	}

	cout << "Tablica po wczytaniu wszystkiego: " << endl;
	PokazStan();
	
	/*
				
	*/

	

	
	
	cout << "Tablica po szybkim sortowaniu: " << endl;
	PokazStan();
	

	getchar();
	system("PAUSE");
	return 0;
}

void PokazStan() // Definicja procedury (bo nic nie zwraca, nie ma return)
{
	cout << "Nasza tablica wyglada nastepujaco: " << endl;
	for (int i = 0; i < ile; i++)
	{
		cout << (i+1) << ". = " << tab[i] << endl;
	}
}
