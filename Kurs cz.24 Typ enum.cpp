#include <iostream>
#include <string>

using namespace std;
// Zmienna globalna
// automatycznie s¹ zerowane, je¿eli nie nadamy wartoœci
enum dayOfWeek  {PO, WT, SR, CZW, PIA, SO, NI};
enum dayOfWeek2 {PO2 = 8, WT2, SR2 = 15, CZW2, PIA2, SO2, NI2};
string getDay(dayOfWeek2);

int main()
{
	/*
		enum - enumeration - wyliczaæ
		enum - tworzymy w³asny typ
		w nim okreœlamy zbiór wartoœci mo¿liwych do przyjmowania przez dany typ
		Wszystko jest ponumerowane od 0
	*/
	dayOfWeek dzienTygodnia;
	// dzienTygodnia = 24 - nie zadzia³a
	// cin >> dzienTygodnia; - nie zadzia³a, operator cin nie jest okreœlony dla dayOfWeek
	cout << dayOfWeek(PO) << endl;
	cout << "Wypisywanie elementow z dayOfWeek - indeksy: " << endl;
	cout << "Indeks PO  "  << dayOfWeek(PO)  << endl;
	cout << "Indeks WT  "  << dayOfWeek(WT)  << endl;
	cout << "Indeks SR  "  << dayOfWeek(SR)  << endl;
	cout << "Indeks CZW "  << dayOfWeek(CZW) << endl;
	cout << "Indeks PIA "  << dayOfWeek(PIA) << endl;
	cout << "Indeks SO  "  << dayOfWeek(SO)  << endl;
	cout << "Indeks NI  "  << dayOfWeek(NI)  << endl;
	
	
	
	cout << "Wypisywanie elementow z dayOfWeek2 - indeksy: " << endl;
	cout << "Indeks PO = 1 "  << dayOfWeek2(PO2)  << endl;
	cout << "Indeks WT     "  << dayOfWeek2(WT2)  << endl;
	cout << "Indeks SR     "  << dayOfWeek2(SR2)  << endl;
	cout << "Indeks CZW    "  << dayOfWeek2(CZW2) << endl;
	cout << "Indeks PIA    "  << dayOfWeek2(PIA2) << endl;
	cout << "Indeks SO     "  << dayOfWeek2(SO2)  << endl;
	cout << "Indeks NI     "  << dayOfWeek2(NI2)  << endl;
	
	
	int indeks;
	cout << "Wybierz dzien tygodnia: " << endl;
	cout << "1. Poniedzialek "         << endl;
	cout << "2. Wtorek "               << endl;
	cout << "3. Sroda "                << endl;
	cout << "4. Czwartek "             << endl;
	cout << "5. Piatek "               << endl;
	cout << "6. Sobota "               << endl;
	cout << "7. Niedziela "            << endl;
	cin  >> indeks;
	cout << "Wybrales: "  << getDay(dayOfWeek2(indeks)) << endl;
	cout << "Sroda: "     << getDay(SR2) << endl;
	cout << "Sobota: "    << getDay(SO2) << endl;
	// Jako parametr, argument dayOfWeek2.
	
	
	
	
	system("pause");
	return 0;
}

string getDay(dayOfWeek2 dzienTygodnia)
{
	// Dni tygodnia maj¹ indeksy, ale jak je zmienimy, to switch siê posypie.
	// Dziêki temu mo¿emy dowolnie zmieniaæ numeracjê w dayOfWeek2.
	switch(dzienTygodnia)
	{
		case PO2:
			return "Poniedzialek";
			break;
		case WT2:
			return "Wtorek";
			break;		
		case SR2:
			return "Sroda";
			break;
		case CZW2:
			return "Czwartek";
			break;
		case PIA2:
			return "Piatek";
			break;
		case SO2:
			return "Sobota";
			break;
		case NI2:
			return "Niedziela";
			break;
	}
}
