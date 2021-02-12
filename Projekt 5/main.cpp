#include <iostream>
#include "uzytkownik.h"

using namespace std;

int main(int argc, char** argv) 
{
	/*
		Statyczne zmienne oraz funkcje to s¹ takie, które s¹ wspó³dzielone
		przez wszystkie instancje klas.
		Czyli jak przy zmiennych statycznych, raz zarezerwowane miejsce w pamiêci i póŸniejsze instacje
		klas odwo³uj¹ siê do tych miejsc.
	*/
	/*
		Dwie instancje klasy Uzytkownik.
		Ka¿da instancja ma swoje zmienne, swój oddzielny œwiat.
		static int counter; istnieje nawet gdy nie ma ¿adnej instancji klasy.
		Wspó³dzielona wartoœæ dla ka¿dego obiektu (instancji).
		ID = counter - inne ID dla ka¿dego obiektu (instancji).
		statyczna funkcja tak samo siê zachowuje.
	*/
	Uzytkownik user;
	Uzytkownik user2;
	Uzytkownik user3[20];
	
	cout << "Dwie instancje, takie same ID:" << endl;
	cout << "[1-wsza instancja] user: " << endl;
	cout << user.getID() << endl;
	cout << "[2-ga instancja] user2: " << endl;
	cout << user2.getID() << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	
	
	
	cout << "Dwie instancje, rozne ID:" << endl;
	cout << "[1-wsza instancja] user: " << endl;
	cout << user.getID2() << endl;
	cout << "[2-ga instancja] user2: " << endl;
	cout << user2.getID2() << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	
	cout << "[3-cia instancja] user3: " << endl;
	for (int i = 0; i < 21; i++)
	{
		cout << "Uzytkownik nr: " << (i + 1) << " posiada ID: " << user3[i].getID2() << endl;
	}
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
	// W ka¿dej chwili mo¿emy sprawdziæ counter'a, jest publiczny.
	// :: Zasiêg, symbol zasiêgania.
	// Counter nie powinien byæ publiczny w innej klasie, nic nie powinno byæ publiczne ze
	// zmiennych.	
	
	
	// Je¿eli pod Uzytkownik:: i CTRL + Spacja pokazuje ID do wyboru, to jest b³¹d kompilatora.
	cout << "Wartosc counter'a user3[0]: " << endl;
	cout << user3[0].getCounter() << endl;
	cout << "Wartosc counter'a Uzytkownik::getCounter(): " << endl;
	cout << Uzytkownik::getCounter() << endl;	
	
	
	
	system("PAUSE");
	return 0;
}
