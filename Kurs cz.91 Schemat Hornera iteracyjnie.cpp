#include <iostream>

using namespace std;

/*
	5 * x^4 + 2 * x^3 + x^2 + 10x + 4
	
	((5 * x^3 + 2 * x^2 + x) + 10) * x + 4
	
	((5 * x^2 + 2 * x + 1) * x + 10) * x + 4
	
	(((5 * x + 2) * x + 1) * x + 10) * x + 4
	
	// 4 mno¿enia 4 dodawania
	
	a normalnie?
	
	(5 * x * x * x * x) + (2 * x * x * x) + (1 * x * x) + 10 * x + 4
	
	// 10 mno¿eñ 4 dodawania
*/

int main()
{
	/*
		Iteracyjne podejœcie do problemu jest du¿o szybsze od rekurencyjnego
		W przypadku rekurencji w przypadku wiêkszych równañ mo¿e dochodziæ do setek tysiêcy
		odwo³añ, co wp³ynie na znaczne zwolnienie dzia³ania programu oraz zajêcie pamiêci przez
		program.
		
		Algorytm polega na wyci¹ganiu x przed nawias i powtarzamy dzia³anie do momentu otrzymania 
		równania odpowiedniej postaci.
		
		Mniej mno¿eñ zamiast wiêcej ostatecznie.
	*/	
	int n;
	
	cout << "Podaj stopien wielomianu: " << endl;
	cin >> n;
	cin.ignore(); // Ignorowanie entera w wejœciowym buforze danych.
	
	/*
		Tablica, dynamiczne alokowanie pamiêci new int, rezerwacja miejsca dla wszystkich elementów tak, 
		aby znajdywa³y siê obok siebie. W przypadku braku mo¿liwoœci znalezienia takiego miejsca new int 
		zwróci NULL.
		Nazwa tablicy to te¿ jest wskaŸnik jak tutaj, na pierwszy element tablicy (jego adres),
		potem reszta elementów jest obok.
		Alternatywnie mo¿na zastosowaæ lepsz¹ wersjê tablicy, czyli vector, kontener z STL
		Standard Template Library.
		W tym przypadku rezerwacja miejsca na elementy mo¿e mieæ miejsce oddzielnie od reszty, 
		w sensie, wszystkie elementy mog¹ ale nie musz¹ znajdowaæ siê obok siebie w pamiêci.
		Do odnajdowania elementów s³u¿y wtedy iterator.
		Dodatkowo, vector rezerwuje miejsce na zapas, np. 
		przechowuje 4 elementy ale miejsce jest zarezerwowane na 8.
	*/
	int * a = new int[n];
	
	cout << "Podaj wartosci a: " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		cin.ignore();
	}
	
	int x;
	cout << "Podaj x: " << endl;
	cin >> x;
	cin.ignore();
	
	
	
	// (((5 * x + 2) * x + 1) * x + 10) * x + 4
	int w;
	w = a[0]; // 5
	
	/*
		Wzór podajemy od lewej do prawej.
		w = 5
		x = 2
		w = 5 * 2 + a[i] = 10 + 2 = 12
		w = 12
		
		i++
		w = 12 * 2 + a[i] = 24 + 1 = 25
		i++
		w = 25 * 2 + a[i] = 50 + 10 = 60
		i++
		w = 60 * 2 + a[i] = 120 + 4 = 124
		
		Dane wejœciowe:
		stopieñ = 4
		a[0] = 5
		a[1] = 2
		a[2] = 1
		a[3] = 10
		a[4] = 4
		x = 2
	*/
	for (int i = 1; i <= n; i++)
	{
		w = w * x + a[i];
	}
	
	cout << "Wynik to: " << w;
	
	delete [] a; // zwalnianie pamiêci w przypadku new int, new double itp - konieczne.

	getchar();
	system("PAUSE");
	return 0;
}
