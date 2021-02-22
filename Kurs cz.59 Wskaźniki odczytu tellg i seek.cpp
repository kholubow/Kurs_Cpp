#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		tellg - tell get - powiedz, gdzie jest ustawiony wskaŸnik get (odczytu).
		seekg - seek get - ustaw wskaŸnik na pozycji... (zapisu).
		file >> buffer; - odczyt z pliku automatycznie ustawiony jest na samym pocz¹tku.
		ios::in || ios::app - wskaŸnik na samym koñcu bêdzie.
		
		
		
		
		¯eby wyniki uzyskiwane przy pomocy tellg i seekg by³y jak najbardziej poprawne, nale¿y
		korzystaæ podczas otwierania pliku z flagi ios::binary.
		
		
		dla seekg mo¿na jeszcze ustawiaæ flagi:
		ios::end - od koñca
		ios::beg (begin)- od pocz¹tku
		ios::cur (current)- od momentu skoñczenia
		

		seekg(wartoœæ_o_ile_ma_przesun¹æ_od_momentu_flagi, flaga);
		ios::beg - domyœlna flaga dla seekg
		
		
		
		ofstream - klasa ta nie zawiera tellg, seekg.
	*/
	fstream file;	
	file.open("test.txt", ios::in | ios::binary);
	if (file.is_open())
	{
		
		string buffer;
		streampos sizeOfFile; //Klasa przechowuj¹ca pozycje
		file.seekg(0, ios::end);
		sizeOfFile = file.tellg();
		cout << "Size of file is: " << sizeOfFile << " bytes" << endl;
		
		file.clear();
		file.seekg(0);
		do 
		{
			file >> buffer;
			cout << buffer << endl;
					
		} while (!file.eof());
		
		
		cout << "file.rdstate(): " << endl;
		cout << file.rdstate() << endl;
		
		
		if ((file.rdstate() ^ ifstream::eofbit) == 0)
			file.clear();
		
		if (file.good())
		{
			cout << "[1]good file >> buffer string" << endl;
			cout << "Operacja wykonana prawidlowo" << endl;
			cout << "Dalsze instrukcje do wykonania, jezeli z plikiem jest okej" << endl;
			
			
			cout << "Gdzie jest wskaznik odczytu: " << endl;
			cout << file.tellg() << endl;
			
			
			cout << "Na co wskazuje teraz wskaznik w pliku (22): " << endl;
			file >> buffer;
			cout << buffer << endl;
			
			
			file.clear();
			file.seekg(0);
			cout << "wskaznik w pliku ustawiony na 0 bajt (Testowy): " << endl;
			file >> buffer;
			cout << buffer << endl;
		
			
			cout << "Gdzie jest wskaznik odczytu: " << endl;
			cout << file.tellg() << endl;
			
			
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
			
			
			
			file.clear();
			file.seekg(-4,ios::end); // o ile przesun¹æ wskaŸnik odczytu od koñca pliku
			// -5 5 bajtów minus od koñca, 5 - 5 bajtów plus od koñca.
			cout << "wskaznik w pliku ustawiony na -4 bajt od konca(u): " << endl;
			file >> buffer;
			cout << buffer << endl;
			cout << "Gdzie jest wskaznik odczytu: " << endl;
			cout << file.tellg() << endl;						
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	
	

	system("PAUSE");
	return 0;
}
