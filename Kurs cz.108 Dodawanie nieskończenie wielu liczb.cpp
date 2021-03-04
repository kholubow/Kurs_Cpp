#include <iostream>

using namespace std;

int main()
{
	/*
		
	*/
	int suma = 0, n;
	
	cout << "Podawaj liczby do dodania, 0 = koniec" << endl;
	do
	{
		
		cin >> n;
		cin.ignore();
		
		suma += n;
		
	}while(n != 0);
	
	cout << "Wynik dodawania = " << suma << endl;
	
	getchar();
	system("PAUSE");
	return 0;
}
