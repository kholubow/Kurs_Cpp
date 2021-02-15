#include <iostream>
#include "punkt.h"

using namespace std;

/*
	U¿ywanie operatorów this, ¿eby ci¹gle zwracaæ/odwo³ywaæ siê do x nale¿¹cych do tej 
	instancji/obiektu + podpowiedŸ dla kompilatora w³aœnie taka.
	Powód u¿ycia: taka sama nazwa parametru jak zmiennej.
	ale nie ma co tworzyæ 100 zmiennych.
*/	
Punkt::Punkt(int x)
{
	cout << "Zostal wywolany konstruktor z klasy bazowej - Punkt " << endl;
	this->x = x;
}

Punkt::~Punkt()
{
	cout << "Zostal wywolany destruktor z klasy bazowej - Punkt " << endl;
}

int Punkt::getX()
{
	return this->x;
}

void Punkt::setX(int x)
{
	this->x = x;
}

Punkt2D::Punkt2D(int x, int y) : Punkt(x) // Punkt(x) wywo³anie konstruktora w klasie bazowej.
{
	cout << "Zostal wywolany konstruktor z klasy pochodnej - Punkt2D " << endl;
	this->y = y;
}

Punkt2D::~Punkt2D()
{
	cout << "Zostal wywolany destruktor z klasy pochodnej - Punkt2D " << endl;
}
