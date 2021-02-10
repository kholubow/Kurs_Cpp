#include <iostream>
#include <string>

using namespace std;

struct Dane_Czlowieka // Zdefiniowany nowy typ danej
{
	string imie; // Cechy struktury, czyli jej elementy.
	string nazwisko;
	string nrTel;
	string nrDowOs;
	unsigned short wiek; // int 4 bajty pamiêci, short int 2 bajty pamiêci. Unsigned - bezznakowy = dodatni. Signed s¹ z automatu.
};

struct Dane_Czlowieka_Tablica
{
	string imie2; 
	string nazwisko2;
	string nrTel2;
	string nrDowOs2;
	unsigned short wiek2; 
};

struct Dane_Czlowieka2 
{
	string imie3;
	string nazwisko3;
	string nrTel3;
	string nrDowOs3;
	unsigned short wiek3; 
} nazwa_zmiennej;



int main()
{
	/*
		Struktura okreœla sposób zbudowania pewnego obiektu.
		Nowy typ danej
		Z jakich elementów siê sk³ada
		Kiedyœ tak siê pisa³o strukture:
		typedef struct Dane_Czlowieka 
		teraz bez typedef w C++.
		
		
		
		String zajmuje 255 znaków.
		nazwa_zmiennej jest od razu typu Dane_Czlowieka2
		nazwa_zmiennej.imie3 = "imie3";
		
		Jak by³o na poprzednich lekcjach:
			- Nazwa tablicy = wskaŸnik na jej 1-wszy element
	*/
	Dane_Czlowieka czlowiek;
	Dane_Czlowieka_Tablica czlowiek2[10];
	
	czlowiek.imie     = "Imie";
	czlowiek.nazwisko = "Nazwisko";
	czlowiek.nrDowOs  = "ABC123";
	czlowiek.nrTel    = "123456789";
	czlowiek.wiek     = 45;
	
	cout << "Dane czlowiek: "<< endl;
	cout << "Imie: "         << czlowiek.imie     << endl;
	cout << "Nazwisko: "     << czlowiek.nazwisko << endl;
	cout << "Nr. Dowodu: "   << czlowiek.nrDowOs  << endl;
	cout << "Nr. Telefonu: " << czlowiek.nrTel    << endl;
	cout << "Wiek: "         << czlowiek.wiek     << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wczytywanie od uzytkownika do struktury: "<< endl;
	cout << "Podaj imie: "         << endl;
	cin  >> czlowiek.imie;
	
	cout << "Podaj nazwisko: "     << endl;
	cin  >> czlowiek.nazwisko;
	
	cout << "Podaj nr. dowodu: "   << endl;
	cin  >> czlowiek.nrDowOs;
	
 	cout << "Podaj nr. telefonu: " << endl;
 	cin  >> czlowiek.nrTel;
 	
	cout << "Podaj wiek: "         << endl;
	cin  >> czlowiek.wiek;


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wyswietlenie wczytanych danych do struktury: "<< endl;
	cout << "Imie: "         << czlowiek.imie     << endl;
	cout << "Nazwisko: "     << czlowiek.nazwisko << endl;
	cout << "Nr. Dowodu: "   << czlowiek.nrDowOs  << endl;
	cout << "Nr. Telefonu: " << czlowiek.nrTel    << endl;
	cout << "Wiek: "         << czlowiek.wiek     << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	// Tablica dwuwymiarowa, czlowiek2[0].nazwisko2 - Nazwisko 1-wszego czlowieka z tablicy czlowiek2
	czlowiek2[0].imie2     = "ImieNowe";
	czlowiek2[0].nazwisko2 = "NazwiskoNowe";
	czlowiek2[0].nrDowOs2  = "ABC1239870";
	czlowiek2[0].nrTel2    = "123000222";
	czlowiek2[0].wiek2     = 31;
	cout << "Dane czlowiek2[0]: "<< endl;
	cout << "Imie: "         << czlowiek2[0].imie2     << endl;
	cout << "Nazwisko: "     << czlowiek2[0].nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << czlowiek2[0].nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << czlowiek2[0].nrTel2    << endl;
	cout << "Wiek: "         << czlowiek2[0].wiek2     << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wczytywanie od uzytkownika do struktury tablicowej czlowiek2[1]: "<< endl;
	cout << "Podaj imie: "         << endl;
	cin  >> czlowiek2[1].imie2;
	
	cout << "Podaj nazwisko: "     << endl;
	cin  >> czlowiek2[1].nazwisko2;
	
	cout << "Podaj nr. dowodu: "   << endl;
	cin  >> czlowiek2[1].nrDowOs2;
	
 	cout << "Podaj nr. telefonu: " << endl;
 	cin  >> czlowiek2[1].nrTel2;
 	
	cout << "Podaj wiek: "         << endl;
	cin  >> czlowiek2[1].wiek2;


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wyswietlenie wczytanych danych do struktury 2-giego czlowieka: "<< endl;
	cout << "Imie: "         << czlowiek2[1].imie2     << endl;
	cout << "Nazwisko: "     << czlowiek2[1].nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << czlowiek2[1].nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << czlowiek2[1].nrTel2    << endl;
	cout << "Wiek: "         << czlowiek2[1].wiek2     << endl;	
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
	
	
	// Nazwa tablicy = wskaŸnik, adres na jej 1-wszy element, mo¿emy wy³uskaæ wartoœæ poprzez *
	// (*czlowiek2) = (*&czlowiek2[0])
	(*czlowiek2).imie2     = "WskaznikImie";
	(*czlowiek2).nazwisko2 = "WskaznikNazwisko";
	(*czlowiek2).nrDowOs2  = "WskaznikABC1239870";
	(*czlowiek2).nrTel2    = "Wskaznik123000222";
	(*czlowiek2).wiek2     = 29;
	cout << "Dane *czlowiek2: "<< endl;
	cout << "Imie: "         << (*czlowiek2).imie2     << endl;
	cout << "Nazwisko: "     << (*czlowiek2).nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << (*czlowiek2).nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << (*czlowiek2).nrTel2    << endl;
	cout << "Wiek: "         << (*czlowiek2).wiek2     << endl;
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
	
	
	// Du¿o szybsze rozwi¹zanie:
	// To samo co:
	// (*czlowiek2) = (*&czlowiek2[0])
	// Wskazuje -> na 1-wszy element tablicy, jego adres z wy³uskaniem w jednym.
	czlowiek2->imie2     = "->Imie";
	czlowiek2->nazwisko2 = "->Nazwisko";
	czlowiek2->nrDowOs2  = "->ABC1239870";
	czlowiek2->nrTel2    = "->123000222";
	czlowiek2->wiek2     = 32;
	cout << "Dane czlowiek2 ->: "<< endl;
	cout << "Imie: "         << czlowiek2->imie2     << endl;
	cout << "Nazwisko: "     << czlowiek2->nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << czlowiek2->nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << czlowiek2->nrTel2    << endl;
	cout << "Wiek: "         << czlowiek2->wiek2     << endl;		
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
	
	
	// Dane drugiego cz³owieka:
	(czlowiek2+1)->imie2     = "->Im2";
	(czlowiek2+1)->nazwisko2 = "->Naz2";
	(czlowiek2+1)->nrDowOs2  = "->ABC12";
	(czlowiek2+1)->nrTel2    = "->12302";
	(czlowiek2+1)->wiek2     = 22;
	cout << "Dane czlowiek2 + 1 ->: "<< endl;
	cout << "Imie: "         << (czlowiek2+1)->imie2     << endl;
	cout << "Nazwisko: "     << (czlowiek2+1)->nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << (czlowiek2+1)->nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << (czlowiek2+1)->nrTel2    << endl;
	cout << "Wiek: "         << (czlowiek2+1)->wiek2     << endl;	
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

	// Zmienna wskaŸnikowa na typ danych Dane_Czlowieka_Tablica wskazuj¹ca na dane 1-wszej osoby [adres]
	Dane_Czlowieka_Tablica * wsk = &czlowiek2[0];
	cout << "Dane czlowiek2. Dane 1-wszej osoby: "<< endl;
	cout << "Imie: "         << wsk->imie2     << endl;
	cout << "Nazwisko: "     << wsk->nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << wsk->nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << wsk->nrTel2    << endl;
	cout << "Wiek: "         << wsk->wiek2     << endl;		
	
	wsk++;
	
	cout << "Dane czlowiek2. Dane 2-giej osoby: "<< endl;
	cout << "Imie: "         << wsk->imie2     << endl;
	cout << "Nazwisko: "     << wsk->nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << wsk->nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << wsk->nrTel2    << endl;
	cout << "Wiek: "         << wsk->wiek2     << endl;		
	
	wsk++;
	
	cout << "Dane czlowiek2. Dane 3-ciej osoby: "<< endl;
	cout << "Imie: "         << wsk->imie2     << endl;
	cout << "Nazwisko: "     << wsk->nazwisko2 << endl;
	cout << "Nr. Dowodu: "   << wsk->nrDowOs2  << endl;
	cout << "Nr. Telefonu: " << wsk->nrTel2    << endl;
	cout << "Wiek: "         << wsk->wiek2     << endl;		
	
	
	system("pause");
	return 0;
}
