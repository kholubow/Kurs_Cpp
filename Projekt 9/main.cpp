#include <iostream>
#include "Kopiarka.h"

using namespace std;

int main(int argc, char** argv) 
{
	/*
		Kurs cz.47 Konstruktor kopiuj¹cy 
	*/
	int a = 10;
	int b = a; // To nie jest referencja na a, wartoœæ pocz¹tkowa a jest przechowywana w innym miejscu w pamiêci (zmienna b).
	
	a = 40;
	
	cout << "Wartosci a = 40, b = 10: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	Kopiarka obj(10, 20); // obj = obiekt = instancja klasy
	Kopiarka obj2 = obj; // Jest to robota konstruktora niejawnego, tzw. konstruktor kopiuj¹cy.
	// Przypisywanie do siebie obiektów pochodz¹cych z instancji tej samej klasy.
	
	
	/*
		Taki konstruktor niejawny dzia³a do momentu utworzenia wskaŸnika w klasie Kopiarka.
		
	*/
	
	cout << "Kopiarka obj(10, 20); " << endl;
	cout << "obj.x(10) = " <<  obj.x << endl;
	cout << "obj.y(20) = " <<  obj.y << endl;
	
	cout << "Kopiarka obj2 = obj; " << endl;
	cout << "obj2.x(10) = " <<  obj2.x << endl;
	cout << "obj2.y(20) = " <<  obj2.y << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
		

	Kopiarka obj3(15, 200, 9);
	Kopiarka obj4 = obj3;
	// Instancje klasy, obiekty, powinny byæ osobne, wiêc po drodze powinniœmy móc
	// modyfikowaæ ich przechowywane wartoœci:
	// obj3.x = 50; po przekopiowaniu obiektu na drugi obiekt tylko w obj3.x dochodzi do zmiany, 
	// czyli faktycznie s¹ one oddzielne i niezale¿ne np. na zmiany w przysz³oœci, ale zmiany na
	// wsk powoduj¹ zmiany wszêdzie bo wsk wskazuj¹ na ten sam adres pomimo pochodzenia wsk z 
	// innych instancji.
	obj3.x = 50;	
	cout << "Kopiarka obj3(15, 200, 9); " << endl;
	cout << "obj3.x(15) = "             <<  obj3.x      << endl;
	cout << "obj3.y(200) = "            <<  obj3.y      << endl;
	cout << "obj3.wsk(9)[Adres] = "     <<  obj3.wsk    << endl;
	cout << "obj3.wsk(9)[Wartosc] = "   <<  *(obj3.wsk) << endl;
	cout << endl;
	cout << "Kopiarka obj4 = obj3; " << endl;
	cout << "obj4.x(15) = "             <<  obj4.x      << endl;
	cout << "obj4.y(200) = "            <<  obj4.y      << endl;	
	cout << "obj4.wsk(9)[Adres] = "     <<  obj4.wsk    << endl;
	cout << "obj4.wsk(9)[Wartosc] = "   <<  *(obj4.wsk) << endl;
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
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	*(obj3.wsk) = 10200;	
	cout << "Kopiarka obj3(15, 200, 9); " << endl;
	cout << "obj3.x(15) = "             <<  obj3.x      << endl;
	cout << "obj3.y(200) = "            <<  obj3.y      << endl;
	cout << "obj3.wsk(9)[Adres] = "     <<  obj3.wsk    << endl;
	cout << "obj3.wsk(9)[Wartosc] = "   <<  *(obj3.wsk) << endl;
	cout << endl;
	cout << "Kopiarka obj4 = obj3; " << endl;
	cout << "obj4.x(15) = "             <<  obj4.x      << endl;
	cout << "obj4.y(200) = "            <<  obj4.y      << endl;	
	cout << "obj4.wsk(9)[Adres] = "     <<  obj4.wsk    << endl;
	cout << "obj4.wsk(9)[Wartosc] = "   <<  *(obj4.wsk) << endl;	

	// Czyli trzeba stworzyæ w³asny konstruktor kopiuj¹cy,
	// bo ten niejawny kopiuje dos³ownie wszystko, skopiowa³ wsk, dobrze co prawda, ale
	// ten sam adres (wskaŸnik przechowuje adres wiêc go dos³ownie skopiowa³), czyli w sumie
	// robi kopiê modyfikuj¹c¹ orygina³ w przysz³oœci.
	
	
	
	system("PAUSE");
	return 0;
}
