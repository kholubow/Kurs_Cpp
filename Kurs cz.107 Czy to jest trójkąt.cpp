#include <iostream>

using namespace std;

int main()
{
	/*
		Algorytm sprawdzaj¹cy, czy dane boki mog¹ stworzyæ trójk¹t.
		Dwa boki d³u¿sze od tego, który zosta³.
	*/
	int a, b, c;
	
	cout << "Podaj trzy dlugosci do sprawdzenia, czy moga stworzyc trojkat: " << endl;
	cin >> a >> b >> c;
	cin.ignore();
	
	if ((a < b + c) && (b < a + c) && (c < b + a))
		cout << "Boki te moga sluzyc do zbudowania trojkata" << endl;
	else
		cout << "Boki te nie moga sluzyc do zbudowania trojkata" << endl;
	
	
	getchar();
	system("PAUSE");
	return 0;
}
