#include <iostream>

using namespace std;

int zm = 404;
int zmiennaGlobalna = zm; // Na ca³ym terenie programu.
int zm2;
int zmiennaGlobalna2 = zm2; // Na ca³ym terenie programu.
// Po rezerwacji miejsca w pamiêci zmienne globalne s¹ automatycznie zerowane.
// Je¿eli nie podamy od razu wartoœci.
main()
{
	int zmiennaLokalna; // Nale¿y tylko do main()
	// nie zeruje wartoœci
	int a = 10;
	
	if (a == 10)
	{
		int wynik = a * 10;
		cout << "Wynik w if'ie: " << wynik << endl; 
	}
	// int wynik mo¿e zostaæ wypisany tylko w "swoim œrodowisku"
	// lub g³êbiej ale nie na zewn¹trz
	// cout << wynik << endl; 
	
	
	
	
	cout << "Zmienna globalna 404: " << zmiennaGlobalna << endl;
	cout << "Zmienna globalna2 zm2: " << zmiennaGlobalna2 << endl;
	cout << "Zmienna lokalna: " << zmiennaLokalna << endl;
	
	
	// Deklaracja int i = 0 w pêtli for = nie mo¿na wypisaæ, ile liczb dodano ni¿ej.
	// Pêtla nieskoñczona
	// for(;;)
	// {
	//
	// }
	// Zmienne s¹ dostêpne od tego miejsca, gdzie siê je zdefiniowa³o.
	// Poniewa¿ kompilator czyta kod od góry do do³u.
	int liczba, wynik = 0;
	// cout << i;
	int i = 0;
	for (i; i < 3; i++)
	{
		cout << "Podaj liczbe numer " << i+1 << ": " << endl;
		cin >> liczba;
		
		wynik += liczba;
	}
	cout << "Wynik dodawania: " << wynik << endl;
	cout << "Dodano: " << i << " liczb"<<endl;
	
	
	
	system("pause");
}
