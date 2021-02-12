// Deklaracje
class Position
{
	int x, y; // Z automatu to s¹ prywatne zmienne.
	public:
		Position(int, int);
		~Position();
		void getPosition() const; // Procedura bardziej ni¿ funkcja, bo nie zwraca nic, jest tylko void.
		// brak return.
		void setPosition(int, int);
};
