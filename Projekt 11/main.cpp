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
	
	cout << "[Punkt] x: ";
	cout << punkt.getX() << endl;		
	cout << "[Punkt2D] x: ";
	cout << punkt2d.getX() << endl;
	cout << "[Punkt2D] y: ";
	cout << punkt2d.getY() << endl;	
	punkt2d.setY(44500);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "po zmianie Y na 44500: " << endl;
	cout << "[Punkt] x: ";
	cout << punkt.getX() << endl;		
	cout << "[Punkt2D] x: ";
	cout << punkt2d.getX() << endl;
	cout << "[Punkt2D] y: ";
	cout << punkt2d.getY() << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;




	punkt2d.setXY(467, 789);
	cout << "po zmianie X na 467, Y na 789: " << endl;
	cout << "[Punkt] x: ";
	cout << punkt.getX() << endl;		
	cout << "[Punkt2D] x: ";
	cout << punkt2d.getX() << endl;
	cout << "[Punkt2D] y: ";
	cout << punkt2d.getY() << endl;	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout << "po zmianie x na 34 w klasie bazowej: " << endl;
	punkt2d.Punkt::setX(34);
	cout << "[Punkt] x: ";
	cout << punkt.getX() << endl;		
	cout << "[Punkt2D] x: ";
	cout << punkt2d.getX() << endl;	
}
