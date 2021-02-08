#include <iostream>

using namespace std;

// Zmienna globalna, automatycznie 0 - wana przy braku startowej wartoœci.
const int ROZMIAR = 10;


int main()
{
	/*
		Alokacja - przydzielanie
		Dynamiczne przydzielanie pamiêci
	*/
	// Kompilator z góry rezerwuje 40 bajtów:
	int tab[10];
	int tab2[ROZMIAR];
	
	// "Dynamicznie" - Ÿle:
	int ile;
	cout << "Podaj wielkosc tablicy tab3: " << endl;
	cin >> ile;
	int tab3[ile];
	cout << &tab3[0] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	// -----------------------------
	// new - zarezerwuj miejsce w pamiêci
	// int, double itp - wie, ile zarezerwowaæ i od razu ustawi 1-wsz¹ wartoœæ, nie jak wczeœniej.
	// new int; zarezerwowane poza naszym programem, ale mamy pewnoœæ, ¿e tam nic nie ma (np. 
	// z innego programu).
	
	//new int;
	cout << "Adres new int: " << new int << endl;
	cout << "Wartosc pod adresem new int: " << *(new int) << endl;
	
	// Tak jak na poprzedniej lekcji, 2 sposoby na odwo³ywanie siê do elementów tablicy, jeden z nich,
	// poprzez wskaŸnik.
	// 4 bajty
	int *wsk = new int;
	*wsk = 20;
	cout << "new int i modyfikacja wartosci pod tym adresem na 20: " << *wsk << endl;
	cout << "Ponownie wartosc pod new int, to juz cos nowego, brak etykiety, zeby odwolac sie bezposrednio: " << *(new int) << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	// Taka sama reakcja jak w zmiennych lokalnych:
	if (10)
	{
		int *wsk2 = new int;
		*wsk2 = 560;
		cout << "*wsk2 w if'ie: " << *wsk2 << endl;
	}
	// cout << *wsk2 << endl; - b³¹d, teraz *wsk2 istnieje w if'ie tylko
	// Mimo wszystko rezerwacja new int dzia³a a¿ do zamkniêcia programu.
	
	
	int a = 20;
	// Dlatego powinno siê zwalniaæ pamiêæ po takim if'ie:
	if (10)
	{
		// Je¿eli nie mamy wystarczaj¹co wolno pamiêci, to adres zwracany przez new typ_danej jest równy NULL
		// Trzeba jak w tablicy zarezerwowaæ wszystkie wartoœci obok siebie.
		int *wsk3 = new int;
		*wsk3 = 600;
		cout << "*wsk3 w if'ie: " << *wsk3 << endl;
		delete wsk3; // zwolnienie pamiêci na któr¹ wskazuje wskaŸnik wsk3
		// Sam wskaŸnik wsk3 nadal zostaje i mo¿e nadal na coœ nowego wskazywaæ.
		// wsk3 nadal wskazuje na wyczyszczone miejsce i mo¿na tak coœ nadpisaæ.
		// *wsk3 = 4500;
		wsk3 = &a;
		cout << "*wsk3 z a w if'ie: " << *wsk3 << endl;
		wsk3 = NULL; // Pustka, 0-we miejsce w pamiêci, nic.
		// nie mo¿na wy³uskaæ z adresu ¿adnego.
		
		
		// Gdyby nie delete, przy pomocy wskaŸnika p mo¿na by coœ podmieniæ w miejscu, na które 
		// wskazuje wsk3
		int *p = new int;
		*p = 40;
		cout << p     << endl;
		if (wsk3 != NULL) cout << wsk3           << endl;
		if (wsk3 == NULL) cout << "Brak pamieci albo wskazywanie na nic" << endl;
		cout << *p    << endl;
		if (wsk3 != NULL) cout << *wsk3 << endl;
		if (wsk3 == NULL) cout << "Brak pamieci albo wskazywanie na nic" << endl;
		delete p;
	}
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	// 40 bajtów pod rz¹d ustawionych w pamiêci potrzeba:
	// Jakby nie by³o to taki new int zwraca NULL, czyli brak pamiêci.
	// tab[0] == *(tab) - oba wskazuj¹ na 1-wszy element tablicy.
	int *tab4 = new int[10];
	
	tab4[0] = 10;
	tab4[1] = 105;
	cout << "tab4[0]: = 10 "       << tab4[0]     << endl;
	cout << "*(tab4): = 10 "       << *(tab4)     << endl;
	cout << "*(tab4 + 1): = 105  " << *(tab4 + 1) << endl;
	cout << "tab4[1]: = 105 "      << tab4[1]     << endl;
	// Na koniec, gdy ju¿ nie potrzebujemy pamiêci:
	// delete [] tab4;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Dynamiczna tablica: "    << endl;
	int ile2;
	cout << "Wielkosc tablicy tab5: " << endl;
	cin >> ile2;
	int *tab5 = new int[ile2];
	// new int zwraca adres do pierwszego elementu tablicy, która jest szeregiem.
	// [] - zwalniamy dla wielu zmiennych a nie tylko dla jednej pamiêæ.
	// delete [] tab5;
	
	
	
	system("pause");
	return 0;
}
