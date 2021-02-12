#include <iostream>
#include "position.h"

using namespace std;

void setX(Position &, int); // Deklaracja

int main(int argc, char** argv) 
{
	/*
		Funkcje zaprzyjaŸnione
		ZaprzyjaŸniamy funkcjê setX klasy Position, aby mog³a modyfikowaæ tam wartoœci dla
		danej instancji, obiektu tej klasy.
		
		
		
		
		friend void setX(Position &, int);
		Ustalanie przyjacielskich funkcji / procedur dla klasy.
		Maj¹ wtedy dostêp do zmiennych prywatnych klasy wzglêdem instancji / obiektu.
		Odwo³ujemy siê do referencji obiektu, do jego adresu.
	*/
	cout << "pozycje 40, 50: " << endl;
	Position pies(40, 50); // Obiekt, instancja klasy.
	pies.getPosition();
	
	
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
	
	cout << "pozycje 140, 15035: " << endl;
	pies.setPosition(140, 15035);
	pies.getPosition();
	
	
	
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
	
	
	cout << "dom pozycje 150, 250: " << endl;
	Position dom(150, 250);// 2-gi Obiekt, 2-ga instancja klasy.
	dom.getPosition();
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
	cout << "dom pozycje 290, 12300: " << endl;
	dom.setPosition(290, 12300);
	dom.getPosition();	
	cout << "[setX] dom pozycje 56700, 12300: " << endl;
	setX(dom, 56700);
	dom.getPosition();	
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
	
	
	
	
	const Position blok(78, 99); // Wszystko co siê dzieje w klasie Position jest niedostêpne.
	cout << "blok pozycje 78, 99: " << endl;
	//blok.setPosition(290, 12300); // b³¹d, nie mo¿na ju¿ nic zrobiæ, wszystko w instancji, obiekcie blok klasy Position jest sta³e.
	blok.getPosition();	
	
	system("PAUSE");
	return 0;
}

void setX(Position & obj, int x) // Definicja
{
	// Position obj = dom;
	obj.x = x;
}
