#include <iostream>

using namespace std;

main()
{
	/*
	Inicjalizacja zmiennej, czyli z jednoczesnym przypisaniem wartoœci
	int a = 5;
	
	
	
	int b;
	b = 5;
	
	         Zmienne steruj¹ce
	         Zmienne licznikowe
		for (int i = 0;  i < 10; i++)
	
	
		for (inicjalizacja zmiennych; warunek pêtli (mo¿e byæ skomplikowany z && lub || itd); instrukcje do wykonania po przejœciu jednej pêtli, mo¿e te¿ byæ i += 5 itp)
	
		Zmienna i w takim wypadku istnieje tylko dla jednej pêtli, wiêc mo¿na tylko takiej zmiennej u¿ywaæ dalej w kolejnych pêtlach.
	*/
	
	for (int i = 0;  i < 3; i++)
		cout << "i jest rowne: " << i << "\n";
		cout << "To sie wykona raz"<< "\n";
	

	for (int i = 0;  i < 3; i++)
	{
		cout << "i jest rowne: " << i << "\n";
		cout << "To sie wykona 3 razy"<< "\n";	
	}
	
	
	// Zerowanie tablicy:
	int tab[100];
	
	
	for (int i = 0; i < 100; i++)
		tab[i] = i;
	
			
	for (int i = 0; i < 100; i++)
	{
		cout << "tab[" << i << "] = " << tab[i] <<"\n";
		cout << "Adres tablicy tab[" << i << "] = " << &tab[i] << endl;
	}
	
	
	
	
	system("pause");
}
