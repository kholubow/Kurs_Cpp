#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
		in: Slowo
		out: owolS
		
		Wykorzystanie faktu, i¿ string to tablica typu char, string - ci¹g znaków.
		
		i = podajSlowo.length() - 1, bo ostatni znak to znak koñca linii \0
	*/
	string slowo = "Slowo", podajSlowo;
	
	cout << "slowo[0]: " << slowo[0] << endl;
	cout << "slowo[1]: " << slowo[1] << endl;
	cout << "slowo[2]: " << slowo[2] << endl;
	cout << "slowo[3]: " << slowo[3] << endl;
	cout << "slowo[4]: " << slowo[4] << endl;
	
	cout << "A chcemy uzyskac: " << endl;
	
	cout << "slowo[4]: " << slowo[4] << endl;
	cout << "slowo[3]: " << slowo[3] << endl;
	cout << "slowo[2]: " << slowo[2] << endl;
	cout << "slowo[1]: " << slowo[1] << endl;
	cout << "slowo[0]: " << slowo[0] << endl;
	
	cout << "Petla for, i = 4: " << endl;
	
	for (int i = 4; i >= 0; i--)
		cout << slowo[i];
	
	cout << endl;
	cout << "Podaj slowo to wypisania wspak: " << endl;
	cin >> podajSlowo;
	cin.ignore();
	
	cout << "Wspak: " << endl;
	for (int i = podajSlowo.length() - 1; i >= 0; i--)
		cout << podajSlowo[i];	
	

	getchar();
	system("PAUSE");
	return 0;
}
