#include "Kopiarka.h"


Kopiarka::Kopiarka(int x, int y)
{
	this->x = x; 
	this->y = y; 
}

Kopiarka::Kopiarka(int x, int y, int wart)
{
	/*
		Zmienne w klasie i u¿ywane z zewn¹trz nazywaj¹ siê tak samo, wiêc trzeba
		podpowiedzieæ kompilatorowi, o jakie x i y chodzi
		this-> wskaŸnik na konkretne miejsce w pamiêci przechowuj¹ce wartoœci x i y nale¿¹ce
		do klasy akurat tej instancji.
		this-> dzia³a z jednoczesnym wy³uskaniem wartoœci.
	*/
	/*
		Wartoœæ wart z zewn¹trz staje siê rozmiarem dynamicznie przydzielanego miejsca (tablicy)
		w pamiêci new int(wart). wsk w klasie Kopiarka bêdzie wskazywaæ na to miejsce.
		Wartoœci¹ przechowywan¹ przez wskaŸnik jest adres przechowywanego miejsca.
		delete wsk - zwolnienie tej pamiêci.
	*/
	this->x = x; 
	this->y = y;
	this->wsk = new int(wart); 
}

// Kopiowanie obj, instancji klasy Kopiarka (typu), wtedy wskaŸnik na adres zostaje te¿ skopiowany do
// nowego adresu (jego wartoœæ), wiêc new int i przekazanie wy³uskanej wartoœci z kopiowanego obiektu.
// Kopia wskazuje na zupe³nie inny adres w pamiêci ju¿.
// ale wartoœæ zachowana.
Kopiarka::Kopiarka(const Kopiarka & obj)
{
	this->wsk = new int(*(obj.wsk));
	this->x = obj.x;
	this->y = obj.y;
}

Kopiarka::~Kopiarka()
{
	delete wsk;
}
