class Zwierze
{
	public: // publiczny modyfikator dostêpu
		virtual void dajGlos();// = 0; // Wirtualna funkcja. = 0 powoduje, ¿e ca³a klasa Zwierze
		// staje siê klas¹ abstrakcyjn¹.
			
};

class Mucka : public Zwierze
{
	public:
		void dajGlos(); // Polimorfizm, przeci¹¿enie - ¿eby zasiêgn¹æ metody z klasy bazowej trzeba 
		// u¿yæ w klasie pochodnej operatora zasiêgu ::
			
};

class Pies : public Zwierze
{
	public:
		void dajGlos();
			
};

class Kogut : public Zwierze
{
	public:
		void dajGlos();
			
};
