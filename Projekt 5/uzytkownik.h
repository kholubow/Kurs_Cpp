// Definicje
class Uzytkownik
{
	private:
		int ID;
		int ID2;
		static int counter;
	public:
		Uzytkownik(); // Konstruktor (domyœlny)
		~Uzytkownik(); // Destruktor
		int getID(); // Funkcja zwraca ID (int)
		int getID2();
		static int getCounter();
};
