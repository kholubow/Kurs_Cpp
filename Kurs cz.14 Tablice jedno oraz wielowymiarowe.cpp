#include <iostream>

using namespace std;

main()
{
	int tab[4] = {0}, zm, tab2[3][2] = {0}; // TYP PRZECHOWYWANYCH ZMIENNYCH W TABLICY nazwa tablicy i jej rozmiar
	int tab3[4] = {1, 545, 424, 12};
	
	tab[0] = 1;
	tab[1] = 10;
	tab[2] = 9;
	tab[3] = 234;
	// W wielu œrodowiskach indeksowanie jest ustalone od 0
	
	
	cout << "Adresy zmiennej, tablicy: " << "\n";
	cout << "Adres tablicy: "  << &tab << endl;
	cout << "Adres zmiennej: " << &zm  << endl;
	
	cout << "Adres tab[0]: " << &tab[0] << endl;
	cout << "Adres tab[1]: " << &tab[1] << endl;
	cout << "Adres tab[2]: " << &tab[2] << endl;
	cout << "Adres tab[3]: " << &tab[3] << endl;
	
	cout << "Wartosci przechowywane w tablicy: " << "\n";
	cout << "tab[0]: " << tab[0] << endl;
	cout << "tab[1]: " << tab[1] << endl;
	cout << "tab[2]: " << tab[2] << endl;
	cout << "tab[3]: " << tab[3] << endl;
	// Operowanie na typie szesnastkowym HEX
	/*
			HEX
		A = 10
		B = 11
		C = 12
		D = 13
		E = 14
		F =	15
		
		1 2 a = (10 * 16^0) + (2 * 16^1) + (1 * 16^2) = 10 + 32 + 256 = 298
		ampersand = &
	*/

	cout << "Odwolanie sie do adresu elementu w tablicy w inny sposob: " << "\n";
	cout << "Adres tab[0]: " << tab << endl;
	
	
	
	
	// Macierz - tablica 2 - wymiarowa
	cout << "Adresy tablicy 2 wymiarowej: " << "\n";
	cout << "Adres tablicy: "  << &tab2 << endl;
	
	cout << "Adres tab2[0][0]: " << &tab2[0][0] << endl;
	cout << "Adres tab2[0][1]: " << &tab2[0][1] << endl;
	cout << "Adres tab2[1][0]: " << &tab2[1][0] << endl;
	cout << "Adres tab2[1][1]: " << &tab2[1][1] << endl;
	cout << "Adres tab2[2][0]: " << &tab2[2][0] << endl;
	cout << "Adres tab2[2][1]: " << &tab2[2][1] << endl;	
	// Adresy jak mo¿na zauwa¿yæ s¹ pouk³adane po kolei. Ró¿ni siê ich koñcówka tylko.
	// dwa ostatnie elementy adresu.
	// W C++ adresy s¹ mega wa¿ne, poniewa¿ po adresach mo¿na odwo³ywaæ siê najszybciej.
	// = {0} - wyzerowanie wszystkich elementów w tablicy.
	// = {2} - wszystkie elementy w tablicy przyjmuj¹ wartoœæ 2.	
	
	
	cout << "Wartosci przechowywane w tablicy3: " << "\n";
	cout << "tab3[0]: " << tab3[0] << endl;
	cout << "tab3[1]: " << tab3[1] << endl;
	cout << "tab3[2]: " << tab3[2] << endl;
	cout << "tab3[3]: " << tab3[3] << endl;
	
		
	
	
	system("pause");
}
