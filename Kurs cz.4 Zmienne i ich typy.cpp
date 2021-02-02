#include <iostream>
#include <string>

using namespace std;

const string NAZWA_GRY = "Pogromcy C++";
main()
{	
	// TYP_ZMIENNEJ nazwa_zmiennej;
	// TYP_ZMIENNEJ nazwa_zmiennej1, nazwa_zmiennej2, nazwa_zmiennej3, nazwa_zmiennej4;
	int a = 40, b, c = 20;
	cout << "a: " << a << " adres: " << &a << "\n";
	cout << "b: " << b << " adres: " << &b << "\n";
	cout << "c: " << c << " adres: " << &c << "\n";
	// Adresy zmiennych zapisywane s¹ w adnotacji szesnastkowej.
	// Jak do b nie przypisaliœmy wartoœci to odczytuje, co tam ju¿ jest. 
	
	
	// jest jeszcze mniejszy int, czyli short int, zakres: -32768 do 32767, potêgi 2, 2^(8*2), 2 bajty
	short int mniejszy_integer;
	
	
	// Inne typy zmiennych:
	// float - do 38 zer po przecinku od minusa do plusa.
	float zm_zmiennoprzecinkowa = 4.5;
	cout << zm_zmiennoprzecinkowa << "\n";
	zm_zmiennoprzecinkowa = a;
	cout << zm_zmiennoprzecinkowa << "\n";	
	
	zm_zmiennoprzecinkowa = 5.5;
	int d = zm_zmiennoprzecinkowa;
	cout << "Taka konwersja z float do int usuwa to co jest po przecinku: " << "\n";
	cout << d << "\n";
	
	// Dzielenie w locie:
	cout << "Dzielenie w locie: " << "\n";
	cout << 4.5/2 << "\n";
	// dzielenie liczby ca³kowitej przez ca³kowit¹ to wyjdzie ca³kowita. 5/2
	cout << "Dzielenie w locie: " << "\n";
	cout << 5.0/2 << "\n";
	
	
	// Zmienna zmiennoprzecinkowa o wiêkszej prezycji ni¿ float
	// 308 zer od - do +
	double zm_zmiennoprzecinkowa_double;
	
	// char - character - znak
	char znak1 = 'a';
	char znak2 = '4';
	char znak3 = '/';
	cout << "Znak1: " << "\n";
	cout << znak1 << "\n";
	cout << "Znak2: " << "\n";
	cout << znak2 << "\n";
	cout << "Znak3: " << "\n";
	cout << znak3 << "\n";
	
	// wiele znaków na raz, czyli tekst.
	string tekst = "to jest przykladowy tekst";
	cout << "string: " << "\n";
	cout << tekst << "\n";
	cout << tekst << endl; // skoñcz liniê endl - end line
	cout << tekst << endl << endl;
	
	
	string imie = "Imie";
	string nazwisko = "Nazwisko";
	cout << "Imie i nazwisko: " << "\n";
	cout << imie << " " << nazwisko <<"\n";
	cout << imie << " " << nazwisko <<endl;
	
	// ³¹czenie stringów + a nie strumieñ <<
	string imie_oraz_nazwisko = imie + " " + nazwisko;
	cout << "Imie i nazwisko - w jednej zmiennej: " << "\n";
	cout << imie_oraz_nazwisko << endl;
	// '' - jeden znak, "" - ci¹g znaków
	
	
	
	string imie_oraz_nazwisko2 = "Imie: " + imie + '\n' + "Nazwisko: " + nazwisko + '\n';
	cout << "Imie i nazwisko - w jednej zmiennej - wiele linii: " << "\n";
	cout << imie_oraz_nazwisko2 << endl;	
	
	
	
	// zmienna bool - prawda, fa³sz
	bool wartosc_prawdy_lub_falszu; // false, true, 0 ,1
	wartosc_prawdy_lub_falszu = true;
	cout << "bool true: " << "\n";
	cout << wartosc_prawdy_lub_falszu << endl;	
	wartosc_prawdy_lub_falszu = false;
	cout << "bool false: " << "\n";
	cout << wartosc_prawdy_lub_falszu << endl;	
	// false = 0, true = R \ {0}
	wartosc_prawdy_lub_falszu = 40.55;
	cout << "bool 40.55: " << "\n";
	cout << wartosc_prawdy_lub_falszu << endl;
	
	
	
	// bez znaku
	// +65535
	// Nie ma tutaj liczb ujemnych
	unsigned short int mniejszy_integer2;
	mniejszy_integer2 = 40.55;
	cout << "unsigned int: " << "\n";
	cout << mniejszy_integer2 << endl;	
	mniejszy_integer2 = -5;
	cout << "unsigned int -: " << "\n";
	cout << mniejszy_integer2 << endl;	
	// signed - ze znakiem, ale to jest automatycznie
	
	
	
	cout << "Nazwa gry: " << "\n";
	cout << NAZWA_GRY << endl;	
	system("pause");
}
