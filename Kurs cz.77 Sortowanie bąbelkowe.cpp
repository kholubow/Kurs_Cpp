#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury


const int ile = 5;
int tab[ile]; // Globalna (zmienna) tablica. Automatycznie jest zerowana w przeciwieñstwie do zmiennych lokalnych.

int main()
{
	/*
		Sortowanie b¹belkowe - wypychanie do przodu jednego b¹belka i porównywanie miêdzy sob¹
		nastêpnego.
		
		Dwie pêtle for - najprostsza implementacja.
		
		
		
		
		Sortowanie b¹belkowe potrzebuje tzw. tablicy tymczasowej.
		
		
		Najprostszy i podstawowy.
		
		
		Sortowanie b¹belkowe jest dobre tak do 5000 elementów, potem jest ju¿ wolne.
	*/
	// Wczytywanie wartoœci
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj " << (i + 1) << " liczbe: " << endl;
		cin >> tab[i];
		cin.ignore();
	}
	
	// Wypisywanie stanu
	cout << "Stan tablicy przed sortowaniem: " << endl;
	PokazStan();
	
	
	int temp;
	
	// Sortowanie
	/*
		Je¿eli element j ma wiêksz¹ wartoœæ od elementu nastêpnego j+1, to chcemy zamieniæ je miejscami:
		1. Tymczasowa zmienna przechowuje wartoœæ z tablicy (1 element)
		2. Na miejsce wiêkszego elementu zostaje wpisany nastêpny, mniejszy od niego.
		3. Na miejsce mniejszego j + 1 zostaje wpisany ten wiêkszy element dziêki wczeœniejszemu
		zapisaniu go w zmiennej tymczasowej.
		
		Ile elementów ma tablica, tyle razy wykona siê ca³y proces sortowania.
	*/
	for (int i = 0; i < ile - 1; i++)
	{
		cout << "Sortowanie numer: " << i << endl;
		PokazStan();
		for (int j = 0; j < ile - 1; j++)
		{
			if (tab[j] > tab[j+1])
			{
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
	
	cout << "Stan tablicy po sortowaniu: " << endl;
	// Wypisywanie stanu
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
