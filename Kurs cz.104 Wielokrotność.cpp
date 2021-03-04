#include <iostream>

using namespace std;

int main()
{
	/*
		Sprawdzanie dwóch liczb, czy dana liczba jest wielokrotnoœci¹ drugiej.
		Mo¿emy otrzymaæ poprzez pierwsz¹ liczbê nastêpn¹ liczbê, gdy j¹ pomno¿ymy przez liczbê naturaln¹.
		np.
		9 = 3 * 3
		Czyli 3 jest wielokrotnoœci¹ liczby 9.
		27 = 3 * 3 * 3
		3 te¿ jest wielokrotnoœci¹ liczby 27.
		
		Do sprawdzania w programie, modulo
		bo np. 9 % 3 == 0.
		
		Czyli, je¿eli z dzielenia modulo nie ma reszty, to znaczy, ¿e liczba jest wielokrotnoœci¹ liczby
		nastêpnej.
	*/	
	int a, b;
	
	cout << "Podaj 1 i 2 liczbe: " << endl;
	cin >> a >> b;
	cin.ignore();
	
	if(a % b == 0)
		cout << a << " jest wielokrotnoscia liczby " << b << endl;
	else
		cout << a << " nie jest wielokrotnoscia liczby " << b << endl;


	getchar();
	system("PAUSE");
	return 0;
}
