#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury



const int ile = 4;
int tab[ile];


int main()
{
	/*
		Wybieramy wartoœæ minimaln¹ i przesuwamy j¹ na sam pocz¹tek.
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
	
	// t - tmp - tymczasowo zapamiêtywanie, gdzie znajduje siê minimalna liczba.
	int k, t;
	
	/*
		Ile ma elementów tablica, tyle razy bêdzie porównywanie elementów ( - 1).
		
		1. Czy sprawdzany element jest mniejszy od tego trzymanego k w danym obrocie pêtli.
		2. Je¿eli tak, to tab[j] bêdzie tym minimalnym.
		3. Tymczasowa zmienna t przechowuje wartoœæ 1-wszego elementu.
		4. Najmniejszy element jest wpisywany w 0 miejsce w tablicy.
		5. Na miejsce z przeniesienia l¹duje element z 0 miejsca.
	*/
	for(int i = 0; i < ile - 1; i++)
	{
		cout << "Tablica po sortowaniu przez wybor, krok nr." << (i+1) << " :" << endl;
		PokazStan();
		k = i;
		for(int j = i + 1; j < ile; j++)
		{
			if (tab[j] < tab[k])
				k = j;
		}
		t = tab[i];
		tab[i] = tab[k];
		tab[k] = t;
	}
	
	
	cout << "Tablica po sortowaniu przez wybor: " << endl;
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
