#include <iostream>
#include <string>
// h - header - nag³ówek. Do niskopoziomowych zajêæ ze string.
#include <string.h>

using namespace std;


int main(int argc, char** argv) 
{
	/*
		argc - arguments counter - licznik argumentów
		argv - arguments value - wartoœci tych argumentów
		
		Przyjmowane parametry z zewn¹trz, gdy uruchamiamy program.exe
		przy pomocy cmd i przekazujemy parametry do programu, np.
		program.exe a b c d
		argc jest zawsze równy przynajmniej 1, poniewa¿ w argv musi byæ co najmniej
		przechowywana jedna wartoœæ.
		T¹ wartoœci¹ jest œcie¿ka lub nazwa naszego programu.
		
		
		Po wpisaniu w cmd program.exe a b c d, argc wynosi 5 (1 + 4)
		Po wpisaniu w cmd program.exe w argv[0] przechowywana jest wartoœæ bêd¹ca 
		nazw¹ naszego programu.
		
		
		
		Mo¿na napisaæ pêtlê wypisuj¹c¹ to, co znajduje siê w argv bo mamy przecie¿ argc licz¹ce
		ile razem jest przekazywanych parametrów do programu.
	*/	
	int a = 5;
	
	if (a == 10)
	//	return EXIT_FAILURE;
		return 1;
		
	// Generalnie arg[] i arg2 s¹ wskaŸnikami, tablicami, na 1-wszy element
	char arg[] = {'a', 'b', 'c'};
	char *arg2 = "ciag znakow";
	// tablica stringów
	// ¿eby np. dostaæ siê do poszczególnej literki trzeba zastosowaæ
	// pojêcie tablicy dwuwymiarowej, np. arg3[0][2] to = a
	char *arg3[] = {"ciag znakow a", "ciag znakow b", "ciag znakow c"};
	
	string napis = arg3[0];
	
	cout << "ciag znakow a: ";
	cout << napis << endl;
	cout << "Literka a arg3[0][2] to = a: ";
	cout << arg3[0][2] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "argc: " << endl;
	cout << argc << endl;
	cout << "Wartosc przechowywana w argv[0]: " << endl;
	cout << argv[0] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	// Projekt odpalany przy pomocy cmd.
	// cd lokalizacjaProjektu
	// dir
	// plik .exe stworzony podczas kompilacji mo¿na wywo³aæ
	// nazwa.exe a b c d
	// W tym momencie do programu zosta³y wys³ane parametry
	// Wszystkie te parametry znajduj¹ siê w³aœnie w argc
	
	
	
	
	// argv - wskaŸnik na wskaŸnik
	// argc-- - POSTdekrementacja, pierw sprawdzi, potem -- i wyœwietli
	// dopiero argc = 0 bêdzie stop wykonywanej pêtli
	// *argv++ - wy³uskiwanie kolejnych wartoœci kryj¹cych siê pod adresami przechowywanymi w argv
	// 1. Wyœwietli 2. POSTinkrementacja
	int tmpArgc = argc;
	char** tmpArgv = argv;
	cout << "Wartosci przechowywane w argv: " << endl;	
	while(tmpArgc--)
		cout << *tmpArgv++ << endl;
		
	tmpArgc = argc;
	tmpArgv = argv;
		
	cout << "Wartosci przechowywane w argv, wiecej: " << endl;	
	while(tmpArgc--)
	{
		napis = *tmpArgv;
		if (napis == "aa")
			cout << "[KOMUNIKAT] aa w przekazanych parametrach do programu w cmd" << endl;
			
		
		// strcmp - StringCompare, 2 argumenty, == 0, czyli s¹ równe
		if (strcmp(*tmpArgv, "aa") == 0)
			cout << "[KOMUNIKAT strcmp] aa cmd inne porownanie" << endl;
		
		cout << *tmpArgv++ << endl;
	}
	
	
	
	
	
	system("pause");
	return 0;
	//return EXIT_SUCCESS;
	// return EXIT_FAILURE // = return 1		
	return 0;
}
