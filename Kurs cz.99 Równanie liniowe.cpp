#include <iostream>

using namespace std;

int main()
{
	/*
		Równanie oznaczone (posiada rozwi¹zanie):
			f(x) = ax + b => 0 = ax + b => x = (-b/a)
			
		Inny przypadek:
		
			a == 0
			b == 0
			0 == 0
			Równanie to¿samoœciowe (nieoznaczone). - nieskoñczenie wiele rozwi¹zañ.
			
		Kolejny przypadek:
		
			a == 0
			b != 0
			b = 0 => równanie te jest sprzeczne - brak rozwi¹zania.
	*/
	double a, b;
	
	cout << "Podaj a i b: " << endl;
	cin >> a >> b;
	cin.ignore();
	
	if (a != 0)
		cout << "Rownanie jest oznaczone i posiada rozwiazanie: " << (-b/a) << endl;
	else if (a == 0 && b == 0)
		cout << "Rownanie jest tozsamosciowe, bo 0 == 0, czyli nieoznaczone. Nieskonczenie wiele rozwiazan. " << endl;
	else if (a == 0 && b != 0)
		cout << "Rownanie jest sprzeczne. Brak rozwiazania." << endl;
	else
		cout << "Cos poszlo nie tak" << endl;


	getchar();
	system("PAUSE");
	return 0;
}
