#include <iostream>

using namespace std;
// Nazwa zmiennej = etykieta
// liczba = etykieta
main()
{	
    int liczba; // int - liczby ca³kowite, podzbiór a nie zbiór liczb ca³kowitych, zakres: -2mld do 2mld
    // liczba = 100; 4 bajty dla int
    // Ka¿da zmienna ma adres
    // & = odwo³anie do adresu przechowuj¹cego wartoœæ zmiennej liczba
    // &liczba;
    
    // Inicjalizacja = od razu przypisanie wartoœci
    int liczba2 = 10;
	cout << liczba2 << " " << "\n";
	
	liczba2 = 100;
	cout << liczba2 << " " << "\n";
	// £¹czenie wielu rzeczy na wyjœcie = wiele razy <<
	/* Czego ze zmiennymi nie mo¿emy zrobiæ:
	   1. Podaæ na pocz¹tku liczby np.
     		int 54liczba;
       2. Bez polskich znaków:
			int ¥ŒÆ;
	   3. Robiæ spacji w nazwie zmiennej:
			int as spacja as
	 ale mo¿na wtedy: 
			int liczba_pierwsza;
			int liczbaPierwsza;
			int nLiczbaPierwsza; n - number
			
		Zmienne nazwa od ma³ej litery
	*/
	system("pause");
}
