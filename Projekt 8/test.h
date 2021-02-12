class B; // Deklaracja deklaracji
// Dziêki temu klasa A wie o klasie B podczas kompilacji.

class A
{
	friend class B;
	int tajniejsze;
	public:
		void ustawTajne(B &, int);
		int pobierzTajniejsze();
};

class B
{
	friend class A; // friend mo¿na postawiæ w dowolnym miejscu, public, private, protected.
	int tajne;
	
	public:
		int pobierzTajne();
		void ustawTajniejsze(A &, int);
};
