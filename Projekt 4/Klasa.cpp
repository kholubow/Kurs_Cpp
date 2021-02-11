#include "Klasa.h"
#include <iostream>

using namespace std;

unsigned short Dane_czlowieka_class::getWiekND() // Definicja, funkcja zwraca bezznakowy (dodatni) short int (int w domyœle)
{
	return wiek_class;
}

// :: - operator zasiêgu.
void Dane_czlowieka_class::setWiekND(unsigned short age) // Definicja, procedura (nie zwraca nic), tylko ustawia.
{
	wiek_class = age;
}

// Konstruktor wywo³uje siê podczas tworzenia.
// Nadawanie pocz¹tkowych wartoœci.
Dane_czlowieka_class::Dane_czlowieka_class()
{
	// Ze zmiennych globalnych nie powinno siê korzystaæ
	// zmienna statyczna = pamiêæ na t¹ zmienn¹ zostanie zarezerwowana tylko raz.
	static int i = 1;
	cout << "Konstruktor zostal wywolany poraz: " << i++ << endl;
	
	cout << "Zostal wywolany konstruktor w Klasa.cpp" << endl;
	wiek_class = 20;
	cout << "Poczatkowa wartosc wieku: " << endl;	
	cout << wiek_class << endl;
}

Dane_czlowieka_class::Dane_czlowieka_class(int age)
{
	wiek_class = age;
}

// Destruktor
Dane_czlowieka_class::~Dane_czlowieka_class()
{
	static int j = 1;
	cout << "Destruktor zostal wywolany poraz: " << j++ << endl;
	
	cout << "Zostal wywolany destruktor w Klasa.cpp" << endl;
}
