#include <iostream>

using namespace std;

int main()
{
	/*
		Zmienne i oraz j = zmienne licznikowe.
	*/
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(4); // Funkcja robi¹ca ³adne odstêpy
			cout << i*j;
		}
		cout << endl;
	}
	

	getchar();
	system("PAUSE");
	return 0;
}
