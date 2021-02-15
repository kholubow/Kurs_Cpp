class Punkt // Klasa bazowa, do dziedziczenia, ale te¿: klasa rodzic, superklasa
{
	protected:
		int x;
	public:
		Punkt(int = 145); // Automatycznie przypisuje do wartoœci parametru, je¿eli nie zostanie wczeœniej
		// zdefiniowana.
		~Punkt();
		int getX(); // Funkcja zwraca int, wartoœæ x
		void setX(int); // Procedura, nic nie zwraca, tylko ustawia x dla danej instancji/obiektu.
};	

class Punkt2D : public Punkt // Dziedziczenie w sposób publiczny, klasa dziecko, klasa pochodna, subklasa
{
	// dziedziczenie odbywa siê bez skopiowania konstruktorów i destruktorów.
	// Kopiowanie nastêpuje wszystkiego, co jest pod public i protected.
	// bez private
	// protected = tak samo jak private, ale maj¹ dostêp klasy dziedzicz¹ce.
	int y;
	public:
		Punkt2D(int = 0, int = 0);
		~Punkt2D();
};

/*
	class Punkt2D : public Punkt
	
		wszystko, co znajduje siê w Punkt2D(oprócz konstruktora i destruktora), w Punkt stanie siê:
			private zmieni siê na niedostêpne.
			protected bêdzie dalej protected.
			public bêdzie dalej public.
			



			
	class Punkt2D : protected Punkt
	
		wszystko, co znajduje siê w Punkt2D(oprócz konstruktora i destruktora), w Punkt stanie siê:
			private zmieni siê na niedostêpne.
			protected bêdzie dalej protected.
			public bêdzie dalej protected.



			
			
	class Punkt2D : public Punkt
	
		wszystko, co znajduje siê w Punkt2D(oprócz konstruktora i destruktora), w Punkt stanie siê:
			private zmieni siê na niedostêpne.
			protected bêdzie dalej private.
			public bêdzie dalej private.
*/
