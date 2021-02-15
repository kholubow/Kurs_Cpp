#include <iostream> // <>, okreœlona lokalizacja w ustawieniach kompilatora.
#include "punkt.h" // Kompilator wie, ¿e "" plik jest w tym samym katalogu, co projekt.

using namespace std;


void operacjeNaPunktach(); // Deklaracja procedury
int main(int argc, char** argv) 
{
	/*
		Kurs cz.49 Dziedziczenie klas
		
		
		
	*/
	operacjeNaPunktach();
	
	
	system("PAUSE");
	return 0;
}

void operacjeNaPunktach()// Definicja procedury
{
	Punkt punkt; // wywo³any konstruktor i destruktor z klasy Punkt.
	// Klasa bazowa dzia³a niezale¿nie z klas¹ pochodn¹.
	// Je¿eli sama klasa pochodna bêdzie to zostanie pierw wywo³any konstruktor z klasy
	// bazowej.
	Punkt2D punkt2d(10,101);
	// Pierw x = 145, ale potem klasa pochodna nadpisze na 10
	// Przy destruktorze pierw wywo³ywane s¹ te z klas pochodnych a na koniec z bazowych.
	
	
	
	cout << "x: ";
	cout << punkt2d.getX() << endl;
}
