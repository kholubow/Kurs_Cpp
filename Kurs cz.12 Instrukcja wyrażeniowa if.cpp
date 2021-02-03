#include <iostream>
#include <string>

using namespace std;
main()
{
	int a = 11, b = 10, c, d;
	
	
	// warunek ? je¿eli warunek jest prawdziwy, ró¿ny od 0, to instrukcja : w innym wypadku to tutaj.
	string nazwa = a > b ? "a jest wieksze od b" : "a jest mniejsze od b, badz rowne b";
	
	cout << nazwa << endl;
	
	cout << (1 > 4 ? 4 : 7) << endl;
	// Wykorzystywanie tego w operacjach arytmetycznych
	cout << (1 > 4 ? 4 : 7) + 10<< endl;
	
	
    cout << "Podaj liczbe c: " << "\n";
	cin >> c;
    cout << "Podaj liczbe d: " << "\n";
	cin >> d;
	cout << (c > d ? 5 : 10) + 10<< endl;
	
	system("pause");
}
