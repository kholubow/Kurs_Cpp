class Kopiarka
{
	public:
		/*
			Dwa konstruktory, taka sama nazwa, inne parametry, jeden destruktor
			zas³uga polimorfizmu,
			kompilator sam rozpozna, kiedy chcemy u¿yæ którego konstruktora dziêki
			ró¿nicy w przekazywanych parametrach:
			mo¿e to byæ jak tutaj iloœæ lub ich typ.
		*/
		Kopiarka(int, int);
		Kopiarka(int, int, int);
		Kopiarka(const Kopiarka &); // Konstruktor kopiuj¹cy, przyjmuje referencje do sta³ego typu Kopiarka (klasy).
		~Kopiarka();		
		int x;
		int y;
		int *wsk;
};
