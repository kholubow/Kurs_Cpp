#include "test.h"

void A::ustawTajne(B & obj, int wart)
{
	obj.tajne = wart;
}

void B::ustawTajniejsze(A & obj, int wart)
{
	obj.tajniejsze = wart;
}

int B::pobierzTajne()
{
	return tajne;
}

int A::pobierzTajniejsze()
{
	return tajniejsze;
}
