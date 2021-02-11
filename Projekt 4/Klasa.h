class Dane_czlowieka_class //Klasa
{
	protected: // chroniony, oznacza, ¿e wszystko jest tak jak pod etykiet¹ private, ale dodatkowo jest dostêpne w innych klasach, które dziedzicz¹ t¹ klasê.
	
	// Zmienne w klasie s¹ prywatne. Do u¿ycia tylko wewn¹trz tej klasy.
	private: // automatycznie w klasie jest ta etykieta.
	// Powinniœmy chcieæ w klasie tworzyæ zmienne jako prywatne, ¿eby nikt/nic z zewn¹trz przypadkiem/specjalnie nie podmienia³ wartoœci zmiennych.	
	unsigned short wiek_class;
	
	
	public:
		Dane_czlowieka_class(); // Zawsze powinien byæ jakiœ konstruktor domyœlny wrazie czego
		Dane_czlowieka_class(int); // Konstruktor, w Klasa.cpp.
		~Dane_czlowieka_class(); // Destruktor - negujemy konstruktor.
	unsigned short getWiek() { return wiek_class; }; // Prototyp funkcji
	unsigned short getWiekND(); // Prototyp funkcji, definicja oddzielnie
	// Procedura przyjmuj¹ca z zewn¹trz (np. z innej klasy), jaki wiek wewn¹trz tej klasy ustawiæ.
	// a dok³adniej, teraz nazywa siê to metoda.
	// Mo¿emy robiæ "zabezpieczenia" na to, co mog¹ przyj¹æ zmienne wewn¹trz tej klasy.
	void setWiek(unsigned short age) { wiek_class = age; }; 
	void setWiekND(unsigned short); // Prototyp - deklaracja
	// Funkcje inline wykonuj¹ siê du¿o szybciej.

};

// Konstruktor - tworzy klase
// 
