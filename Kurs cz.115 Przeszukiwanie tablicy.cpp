#include <iostream>

using namespace std;

int main()
{
	/*
		Szukanie wpisanego elementu w tablicy tab.
		Je¿eli znaleziono, to k przechowuje indeks, gdzie znajduje siê ten element w tab.
	*/
	int k = -1, a, tab[5] = { 4, 30, 23, 43, 3};
	
	cout << "Podaj wartosc do sprawdzenia, czy istnieje w tablicy tab: " << endl;
	cin >> a;
	cin.ignore();
	
	
	for (int i = 0; i < 5; i++)
	{
		if(a == tab[i])
			k = i;
	}
	
	if(k != -1)
		cout << "Wartosc a: " << a << " istnieje w tablicy tab[" << k << "] = " << tab[k] << endl;
	else
		cout << "Nie znaleziono elementu w tab." << endl;
	
	

	getchar();
	system("PAUSE");
	return 0;
}
