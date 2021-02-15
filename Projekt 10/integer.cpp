#include "integer.h"

Integer::Integer(int liczba)
{
	// Zamienia int na typ Integer
	// nazwa parametru taka sama co nazwa zmiennej dla klasy (jej instancji), wiêc this->
	// jest to podpowiedŸ dla kompilatora, ¿e chodzi o adres zmiennej dla akurat tego
	// obiektu/instancji klasy.
	this->liczba = liczba;
}

int Integer::getLiczba()
{
	return this->liczba;
}

Integer::operator int()
{
	return this->liczba;
}

int Integer::operator+=(Integer o)
{
	this->liczba = this->liczba + o.getLiczba();
	return this->liczba;
}
