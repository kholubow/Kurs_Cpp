#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
		Przyk³ady palindromów:
			kajak
			ala
			zaraz
			1331
			Anna
			
			
		Czytany wyraz jest taki sam czytany w jedn¹ jak i w drug¹ stronê.
		
		Algorytm sprawdzaj¹cy, czy podane s³owo jest palindromem.
		
		
		Pierwszy znak do porównania z ostatnim itd.
		Œrodkowy jak jest to sam ze sob¹.
		
		Instrukcja break przerywa wykonywanie pêtli, jak ju¿ znajdzie jedn¹ ró¿nicê.
	*/
	string slowo;
	bool palindrom = true;
	
	cin >> slowo;
	cin.ignore();
	
	cout << "Dlugosc slowa (ze znakiem konca linii \\0): " << slowo.length() << endl;
	cout << "Dlugosc slowa (bez znaku konca linii \\0): " << slowo.length() - 1 << endl;


	for(int i = 0; i < slowo.length() / 2; i++)
		if(slowo[i] != slowo[slowo.length() - 1 - i])
		{
			palindrom = false;	
			break;
		}
				



	if(palindrom == true)
		cout << slowo << " jest palindromem" << endl;
	else
		cout << slowo << " nie jest palindromem" << endl;


	getchar();
	system("PAUSE");
	return 0;
}
