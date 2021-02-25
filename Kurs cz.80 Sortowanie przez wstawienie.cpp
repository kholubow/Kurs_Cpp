#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury



const int ile = 5;
int tab[ile];


int main()
{
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
		tab[0]    tab[1]    tab[2]    tab[3]    tab[4]
		  4         3         8         5         2
		  
	1. Ostatni element jest ju¿ uporz¹dkowany.
	2. Porównujemy 5 z 2:
		czy 5 > 2? Podmieniamy, Zamieniamy

		tab[0]    tab[1]    tab[2]    tab[3]    tab[4]
		  4         3         8         2         5
		  
	3. Porównujemy 8 z 2:
		8 > 2? tak, czyli te¿ podmieniamy.

		tab[0]    tab[1]    tab[2]    tab[3]    tab[4]
		  4         3         2         8         5		
		
	4. Porównujemy 8 z 5:
		8 > 5? tak:
		
		tab[0]    tab[1]    tab[2]    tab[3]    tab[4]
		  4         3         2         5         8				
	*/
	int x, i, j;
	for (j = ile - 2; j >= 0; j--)
	{
		x = tab[j];
		i = j + 1;
		while((i < ile) && (x > tab[i]))
		{
			tab[i-1] = tab[i];
			i++;
		}
		tab[i-1] = x;
	}
	

	
	
	cout << "Tablica po sortowaniu przez wstawienie: " << endl;
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
