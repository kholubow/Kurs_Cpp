#include <iostream>
#include "test.h"

using namespace std;

int main(int argc, char** argv) 
{
	/*
		Tak samo jak klasa okreœla, które zewnêtrzne funkcje / procedury s¹ jej przyjacielami i daje dostêp
		do swoich zmiennych prywatnych tak samo dana klasa mo¿e powiedzieæ, która inna zewn¹trzna
		klasa jest jej przyjacielem.
	*/
	
	A objA;
	B objB;
	// Klasa A mo¿e zmieniaæ wartoœæ prywatn¹ w klasie B, na 50, bo jest jej przyjacielem.
	// Ale Klasa A nie uwa¿a klasy B za przyjaciela, czyli z poziomu klasy B nic nie zmienimy w wartoœciach
	// zmiennych prywatnych klasy A.
	// Potem zmienione na to, ¿e klasa A uwa¿a ju¿ klasê B za przyjaciela.
	
	objA.ustawTajne(objB, 50);
	
	cout << objB.pobierzTajne() << endl;
	
	objB.ustawTajniejsze(objA, 120);
	
	cout << objA.pobierzTajniejsze() << endl;
	
	system("PAUSE");
	return 0;
}
