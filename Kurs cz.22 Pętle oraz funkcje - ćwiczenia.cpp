#include <iostream>
#define  PI 3.14

using namespace std;
void   initMenuBox    (); // Deklaracja procedury
void   menuDecision   (int); // Deklaracja procedury
double poleKola       (double); // Deklaracja funkcji zwracaj¹cej wartoœæ typu double
double poleKwadratu   (double); 
double poleProstokata (double, double); 
double poleTrojkata   (double, double); 


main()
{
	int wybor;
	char zn = 'T';
	
	
	do
	{
		system("cls"); // cls = clear screen
		initMenuBox();
		cin >> wybor;
		
		menuDecision(wybor);
		
		do
		{
			cout << "Czy chcesz kontynuowac program? (T/N)" << endl;
			cin  >> zn;
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
	double a, b, h, r;
	switch(wybor)
	{
		case 1:
			cout << "Podaj promien (r): " << endl;
			cin  >> r;
			poleKola(r);
			break;
		case 2:
			cout << "Podaj bok (a): " << endl;
			cin  >> a;
			poleKwadratu(a);
			break;
		case 3:
			cout << "Podaj bok (a): " << endl;
			cin  >> a;
			cout << "Podaj bok (b): " << endl;
			cin  >> b;
			poleProstokata(a,b);
			break;
		case 4:
			cout << "Podaj podstawe (a): " << endl;
			cin  >> a;
			cout << "Podaj wysokosc (h): " << endl;
			cin  >> h;
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
