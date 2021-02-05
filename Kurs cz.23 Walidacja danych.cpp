#include <iostream>
#include <string>
#define  PI 3.14

using namespace std;
void   initMenuBox    (); // Deklaracja procedury
void   menuDecision   (int); // Deklaracja procedury
double poleKola       (double); // Deklaracja funkcji zwracaj¹cej wartoœæ typu double
double poleKwadratu   (double); 
double poleProstokata (double, double); 
double poleTrojkata   (double, double); 
bool   isRight        (string error_msg);
bool   isRight        ();

main()
{
	int wybor;
	char zn = 'T';
	
	
	do
	{
		system("cls"); // cls = clear screen
		initMenuBox();
		
		
		// Instrukcje zawarte w while wykonuj¹ siê do momentu podania prawid³owego wyboru (typ int)
		while(!(cin >> wybor))
		{
			// stan strumienia/bufora
			// stan przed = 4
			// stan po = 0
			cout << "stan przed: " << cin.rdstate() << endl;	
			// Wyczyszczenie stanu, wiêc przechodzi na 0	
			cin.clear();
			cout << "stan po: "    << cin.rdstate() << endl;
			// ignore niweluje poza pierwszym znakiem 1024 po nim, do napotkania entera
			cin.ignore(1024, '\n');
			
			system("cls");
			
			initMenuBox();
			cout << "Wpisales niepoprawny znak, ponow: " << endl;
		}

		
		menuDecision(wybor);
		
		do
		{
			cout << "Czy chcesz kontynuowac program? (T/N)" << endl;
			// Dane id¹ z danego bufora do zn
			// Bufor jest to tymczasowa zmienna a dok³adniej tablica
			// Dlatego podczas walidacji jest brany pod uwagê ostatni znak z ci¹gu
			// asdft - zosta³o wczytane asdf i 4 razy wyœwietlony komunikat, t i jest ok
			cin  >> zn;
			// szukanie ENTER
			// Nie interpretuje ca³ego bufora jak bez tego ignore.
			// asdft i tylko raz wyœwietli pytanie, trzeba podaæ jeden znak t lub T
			// Ignoruje wszystkie znaki oprócz pierwszego
			cin.ignore(1024, '\n');
		}while(zn != 't' && zn != 'T' && zn != 'n' && zn != 'N');
		
	}while(zn == 't' || zn == 'T');
		
	system("pause");
}

void initMenuBox() // Definicja procedury
{
	cout << "Wybierz opcje:      " << endl;
	cout << "1. Pole kola        " << endl;
	cout << "2. Pole kwadratu    " << endl;
	cout << "3. Pole prostokata  " << endl;
	cout << "4. Pole trojkata    " << endl;
}

void menuDecision(int wybor) // Definicja procedury
{
	system("cls");
	initMenuBox();
	
	double a, b, h, r;
	switch(wybor)
	{
		case 1:
			cout << "Podaj promien (r): " << endl;
			// Wykonuj, dopóki nie jest okej, wyœwietl komunikat o b³êdzie
			do { cin  >> r; }while(!isRight("Blad. Podaj promien ponownie: \n"));
			poleKola(r);
			break;
		case 2:
			cout << "Podaj bok (a): " << endl;
			do { cin  >> a; }while(!isRight("Blad. Podaj bok ponownie: \n"));
			poleKwadratu(a);
			break;
		case 3:
			// Komunikat o b³êdzie z przeci¹¿eniem. Polimorfizm
			// Bez komunikatu.
			// Kompilator dziêki temu rozpozna, któr¹ funkcjê z dwóch wywo³aæ.
			do { cout << "Podaj bok (a): " << endl; cin  >> a; }while(!isRight());
			do { cout << "Podaj bok (b): " << endl; cin  >> b; }while(!isRight());
			poleProstokata(a,b);
			break;
		case 4:
			cout << "Podaj podstawe (a): " << endl;
			do { cin  >> a; }while(!isRight("Blad. Podaj podstawe ponownie: \n"));
			cout << "Podaj wysokosc (h): " << endl;
			do { cin  >> h; }while(!isRight("Blad. Podaj wysokosc ponownie: \n"));
			poleTrojkata(a,h);
			break;
		default:
			cout << "Bledna opcja z menu" << endl;
	}
}

double poleKola(double r) // Definicja funkcji zwracaj¹cej wartoœæ typu double
{
	double wynik = PI * r * r;
	
	cout << "Pole kola o promieniu: " << r << " wynosi " << wynik << endl;
	return wynik;
}

double poleKwadratu(double a)
{
	double wynik = a * a;
	
	cout << "Pole kwadratu o boku: " << a << " wynosi " << wynik << endl;
	return wynik;
}

double poleProstokata(double a, double b)
{
	double wynik = a * b;
	
	cout << "Pole prostokata o szerokosci: " << a << " i wysokosci: " << b << " wynosi " << wynik << endl;
	return wynik;	
}

double poleTrojkata(double a, double h)
{
	double wynik = 0.5 * a * h;
	
	cout << "Pole trojkata o podstawie: " << a << " i wysokosci " << h << " wynosi " << wynik << endl;
	return wynik;	
}

bool isRight(string error_msg)
{
	// 0 = prawid³owy status bufora
	if (cin.rdstate())
	{
		cin.clear();
		cin.ignore(1024, '\n');
		system("cls");
		initMenuBox();
		cout << error_msg;
		return false;
	}
	
	return true;
}

bool isRight()
{
	// 0 = prawid³owy status bufora
	if (cin.rdstate())
	{
		cin.clear();
		cin.ignore(1024, '\n');
		system("cls");
		initMenuBox();
		return false;
	}
	
	return true;
}
