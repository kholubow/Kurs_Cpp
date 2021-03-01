#include <iostream>

using namespace std;

int NWD(int, int); // Deklaracja funkcji, zwraca typ int. Dwa parametry.

int main()
{
	/*
		Znajdowanie najwiêkszego wspólnego dzielnika
		NWD - liczba naturalna, która dzieli obie liczby w sposób taki, ¿e nie ma reszty.
		
		Dopóki a != b
		
		Np. 10 i 5
		
		10 > 5 tak
		a = 5
		a == b
		return 5
		
		
		
		Lub 
		Np. 150, 80 = 10
		150 != 80 tak
		a > b tak
		a = 150 - 80 = 70
		a < b
		70 < 80
		b = 80 - 70
		b = 10
		
		
		
		a = 70, b = 10
		a > b
		a = 70 - 10
		a = 60
		
		
		a != b nadal
		a = 60, b = 10
		a > b
		a = 60 - 10
		a = 50
		
		
		a != b nadal
		a = 50, b = 10		
		a = 50 - 10
		a = 40
		
		a != b nadal
		a = 40, b = 10
		
		30
		20
		10
		a == b
		a = 10
		return a
	*/	
	int a, b;
	
	cout << "Podaj dwie liczby, z ktorych mam znalesc NWD: " << endl;
	cin >> a >> b;
	cin.ignore();
	
	cout << NWD(a,b) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

int NWD(int a, int b) // Definicja funkcji zwracaj¹cej a typu int
{
	while(a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;	
	}
	
	return a;
}
