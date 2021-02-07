#include <iostream>

using namespace std;


int main()
{
	/*
	   Referencja - refer - odwo³ywaæ siê do czegoœ
	   Reference - odwo³anie siê do czegoœ (po adresie)
	   Jest najszybsze przy pomocy adresu jakiejœ zmiennej
	   Reference - synonim(alias) - przezwisko - wiele sposobów na dostanie siê do jednej zmiennej.
	*/
	/*
		1. Zmienna referencyjna musi byæ od razu zainicjalizowana (odwo³ywaæ siê do adresu, byæ przezwiskiem dla zmiennej).
		2. Zmienna referencyjna nie mo¿e zmieniaæ skojarzeñ.
		3. Zmienna referencyjna jest od razu sta³a.
		    int & const zmienna_ref_przezwisko_dla_zwykla_zmienna = zwykla_zmienna;
		     oznacza, ¿e nie mo¿emy zmieniaæ póŸniej referencji (wskazywania na inny adres)
		4. Zmienna referencyjna musi byæ takiego samego typu, co zmienna jej przypisywana (na któr¹ jest skojarzona)
	*/
	
	int zwykla_zmienna = 4;
	cout << "Wartosc zwykla_zmienna: " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;
	
	
	// Odwo³anie siê do zwykla_zmienna, jej przezwisko.
	// Zmienna referencyjna
	// Bêdzie mia³a tak¹ sam¹ wartoœæ i taki sam adres.
	int & zmienna_ref_przezwisko_dla_zwykla_zmienna = zwykla_zmienna;
	cout << "Wartosc przezwisko_dla_zwykla_zmienna: " << zmienna_ref_przezwisko_dla_zwykla_zmienna << ". Adres(&Ampersant): " << &zmienna_ref_przezwisko_dla_zwykla_zmienna << endl;
	
	
	// Taka sama wartoœæ ale ró¿ny adres
	int zwykla_zmienna_nie_referencyjna = zwykla_zmienna;
	cout << "Wartosc zwykla_zmienna_nie_referencyjna: " << zwykla_zmienna_nie_referencyjna << ". Adres(&Ampersant): " << &zwykla_zmienna_nie_referencyjna << endl;
	
	
	// Zmienna referencyjna odwo³uje siê do tego samego miejsca w pamiêci, czyli
	// poprzez t¹ zmienn¹ mo¿emy wp³ywaæ na wartoœæ zwyklej_zmiennej.
	// Zmienia siê wartoœæ, adres pozostaje.
	// zwykla_zmienna_nie_referencyjna nie wp³ynie na zwykla_zmienna, poniewa¿ wskazuje
	// inne miejsce w pamiêci.
	zwykla_zmienna_nie_referencyjna = 101;
	cout << "Wartosc zwykla_zmienna (po zmianie na 101 przez zwykla_zmienna_nie_referencyjna): " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;	
	zmienna_ref_przezwisko_dla_zwykla_zmienna = 404;
	cout << "Wartosc zwykla_zmienna (po zmianie na 404): " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;



	// 2. Zmienna referencyjna nie moze zmieniac skojarzen.
	// &zmienna_ref_przezwisko_dla_zwykla_zmienna = a;
	// nie mo¿emy nagle zmieniæ referencji, skojarzenia.
	// Adres pozostaje, wartoœæ z a 
	cout << "Zmienna referencyjna nie moze zmieniac skojarzen." << endl;
	int a = 10000;
	zmienna_ref_przezwisko_dla_zwykla_zmienna = a;
	cout << "Wartosc zwykla_zmienna (po zmianie na a): " << zwykla_zmienna << ". Adres(&Ampersant): " << &zwykla_zmienna << endl;



	// 3. Zmienna referencyjna jest od razu sta³a.
	const int & ref = a;
	// B³¹d:
	// ref = 40;
	// OK:
	// a = 40; 
	cout << "Wartosc a: "   << a   << ". Adres(&Ampersant): " << &a   << endl;
	cout << "Wartosc ref: " << ref << ". Adres(&Ampersant): " << &ref << endl;
	// const int a = 10000;
	// a = 40 nie zadzia³a.
	a = 40;
	cout << "Wartosc a (po zmianie na 40): "   << a   << ". Adres(&Ampersant): " << &a   << endl;
	cout << "Wartosc ref (po zmianie na 40): " << ref << ". Adres(&Ampersant): " << &ref << endl;	



	// 4. Zmienna referencyjna musi byæ takiego samego typu, co zmienna jej przypisywana (na któr¹ jest skojarzona)
	// Wskazujemy na int to musimy wskazywaæ jako int a nie np. string, double itp.
	


	system("pause");
	return 0;
}
