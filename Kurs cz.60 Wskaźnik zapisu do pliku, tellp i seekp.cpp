#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		tellp - tell put - powiedz, gdzie jest ustawiony wskaŸnik zapisu.
		seekp - seek put - ustaw wskaŸnik do zapisu na pozycji...
		
		
		dla seekp mo¿na jeszcze ustawiaæ flagi:
		ios::end - od koñca
		ios::beg (begin)- od pocz¹tku
		ios::cur (current)- od momentu skoñczenia
		

		seekp(wartoœæ_o_ile_ma_przesun¹æ_od_momentu_flagi, flaga);
		ios::beg - domyœlna flaga dla seekp
		
		
	*/
	fstream file;	
	file.open("test4.txt", ios::out | ios::binary);
	if (file.is_open())
	{
		string tmp = "Testowy tekst o niczym";
		
		file << tmp;

		cout << "Gdzie jest wskaznik zapisu: " << endl;
		cout << file.tellp() << endl;
		
		file.clear();
		file.seekp(0);
		cout << "wskaznik w pliku ustawiony na 0 bajt: " << endl;
		cout << "Gdzie jest wskaznik zapisu: " << endl;
		cout << file.tellp() << endl;	
		
		
		cout << endl;	
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		
		
		
		cout << "Podmiana czegos na nowej pozycji, samej literki lub czegos wiecej: " << endl;
		file << "TtTyYy";
		cout << "Gdzie jest wskaznik zapisu: " << endl;
		cout << file.tellp() << endl;
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	system("PAUSE");
	return 0;
}
