#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		range - zakres
		
		
		Korzystamy z tej pêtli, aby zwiêkszyæ czytelnoœæ kodu.
		for range - C++11
		
		
		
		
		for(int nr : wholeNumbers)
		Podajemy jako pierwszy parametr zmienn¹ tymczasow¹, w której bêd¹ przechowywane 
		pobierane wartoœci z kontenera i drugi parametr - to jest zakres, czyli nazwa kontenera.
		Wartoœci z kontenera wypisujemy ze zmiennej tymczasowej pêtli.
	*/
	
	vector<int> wholeNumbers {20, 10, 4, -3, 25};
	vector<int>::iterator it = wholeNumbers.begin(); 
	
	
	
	cout << "Wypisanie elementow z vectora (for): " << endl;
	for (it; it != wholeNumbers.end(); it++)
	{
		auto nr = *it;
		cout << nr << endl;
	}	
	
	
	
	
	cout << "Wypisanie elementow z vectora (for range): " << endl;
	for(int nr : wholeNumbers)
		cout << nr << endl;
	
	
	
	
	cout << "Wypisanie elementow z vectora (for range auto): " << endl;	
	for(auto nr : wholeNumbers)
		cout << nr << endl;

		
	system("PAUSE");
	return 0;
}
