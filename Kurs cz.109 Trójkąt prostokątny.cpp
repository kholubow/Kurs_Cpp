#include <iostream>

using namespace std;

int main()
{
	/*
		Algorytm sprawdzaj¹cy, czy dany trójk¹t jest trójk¹tem prostok¹tnym.
		Kwadrat przeciwprostok¹tnej musi byæ równy sumie kwadratów boków przyprostok¹tnych.
	*/
	int a, b, c;
	
	
	cout << "Zal. c > a && c > b, zabezpieczenie w postaci zapisu po || w if." << endl;
	cout << "Podaj dlugosci bokow do sprawdzenia, czy trojkat jest prostokatny: " << endl;
	cin >> a >> b >> c;
	cin.ignore();
	
	
	// Warunek na powstanie trójk¹ta.
	if ((a < b + c) && (b < a + c) && (c < b + a))
	{
		if ((a * a + b * b) == (c * c) || (c * c + b * b) == (a * a) || (a * a + c * c) == (b * b))
			cout << "Trojkat jest prostokatny." << endl;
		else
			cout << "Trojkat nie jest prostokatny." << endl;
	} 
	else 
		cout << "To nie jest trojkat." << endl;
	
	
	getchar();
	system("PAUSE");
	return 0;
}
