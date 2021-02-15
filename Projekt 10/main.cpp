#include <iostream>
#include <string>
#include "integer.h"

using namespace std;

int main(int argc, char** argv) 
{
	/*
		Kurs cz.48 Konstruktor konwertuj¹cy i przeci¹¿anie operatorów
	*/
	int a = 10;
	int b = 20;
	
	cout << "Nie ma problemu, dane tego samego typu a + b: " << endl;
	cout << a + b << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	a = 10;
	double c = 40.5;
	cout << "int a + double c: " << endl;
	cout << a + c << endl;	
	cout << "W tym przypadku zachodzi niejawna konwersja - rzutowanie" << endl;
	cout << "czyli zostal wywolany konstruktor konwertujacy" << endl;
	
	
	
	
	
	string napis = "cosik";
	string napisek = napis + " cos nowego";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	cout << "Polaczenie string: " << endl;
	cout << napisek << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
	
	
	
	
	
	Integer mojInt;
	int d = 191;
	mojInt = d;
	cout << "Konwersja int -> Integer: " << endl;
	cout << mojInt.getLiczba() << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	cout << "Tak naprawde dokonuje sie konwersja niejawna: " << endl;
	cout << "mojInt = static_cast<Integer>(d)" << endl;	
	cout << "Operator rzutowania zostal okreslony w jedna strone: " << endl;	
	cout << "W ta niezadziala: d = mojInt" << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	cout << "Funkcja operatorowa: " << endl;	
	cout << "zadziala: d = mojInt"  << endl;
	cout << "niejawna konwersja: d = (int)mojInt"  << endl;	
	int e = mojInt;
	cout << e << endl;
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	mojInt = a + mojInt;
	cout << "mojInt = a + mojInt; : " << endl;	
	cout << "a, mojInt, zaszla niejawna konwersja " << endl;	
	cout << "201: "  << endl;
	cout << mojInt << endl;			
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	cout << "Operator +=: " << endl;	
	cout << "	mojInt += 5; nie zostal okreslony " << endl;		
	//mojInt += 5;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout << "Operator +=: " << endl;	
	cout << "	mojInt += 5; zostal okreslony " << endl;		
	mojInt += 5;	
	cout << mojInt << endl;	
	
	mojInt.operator+=(20);
	cout << "Operator +=: " << endl;	
	cout << "mojInt.operator+=(20); 226: " << endl;	
	cout << mojInt << endl;	
	
	
	system("PAUSE");
	return 0;
}
