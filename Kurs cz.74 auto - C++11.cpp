#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

int main()
{
	/*
		S³owo kluczowe auto
		automaticly
		automatycznie
		
		auto przed zmienn¹, domyœli siê, jaki typ przydzieliæ np. do zmiennych
		
		
		#include <typeinfo> - biblioteka do sprawdzenia, jaki typ zmiennej zosta³ przydzielony
		dziêki u¿yciu auto.
		i - integer
		d - double
		
		W sumie auto mo¿e zwiêkszaæ mocno czytelnoœæ kodu.
	*/
	
	vector<int> wholeNumbers {20, 10, 4, -3, 25};
	
	
	vector<int>::iterator it = wholeNumbers.begin(); 
	// auto it = wholeNumbers.begin(); 
	cout << "Wypisanie elementow z vectora: " << endl;
	

 	auto nrOfPeople = 20;
 	auto nrOfPeopleD = 20.5;
	for (it; it != wholeNumbers.end(); it++)
	{
		cout << *it << endl;
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
	
		
		
		
	cout << "auto (20): " << endl;
	cout << nrOfPeople << endl;	
	cout << "Uzyskany typ zmiennej dzieki auto: " << endl;
	cout << typeid(nrOfPeople).name() << endl;
	cout << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	cout << "auto (20.5): " << endl;
	cout << nrOfPeopleD << endl;	
	cout << "Uzyskany typ zmiennej dzieki auto: " << endl;
	cout << typeid(nrOfPeopleD).name() << endl;

	system("PAUSE");
	return 0;
}
