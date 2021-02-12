// Deklaracje
#include "uzytkownik.h"

Uzytkownik::Uzytkownik()
{
	counter++;
	ID = 5;	
	ID2 = counter;
}

Uzytkownik::~Uzytkownik()
{
	
}

int Uzytkownik::getID()
{
	return ID;
}

int Uzytkownik::getID2()
{
	return ID2;
}

int Uzytkownik::getCounter()
{
	return counter;
}

int Uzytkownik::counter = 0;
