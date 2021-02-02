#include <iostream>
#include <string>

using namespace std;
main()
{	
	int a, b;

	cout << "Wczytanie a: " << "\n";
    cin >> a;
	cout << "Wczytanie a: " << "\n";
	cout << a << endl;	
	
	string imie, nazwisko;
	cout << "Podaj imie: " << "\n";
	cin >> imie;	
	cout << "Podaj nazwisko: " << "\n";
	cin >> nazwisko;
	cout << "Wczytanie imienia i nazwiska: " << "\n";
	cout << imie + " " + nazwisko << endl;	
	
	
	cout << "Podaj imie drugi raz: " << "\n";
	cin >> imie;	
	cout << "Podaj nazwisko drugi raz: " << "\n";
	cin >> nazwisko;
	cout << "Wczytanie imienia i nazwiska drugi raz: " << "\n";
	cout << imie + " " + nazwisko << endl;	
	
	
	// 7.4 poda samo 7, wartoœci znaków, je¿eli wpiszemy np. k
	cout << "Podaj int b: " << "\n";
	cin >> b;
	cout << "Wczytanie int b: " << "\n";
	cout << b << endl;
	// double b = znaki bêd¹ mia³y jeszcze inne wartoœci ni¿ w int b
	// 7.6 poda z przecinkiem.
	// string b = liczbe jako string, bez mo¿liwoœci operacji arytmetycznych
	// Jakiœ convert by siê przyda³
	// ale:
	double dodaj1;
	float dodaj2;
	cout << "Podaj liczbe do dodania: " << "\n";
	cin >> dodaj1;	
	cout << "Podaj liczbe do dodania: " << "\n";
	cin >> dodaj2;	
	cout << "a + b: " << "\n";
	cout << dodaj1 + dodaj2 << endl;	
	
	system("pause");
}
