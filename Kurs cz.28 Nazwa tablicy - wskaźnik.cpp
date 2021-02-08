#include <iostream>

using namespace std;


int main()
{
	/*
		W jaki sposób wskaŸniki powi¹zane s¹ z tablicami?
		- Nazwa tablicy jest wskaŸnikiem
	*/
	// 12 bajtów pamiêci
	// 3 * 4 bajty na ka¿dy int
	int a[3];
	a[0] = 0;
	a[1] = 20;
	a[2] = 40;
	// 2 bajty
	short int zm;
	int * const wsk = &a[0];
	// double zajmuje 8 bajtów.
	// float zajmuje 4 bajty.
	
	
	cout << "Adres jako a tablica: " << endl;
	cout << a << endl;
	cout << "a[0] = " << &a[0] << endl;
	cout << "a[1] = " << &a[1] << endl;
	cout << "a[2] = " << &a[2] << endl;
	cout << "*wsk na element a[0]: " << wsk << endl;
	// Adres 1-wszego elementu tablicy jest taki sam jak tablicy.
	// Czyli a jest wskaŸnikiem, poniewa¿ jako wartoœæ przechowuje adres w pamiêci do tablicy.
	// do 1-wszego elementu, czyli do pocz¹tku tablicy
	// Dodatkowo a jest wskaŸnikiem const.
	// Nie mo¿emy zmieniæ przypisanego adresu jako wartoœæ a
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Adres tablicy, samo a, taki sam, jak 1-wszego elementu tablicy a: "   << a     << endl;
	cout << "2-gi element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 1: " << a + 1 << endl;
	cout << "3-ci element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 2: " << a + 2 << endl;
	cout << "Mozemy wyjsc poza zakres tablicy: " << a + 3 << endl;
	// Pokazujemy adresy nastêpnych zmiennych jak wyjdziemy poza zakres tablicy.
	// Mo¿e byæ to zmienna z naszego programu albo z innego.
	// Podczas próby zmiany takiego adresu zmiennej z innego programu system operacyjny
	// reaguje i wy³¹cza program.
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Takie same adresy jak wyzej. Wyluskiwanie wartosci z adresow: "       << *a       << endl;
	cout << "2-gi element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 1: " << *(a + 1) << endl;
	cout << "3-ci element tablicy a. Po wskaznikach mozemy sie przesuwac, a + 2: " << *(a + 2) << endl;
	cout << "Mozemy wyjsc poza zakres tablicy: " << *(a + 3) << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// WskaŸniki przypomnienie:
	// a = przechowywany adres przez a.
	// &a = adres wskaŸnika a.
	// *a = wy³uskana wartoœæ kryj¹ca siê pod adresem przechowywanym przez a.
	// Tablica - wskaŸnik a - sta³y - nie mo¿na modyfikowaæ jego adresu, który przechowuje.
	// a ++ = b³¹d.
	cout << "Wartosci w tablicy a, 2 zapisy na odczyt: " << endl;
	cout << "a[0] = " << a[0] << endl;
	cout << "a[1] = " << a[1] << endl;
	cout << "a[2] = " << a[2] << endl;
	cout << "To samo co: " << endl;
	cout << "*a = " << *a << endl;
	cout << "*(a + 1) = " << *(a + 1) << endl;
	cout << "*(a + 2) = " << *(a + 2) << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
	// a ju¿ wskazuje na 1-wszy element, teraz dodatkowo jest p.
	int * p = &a[0]; // to samo co int * p = a;
	cout << "*p=0: "     << *p   << endl;
	cout << "++*p=1: "   << ++*p << endl;
	cout << "*++p=20: "  << *++p << endl;
	cout << "*p++=20: "  << *p++ << endl;
	cout << "*p=40: "    << *p   << endl;
	/*
	PREinkrementacja
		++*p
			Inkrementuje zawartoœæ pod p, pod adresem przechowywanym jako p
		*++p
			Pobranie zawartoœci kryj¹cej siê pod przechowywanym adresem p+1
	POSTinkrementacja
		*p++
			Pobranie zawartoœci kryj¹cej siê pod przechowywanym adresem p+1
		*p ponownie
			po dwóch inkrementacjach wskazuje ju¿ 40, 3-ci element tablicy a
	*/
	
	/*
		WskaŸniki "wiedz¹" na jaki typ danych wskazuj¹, dzieki czemu, je¿eli 
		inkrementujemy wskaŸnik typu int, bêdzie on przesuwa³ siê od razu o ca³e
		4 bajty, je¿eli short int to o 2 bajty, je¿eli double to o 8 bajtów.
	*/
	
	
	system("pause");
	return 0;
}
