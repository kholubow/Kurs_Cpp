#include <iostream>

using namespace std;

unsigned int silnia(int); // Deklaracja funkcji zwracaj¹cej tylko wartoœci dodatnie (unsigned). Przyjmuje jeden parametr.

int main()
{
	/*
		Silnia - iloczyn wszystkich liczb naturalnych nie wiêkszych od n, które podajemy.
		Np.
		5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1 = 120
		
		Rekurencja - ci¹g³e wywo³ywanie funkcji w niej samej.
		
		Funkcja silnia:
			Je¿eli n = 0 lub 1, czyli silnia = 1, czyli return 1.
			== porównanie ale === porównanie ze sprawdzeniem, czy porównywane wartoœci s¹
			tego samego typu.
			
			Rekurencja:
				return n * silnia(n - 1);
				Np. dla 5
				return 5 * silnia(4)
				potem bêdzie
				return 4 * silnia(3)
				...
	*/	
	int ile;
	
	cout << "Z ilu chcesz obliczyc silnie? ";
	cin >> ile;
	cin.ignore();
	cout << endl;
	
	
	cout << "Silnia z " << ile << " wynosi: " << silnia(ile) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

unsigned int silnia(int n) // Definicja
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * silnia(n - 1);
}
