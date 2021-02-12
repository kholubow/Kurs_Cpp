// Definicje
#include <iostream>
#include "position.h"

using namespace std;

Position::Position(int x, int y)
{
	// do x - kompilator u¿ywa wskaŸnik this, na dany obiekt u¿ywany, 
	// wskaŸnik wskazuj¹cy na x bêd¹cy czêœci¹ tej instancji, tego obiektu.
	// Wy³uskanie wartoœci bêd¹cej pod adresem x, zastosowanie this podpowiada dla kompilatora, ¿e
	// chodzi o odwo³anie siê do x bêd¹cego czêœci¹ akurat tej instancji, tego obiektu.
	// Upraszcza robotê, nie trzeba wymyœlaæ du¿o zmiennych.
	(*this).x = x;
	(*this).y = y;
	/*
	Mo¿na te¿ tak:
		this->x = x;
		this->y = y;
	*/
}

Position::~Position()
{
	
}

void Position::getPosition() const
{
	cout << "x: " << (*this).x << endl;
	cout << "y: " << y << endl;
}

void Position::setPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}
