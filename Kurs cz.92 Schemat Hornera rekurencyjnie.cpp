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
/*
	Globalne definiowanie zmiennych, aby by³o mo¿liwe u¿ycie ich w zewnêtrznych funkcjach/procedurach.
	Gdyby nie to, trzeba by by³o u¿ywaæ parametrów przekazywanych do takich funkcji/procedur w 
	postaci referencji b¹dŸ wskaŸników.
	Globalne zmienne w przeciwieñstwie do lokalnych przyjmuj¹ automatycznie wartoœci 0 w przypadku
	braku ich definicji.
*/
int Horner(int); // Deklaracja funkcji, zwraca typ int, jeden parametr typu int.

int n;
int * a = new int[n];
int x;


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
	
	cout << "Podaj wartosci a: " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		cin.ignore();
	}
	cout << "Podaj x: " << endl;
	cin >> x;
	cin.ignore();
	
	cout << "Wynik to " << Horner(n);
	
	

	getchar();
	system("PAUSE");
	return 0;
}

/*
	Funkcja Horner przyjmuje stopieñ - n.
		w[0] = a[0];
		w[1] = a[0] * x + a[1];
		w[2] = a[1] * x + a[2];
	Wzór ogólny:
		w[n] = a[n-1] * x + a[n]; - wzór rekurencyjny
		
		
	Przyk³ad:
		(((5 * x + 2) * x + 1) * x + 10) * x + 4
		return Horner(i-1) * x + a[i];
		i = 4;
		n = 4;
		x = 2;
		i =/= 0
		
	dalej:
		
		return Horner(4-1) * x + a[i]
		
	i = 3
	w = 
		return Horner(3-1) * x + a[i]
		
	i = 2
	w = 
		return Horner(2-1) * x + a[i]	
		
	i = 1
	w = 
		return Horner(1-1) * x + a[i]	
		
	i = 0
	i == 0
	return a[0];
	
	w = a[0] = 5;
	a[0] * x  + a[i] = 10 + 2 = 12
	
	i = 1
	return Horner(1-1) * x + a[i]
	
	i = 2
	...
	w = 124
*/
int Horner(int i) // Definicja
{
	if (i == 0)
		return a[0];
	else
		return Horner(i-1) * x + a[i];
}
