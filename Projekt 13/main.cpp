#include <iostream>
#include "farma.h"

using namespace std;

void glos(Zwierze *wsk); // Procedura, deklaracja, parametrem jest wskaŸnik przechowuj¹cy adres do
// obiektu/instancji typu Zwierze.
void glos(Zwierze &ref); // parametr: referencja, adres do obiektu/instancji.

int main(int argc, char** argv) 
{
	/*
		Kurs cz.51 Wirtualny destruktor	
		Konstruktory i destruktory s¹ tworzone niejawnie, je¿eli sami ich nie
		napiszemy.
		
		Generalnie jak tworzymy klasê bazow¹ to trzeba ustawiaæ wirtualne jej elementy.
		¯eby kompilator wiedzia³, które metody/funkcje/procedury/konstruktory/destruktory
		wywo³ywaæ, je¿eli odnosi siê to do klasy pochodnej.
	*/
	
	Zwierze animal;
	Mucka cow;
	Pies dog;
	Kogut rooster;
	
	// Zwierze: klasa abstrakcyjna, ale wskaŸnik mo¿na u¿yæ
	// Destruktor z klasy bazowej Zwierze:
	// po dodaniu virtual, z klasy pochodnej Mucka
	// najpierw pochodne, na koniec bazowe
	Zwierze *wsk = new Mucka;
	
	delete wsk;
	
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
	// Klasy pochodne dziedzicz¹ po klasie bazowej Zwierze, dlatego ten sam wskaŸnik 
	// mo¿e wskazywaæ na niby inne klasy, ale ostatecznie te klasy dziedzicz¹ klasê
	// Zwierze, wiêc wskaŸnik mo¿e byæ ci¹gle typu danych Zwierze.
	cout << "Wskaznik przechowuje wartosc, adres obiektu,instancji cow klasy Mucka." << endl;
	wsk_na_zwierze = &cow;
	wsk_na_zwierze->dajGlos();
	// zawsze wywo³ywana jest metoda z klasy bazowej.
	// virtual void dajGlos() - dziêki temu ten sam wskaŸnik wywo³a odpowiednie ju¿ funkcje 
	// dla klas pochodnych.
	// Kompilator wtedy szuka, czy przypadkiem coœ nie przeci¹¿a funkcji dajGlos().
	/*
		Polimorfizm - wielopostaciowoœæ, czyli przy pomocy jednego wskaŸnika mo¿emy teraz
		wskazywaæ na wiele metod z klas pochodnych. (dziedzicz¹cych z klasy bazowej tej samej).
		Operacje na wskaŸnikach s¹ du¿o szybsze od np. referencji.
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
