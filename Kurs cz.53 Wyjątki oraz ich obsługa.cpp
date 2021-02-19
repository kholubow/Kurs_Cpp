#include <iostream>

using namespace std;

class ExceptionDzieleniePrzezZero
{
	public:
		void getErrorMessage() { cout << "[ExceptionDzieleniePrzezZero] Nie dziel przez zero" << endl; };
};

double dzielenie(double a, double b) throw (ExceptionDzieleniePrzezZero)// Funkcja, deklaracja, zwraca typ double, inline - szybciej siê kompiluje (je¿eli jest inline).
{
	if (b == 0)
		throw ExceptionDzieleniePrzezZero();
	
	
	return a/b;
}

int main()
{
	
	/*
		Mo¿e byæ wiele powodów do b³êdów, z³e dzia³anie, b³êdna alokacja pamiêci lub 
		b³êdne jej zwolnienie.
		
	*/
	double a = 10;
	// throw - wyrzucanie wyj¹tku.
	// potem taki wyj¹tek trzeba "z³apaæ".
	// catch - ³ap (taki wyrzucony wczeœniej wyj¹tek).
	// Ustalamy, jakiego typu wyj¹tek chcemy z³apaæ.
	// Dalsze instrukcje po wyrzuceniu b³êdu nie bêd¹ realizowane.
	
	
	
	/*
		double a - wyj¹tek nie zostanie obs³u¿ony, program siê od razu zamknie.
		catch(...) - obs³uga wyj¹tków typu wszelakiego.
	*/
	try
	{
		a*=5;
		
		if (a == 50) 
			throw a;
			
		cout << "Dalsze instrukcje" << endl;
	} 
	catch(int wyjatek)
	{
		cout << "Powstal wyjatek, bo a = " << a << endl;
	}
	catch(...)
	{
		cout << "Wyjatki typu wszelakiego" << endl;
	}


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
	/*
		Funkcja wyrzuca wyj¹tek typu double (throw), tutaj jest on ³apany.
		
		Zamiast w funkcji robiæ throw robi to siê przy pomocy innej klasy np.
		ExceptionDzieleniePrzezZero
		Exception - wyj¹tek.
		
		
		Wtedy w funkcji:
		throw ExceptionDzieleniePrzezZero();
		Z (), wywo³anie konstruktora, ¿eby w ogóle wywo³aæ ten obiekt.
		
		B³¹d z funkcji zosta³ wyrzucony (double), typu ExceptionDzieleniePrzezZero, wiêc
		kompilator szuka w catch odpowiedniej reakcji na b³¹d takiego rodzaju.
	*/	
	double wynik;
	try
	{
		wynik = dzielenie(5,0);
		cout << wynik << endl;
		cout << "Dalsze instrukcje" << endl;
	} 
	catch(double wyjatek)
	{
		cout << "Powstal wyjatek, bo wyjatek = " << wyjatek << endl;
	}
	catch(ExceptionDzieleniePrzezZero wyjatek)
	{
		wyjatek.getErrorMessage();
	}
	catch(...)
	{
		cout << "Wyjatki typu wszelakiego" << endl;
	}
	
	/*
		Je¿eli jest bardzo du¿o instrukcji w funkcji, która zwraca wyj¹tki, warto pisaæ
		podczas jej deklaracji, ¿e takowe bêd¹ zwracane,
		double dzielenie(double a, double b) throw (ExceptionDzieleniePrzezZero)
	*/
	
	
	cout << "Dalej wszystko jest wykonywane. Pozostale instrukcje." << endl;
	system("PAUSE");
	return 0;
}
