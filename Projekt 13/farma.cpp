#include <iostream>
#include "farma.h"

using namespace std;

Zwierze::~Zwierze()
{
	cout << "[Destruktor z klasy bazowej: Zwierze]" << endl;
}

Mucka::~Mucka()
{
	cout << "[Destruktor z klasy pochodnej: Mucka]" << endl;
}

Pies::~Pies()
{
	cout << "[Destruktor z klasy pochodnej: Pies]" << endl;
}

Kogut::~Kogut()
{
	cout << "[Destruktor z klasy pochodnej: Kogut]" << endl;
}
/*
	Klasa abstrakcyjna - bardzo wysoko po³o¿ona.
*/
void Zwierze::dajGlos()
{
	cout << "[Klasa: Zwierze, metoda/procedura dajGlos] Glos zwierze" << endl;
}

void Mucka::dajGlos()
{
	cout << "[Klasa: Mucka, metoda/procedura dajGlos] Glos mucka" << endl;
}

void Pies::dajGlos()
{
	cout << "[Klasa: Pies, metoda/procedura dajGlos] Glos pies" << endl;
}

void Kogut::dajGlos()
{
	cout << "[Klasa: Kogut, metoda/procedura dajGlos] Glos kogut" << endl;
}
