#include <iostream>

using namespace std;


int main()
{
	// 4 bajty dla int
	// * ko³o & oznacza wy³uskanie zawartoœci z danego adresu.
	int zm = 109;
	int a = 5;
	cout << "Adres zm: "<< &zm << endl;
	cout << "Wyluskanie zm z adresu (*&): " << *&zm << endl;


	// Zmienna wskaŸnikowa - przechowuje jedynie adresy do innych zmiennych.
	// *wsk - pe³ni role informacyjn¹, informuje kompilator.
	// Mo¿e wskazywaæ na zmienne, które s¹ typu int. (w tym przypadku)
	// wskaŸnik - zwyk³a zmienna, "pojemnik" do przechowywania adresu.
	int *wsk;
	// WskaŸnik nie mog¹cy potem zmieniaæ adresu do wskazywania.
	// Jedynie co mo¿emy zmieniaæ, to wartoœæ wskazywanego adresu.
	int * const wsk_staly = &a;
	// wsk_staly = &a; b³¹d.
	wsk = &zm;
	cout << "Wyluskanie ze wskaznika: " << *wsk << endl;
	
	// Ten zapis: *&zm  to jest ten sam zapis, co: *wsk
	
	zm = 5;
	cout << "Wyluskanie ze wskaznika po zmianie zm na 5: " << *wsk << endl;
	cout << "Wartosc zm: "<< zm << endl;
	
	// z * poniewa¿ zmieniamy wartoœæ pod zm, czyli trzeba wy³uskaæ wartoœæ wskaŸnika.
	// samo wsk = 20 b³¹d, wtedy zamiast 20 trzeba wskazaæ nowy adres do wskazywania przez wskaŸnik.
	*wsk = 20;
	cout << "Wyluskanie ze wskaznika po zmianie *wsk na 20: " << *wsk << endl;
	cout << "Wartosc zm: "<< zm << endl;
	
	
	// Podmieniona wartoœæ, na któr¹ wskazuje wskaŸnik, podmieniony adres.
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	wsk = &a;
	cout << "Wyluskanie ze wskaznika po zmianie wsk = &a: " << *wsk << endl;
	cout << "Wartosc a: "<< a << endl;
	cout << "Wartosc zm: "<< zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	a = 15;
	cout << "Wyluskanie ze wskaznika po zmianie wsk = &a: " << *wsk << endl;
	cout << "Wartosc a: "<< a << endl;
	cout << "Wartosc zm: "<< zm << endl;		
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*wsk = 1501;
	cout << "Wyluskanie ze wskaznika po zmianie wsk = &a (*wsk = 1501): " << *wsk << endl;
	cout << "Wartosc a: "<< a << endl;
	cout << "Wartosc zm: "<< zm << endl;
	// WskaŸnik i referencja to dwie ró¿ne rzeczy.





	// WskaŸnik sta³y
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*wsk_staly = 2405;	
	cout << "Wyluskanie ze wskaznika po zmianie *wsk_staly = 2405: " << *wsk_staly << endl;
	cout << "Wartosc a: "<< a << endl;
	// WskaŸnik sta³y, jak wspomniane wy¿ej, mo¿na zmieniaæ tylko wartoœæ znajduj¹c¹ siê pod
	// wskazanym adresem, ale samego adresu do wskazywania ju¿ nie.
	// Takiej zmiany te¿ mo¿na zabroniæ:
	const int * wsk_na_stala_wartosc;
	wsk_na_stala_wartosc = &a;
	// *wsk_na_stala_wartosc = 2000; b³¹d
	// Tutaj mo¿na zmieniaæ wskazywany adres ale nie mo¿na modyfikowaæ tego, co pod nim siê znajduje.
	
	
	
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// Zabroniona zmiana i wskazywanego adresu i samej wartoœci znajduj¹cej siê pod wskazywanym
	// adresem.
	// Musimy wskazywaæ na taki sam typ zmiennej
	int b = 200;
	const int * const wsk_na_stala_wartosc_adres = &b;
	// wsk_na_stala_wartosc_adres = &a;// b³¹d przy zmianie wskazywanego adresu.
	// *wsk_na_stala_wartosc_adres = 505;// b³¹d przy modyfikacji wartoœci pod wskazywanym adresem.
	
	
	
	
	
	// Mo¿emy wskaŸnik stworzyæ na taki sposób:
	int *wsk_z_inicjalizacja = &b;
	// double *wsk_z_inicjalizacja = &b; - b³¹d, wskazujemy na typ danych int, wiêc wskaŸnik te¿ musi byæ
	// typu int.
	
	
	int d = 56;
	// Sam wskaŸnik te¿ ma swój adres:
	int *zwykly_wsk = &d;
	cout << "Adres wskaznika: " << &zwykly_wsk << endl;
	// Mo¿na tak¿e stworzyæ wskaŸnik wskazuj¹cy na wskaŸnik dziêki temu, ¿e wskaŸnik te¿ ma swój adres.
	// oryginalna_dana <--- wsk1 <--- wsk2
	int ** wsk_wskazujacy_na_wsk = &zwykly_wsk;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wartosc wskazywana przez wsk_wskazujacy_na_wsk (adres zwykly_wsk): " << wsk_wskazujacy_na_wsk << endl;
	cout << "Adres zwykly_wsk: " << &zwykly_wsk << endl;
	cout << "Wartosc zwykly_wsk: " << zwykly_wsk << endl;	
	cout << "Wartosc d: " << d << endl;
	cout << "Adres d: " << &d << endl;
	cout << "Wyluskana wartosc ze zwykly_wsk: " << *zwykly_wsk << endl;
	cout << "Wartosc wyluskana ze wsk_wskazujacy_na_wsk (d = 56): " << **wsk_wskazujacy_na_wsk << endl;


	// wsk = na &adres
	// *wsk = mod. zawartoœci pod wskazywanym adresem
	// &wsk = adres wskaŸnika
	// *&zm = wy³uskanie z adresu zmiennej jej zawartoœci
	system("pause");
	return 0;
}
