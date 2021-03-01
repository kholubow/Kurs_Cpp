#include <iostream>
#include <cmath> // Dla u¿ycia sqrt

using namespace std;

bool Test(int); // Funkcja, zwracaj¹ca true lub false (1 lub 0), czyli boolean. Deklaracja.

int main()
{
	/*
		Liczba pierwsza jest to liczba, która dzieli siê tylko przez siebie i przez jedynkê.
		Liczba ca³kowita.
		Np. 2, 3, 7, 23.
	*/
	int a = 2, ile;
	
	cout << "Ile liczb pierwszych mam wygenerowac? ";
	cin >> ile;
	cin.ignore();
	
	
	for (unsigned int i = 0; i < ile; i++)
	{
		if(Test(a))
		{
			cout << (i+1) << ". = " << a << endl;
		} else
		{
			i--;
		}
		a++;
	}
	
	

	getchar();
	system("PAUSE");
	return 0;
}

bool Test(int a) // Definicja funkcji
{
	
	if(a<=1) return false;
	
	
	// Np. 10 / 7,8,9 - nie ma szans, ¿eby dawa³o to resztê ca³kowit¹, wiêc
	// dopóki otrzymane i <= (a / 2) dopóty i++
	/*
		a = 10,
		1. Iteracja pêtli for:
			2 <= 5, 
			10 % 5, brak reszty
			
		2. Iteracja pêtli for:
			3 <= 5, 
			10 % 3, jest reszta
			
		3. Iteracja pêtli for:
			4 <= 5, 
			10 % 4, jest reszta	
			
		4. Iteracja pêtli for:
			5 <= 5, 
			10 % 5, brak reszty	
			
		1.Krok, brak reszty, funkcja zwraca FALSE	
	*/
	/*
		Np. dla 7
		a = 7
		1. Iteracja pêtli for:
			2 <= 3.5, 
			7 % 2, jest reszta
			
		2. Iteracja pêtli for:
			3 <= 3.5, 
			7 % 3, jest reszta
			
		3. Iteracja pêtli for:
			4 <= 3.5, 
			koniec	
			
		Funkcja zwraca TRUE, zawsze jest reszta.	
	*/
	for (unsigned int i = 2; i <= sqrt(a); i++) // unsigned int - bezznakowe int, czyli tylko dodatnie (znak = -)
	{
		if(!(a % i)) // dzielenie modulo, sprawdzanie, czy dzielenie daje reszte.
			return false;
	}
	
	return true;
}
