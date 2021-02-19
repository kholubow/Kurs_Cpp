#include <iostream>
#include "szablonek.h"

using namespace std;

int main(int argc, char *argv[])
{
	/*
		Kurs cz.53 Szablony klas
			
		DEV C++ niestety nie po³¹czy zmiennych tak ³adnie jak zwykle w przypadku tworzenia
		szablonu klasy.
		Dlatego te¿ trzeba przenieœæ iostream i namespace std bezpoœrednio do pliku 
		headers z klasami.
		Metody nale¿¹ce do klasy, z której chcemy zrobiæ szablon tak¿e musz¹ staæ siê 
		szablonem i istnieæ od razu pod ni¹
		
		
		Podczas korzystania z szablonu klasy podczas deklaracji obiektu/klasy trzeba
		od razu podaæ typ parametru.
		
		
		Klasy w zale¿noœci od typu paramatrów zajmuj¹ wiêcej/mniej miejsca w pamiêci.
		Klasy powstaj¹ w czasie kompilacji (szablony).
		
		
		
		Robienie szablonu z drugiej klasy Punkt2D analogicznie.
		Podmieniamy int na T, parametry z zewn¹trz, gdy bêdzie tworzony szablon.
		Z metodami nale¿¹cymi do tej klasy tak samo jak w przypadku poprzedniej klasy.
		W tych metodach tak¿e ustawiamy przyjmowanie typu parametru z zewn¹trz, podczas
		tworzenia siê szablonu.
		
		
		W przypadku dziedziczenia musimy okreœliæ te¿ typ parametru przy pisaniu klasy, z
		której dziedziczymy.
		
		
		
		Specjalizowanie szablonów klas:
			- nie chcemy, ¿eby zosta³y podane parametry okreœlonego typu.
			
			
		Na samym dole klasy i jej metod podajemy:
		template<>
		class Punkt<char>
		W klasie Punkt nie chcemy parametrów typu char np.
		Czyli teraz tworzymy drug¹ klasê, ta sama nazwa poprzedniej, ale nowa, dla
		konkretnego typu szablonu.
		
		Zastosowano podejœcie inline:
		Punkt() { cout << "Nie wolno tworzyc z tego szablonu typu char" << endl; }	
		Kompilator operuje takim podejœciem szybciej od rozpisania tego na wiêcej linijek.
		
		Teraz kolejny wyj¹tek, ale wzglêdem otrzymywania parametru typu wskaŸnik:
		template<>
		class Punkt<char>
		{
			public:
				Punkt(char a = 0) { cout << "Nie wolno tworzyc z tego szablonu typu char" << endl; }	
		};
		
		
		Ale wzglêdem konkretnej metody:
		template<>
		double Punkt<double>::getX()
		{
			cout << "getX(), do szablonu wyslano typ double" << endl;
			return this->x;
		}
		Do szablonu klasy Punkt wysy³amy dane typu wszelakiego, ale mo¿emy oddzielnie reagowaæ
		na dane okreœlonego typu.
		
		
		
		Mo¿na te¿ tworzyæ swojego rodzaju wyj¹tki, których szablon nie przyjmie, np. wskaŸników:
		
		template<typename TYP>
		class Punkt<TYP*>
		{
			public:
				Punkt() { cout << "Przekazywanie wskaznikow do tego szablonu jest zabronione." << endl; };
		};

	*/    
	typedef Punkt<int> PunktInt; // Zdefiniowany w³asny typ
	typedef Punkt<double> PunktDouble;
	
	
	
    Punkt<int> a(5.5);
    cout << a.getX() << endl;
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl;
         
         
    Punkt<double> a2(5.5);
    cout << a2.getX() << endl;	
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl;  
         
         
    PunktInt a3(5.5);
    cout << a3.getX() << endl;
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl; 
	
	   
    PunktDouble a4(5.5);
    cout << a4.getX() << endl; 
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;
        cout << endl;
         cout << endl;    
   
   
   	Punkt2D<int> b(5.4, 6);
   	cout << b.getX() << endl;
	cout << b.getY() << endl;
   	Punkt2D<double> b2(5.4, 6);
   	cout << b2.getX() << endl;
	cout << b2.getY() << endl;
	
	
	
	Punkt<char> punktChar(49);
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
         
	
	Punkt<int*> zmienna;
	Punkt<float*> zmienna2;
	
	
    
    system("pause");
    return 0;
}
