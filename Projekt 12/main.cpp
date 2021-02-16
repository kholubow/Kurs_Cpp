#include <iostream>
#include "farma.h"

using namespace std;

void glos(Zwierze *wsk); // Procedura, deklaracja, parametrem jest wskaünik przechowujπcy adres do
// obiektu/instancji typu Zwierze.
void glos(Zwierze &ref); // parametr: referencja, adres do obiektu/instancji.

int main(int argc, char** argv) 
{
	/*
		Kurs cz.50 Polimorfizm, funkcje wirtualne, klasy abstrakcyjne		
	*/
	
	Zwierze animal;
	Mucka cow;
	Pies dog;
	Kogut rooster;
	
	// Zwierze: klasa abstrakcyjna, ale wskaünik moøna uøyÊ
	Zwierze *wsk;
	
	animal.dajGlos();
	cow.dajGlos();
	dog.dajGlos();
	rooster.dajGlos();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Wskaznik przechowujacy adres obiektu,instancji animal klasy Zwierze: " << endl;
	Zwierze *wsk_na_zwierze = &animal;
    wsk_na_zwierze->dajGlos();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	// Klasy pochodne dziedziczπ po klasie bazowej Zwierze, dlatego ten sam wskaünik 
	// moøe wskazywaÊ na niby inne klasy, ale ostatecznie te klasy dziedziczπ klasÍ
	// Zwierze, wiÍc wskaünik moøe byÊ ciπgle typu danych Zwierze.
	cout << "Wskaznik przechowuje wartosc, adres obiektu,instancji cow klasy Mucka." << endl;
	wsk_na_zwierze = &cow;
	wsk_na_zwierze->dajGlos();
	// zawsze wywo≥ywana jest metoda z klasy bazowej.
	// virtual void dajGlos() - dziÍki temu ten sam wskaünik wywo≥a odpowiednie juø funkcje 
	// dla klas pochodnych.
	// Kompilator wtedy szuka, czy przypadkiem coú nie przeciπøa funkcji dajGlos().
	/*
		Polimorfizm - wielopostaciowoúÊ, czyli przy pomocy jednego wskaünika moøemy teraz
		wskazywaÊ na wiele metod z klas pochodnych. (dziedziczπcych z klasy bazowej tej samej).
		Operacje na wskaünikach sπ duøo szybsze od np. referencji.
	*/
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wyslanie adresu do obiektu/instancji typu danych Zwierze do procedury glos: " << endl;
	cout << "Klasy pochodnej od klasy Zwierze: " << endl;
	glos(&rooster);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wyslanie adresu do obiektu/instancji typu danych Zwierze do procedury glos: " << endl;
	cout << "Klasy pochodnej od klasy Zwierze: " << endl;
	glos(&dog);			
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Przekazanie referencji dog do procedury glos: " << endl;
	cout << "Klasy pochodnej od klasy Zwierze: " << endl;
	cout << "Kompilator rozpoznaje, o ktora procedure chodzi - roznica w parametrach: " << endl;
	cout << "Przeciazenie, polimorfizm: " << endl;
	glos(dog);	
	
	
	
	system("PAUSE");
	return 0;
}

void glos(Zwierze *wsk) // Definicja procedury
{
	wsk->dajGlos();
}

void glos(Zwierze &ref)
{
	ref.dajGlos();
}
