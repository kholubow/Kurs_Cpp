#include <iostream>

using namespace std;

main()
{
	// Z ilu cyfr sk³ada siê dana liczba?
	int n = 1234274691, ilCyfr = 1;
	
	cout << 1234 / 10.0 << endl;
	cout << 1234 / 10 << endl;
	
	
	cout << 1234 / 10 << endl;
	cout << 123 / 10 << endl;
	cout << 12 / 10 << endl;
	cout << 1 / 10 << endl;
	
	int tmp = n;
	// dla 1234 wykona siê trzy razy
	while (tmp /= 10) // n = n / 10;
		ilCyfr++;
		
	
	cout << "Liczba: " << n << " sklada sie z " << ilCyfr << " cyfr" << endl;
	
	
	// Pêtla w pêtli
	// Tabliczka mno¿enia
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       10 x 10      |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			// Ustawienie szerokoœci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       20 x 20      |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= 20; j++)
		{
			// Ustawienie szerokoœci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "             ----------------------" << endl;
	cout << "             |                    |" << endl;
	cout << "             |      Tabliczka     |" << endl;
	cout << "             |      mnozenia      |" << endl;
	cout << "             |       32 x 32      |" << endl;
	cout << "             ----------------------" << endl;
	for (int i = 1; i <= 32; i++)
	{
		for (int j = 1; j <= 32; j++)
		{
			// Ustawienie szerokoœci od jednej liczby do drugiej. Funkcja width()
			cout.width(5);
			cout << i * j;
		}	
		cout << endl;
	}
	
	
	system("pause");
}
