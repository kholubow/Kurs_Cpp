#include <iostream>
#include <string>

using namespace std;

int a = 5;

namespace A
{

	int zm = 20;

}
namespace B
{
	
	int zm = 50;
	
}

using namespace A;

namespace mojaPrzestrzen
{
	using namespace std;
	
	class MojaNowaLinia
	{
		
			string zn;
		public:
			MojaNowaLinia(string zn = "\n\n\n\n") { this->zn = zn; };
			string toString()
			{
				// string t[1];
				// t[0] = zn;
				return zn;
			}
	};
	
	ostream & operator<<(ostream & out, MojaNowaLinia & obj)
	{
		return out << obj.toString();
	}
	
	MojaNowaLinia endl2;
	
}

using namespace mojaPrzestrzen;

int main()
{
	/*
		Przestrzeñ globalna (ponad funkcj¹ main)
		Przestrzeñ lokalna (w danej funkcji, metodzie, itp.).
		
		
		Mo¿emy tworzyæ w³asne przestrzenie.
		Mo¿na u¿ywaæ tego podejœcia, aby unikn¹æ konfliktu nazw zmiennych.
		using namespace A;
		¯eby korzystaæ ze zmiennych okreœlonych w A bez operatora zasiêgu ::
		
		
		Tworzenie w³asnych bibliotek.
		
		
		
		
		Napisanie w³asnego endl
		(jako endl2, normalnie bez using namespace std;)
		namespace mojaPrzestrzen
		Zamiast pisaæ np. get.cos.cos() to od razu kierowanie na wyjœcie konkretów, bez
		koniecznoœci rozpisywania siê wielokrotnego w kodzie g³ównym dziêki
		u¿ywaniu w³asnej przestrzeni nazw.	
		publiczny konstruktor:
		MojaNowaLinia(char zn = '\n') { this->zn = zn; };
		nowej linji \n, this->zn = zn, przypisywanie wartoœci zn dla akurat tej instancji/obiektu, gdy
		póŸniej zostanie taka wywo³ana.
		
		
		
		Mo¿na u¿ywaæ przestrzeni w przestrzeni.
		
		
		
		
		return ""+zn; zn typ znakowy char, z ""+ zwraca od razu stringa.
		
		
		
		ostream & = stream wyjœciowy, czyli dok³adnie cout.
		
		
		
		ostream & operator<<(ostream & out, MojaNowaLinia & obj) = przeci¹¿enie operatora << cout,
		poniewa¿ w #include <iostream> ju¿ taki operator zosta³ zdefiniowany.
		Przekazujemy w ramach jego pracy swoj¹ klasê, jej obiekt/instancjê
		& - pos³ugiwanie siê adresami, odwo³anie siê dziêki temu do konkretnych miejsc w 
		pamiêci.
		
		
		Czyli, gdy na wyjœcie napiszemy endl2, to zostanie wykonane:
		return out << obj.toString();
		zwrócenie instancji klasy MojaNowaLinia, wywo³anie metody (funkcja zwracaj¹ca typ string) toString(), dodanie nowej
		linji.
		Z uwagi, ¿e to jest teraz nasz endl2, mo¿na zrobiæ, ¿e jeden bêdzie dawa³ np. 4 nowe linie.
		Ale mo¿emy te¿ przekazywaæ swój string poprzez utworzenie instancji dla tej klasy.
		Konstruktor w klasie MojaNowaLinia przyjmie wtedy ci¹g string.
		
	*/
	int a = 10;
	
	cout << "Wypisze wartosc a z przestrzeni blizszej, a = 10" << endl;
	cout << a << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Operator zasiegu ::, sieganie do wartosci a z przestrzeni wyzej. a = 5." << endl;
	cout << ::a << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Zmienna zm z wlasnej przestrzeni nazw A: " << endl;
	cout << A::zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Zmienna zm z wlasnej przestrzeni nazw B: " << endl;
	cout << B::zm << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
	
	
	cout << "Zmienna zm z wlasnej przestrzeni nazw A (bez operatora zasiegu): " << endl;
	cout << zm << endl;
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
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Wykorzystanie swojego endl2: " << endl2;
	cout << endl2;
	cout << endl2;
	cout << endl2;
	cout << endl2;
	cout << "Wlasne endl2" << endl2;	
	
	
	
	MojaNowaLinia zmienna("zmienna = obiekt/instancja klasy MojaNowaLinia");
	cout << "Przekazanie string do klasy MojaNowaLinia poprzez utworzenie instancji/obiektu zmienna: " << endl;
	cout << zmienna << endl2;
	
	
	system("PAUSE");
	return 0;
}
