class Integer
{
	int liczba;
	public:
		Integer() {}; // Konstruktor domyœlny.
		Integer(int); // Konstruktor konwertuj¹cy - zamienia int na typ klasy, Integer.
		operator int(); // zamienia Integer na int. Funkcja operatorowa.
		
		
		int operator+=(Integer); // Funkcja operatorowa, zwraca int, dla operatora +=
		// jako parametr przyjmuje obiekt (czyli dan¹ instancjê) klasy i dodaje 
		// liczbê do tej, co ju¿ jest zapisana.
		
		
		int getLiczba(); // Funkcja zwracaj¹ca int
};
