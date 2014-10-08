/*Harjoitus 9
Santeri Taponen
Tee ohjelma, joka toimii laskimena. Käyttäjältä kysytään kaksi kokonaislukua, jonka jälkeen ohjelma antaa valikon laskutoimituksista. Valikko nayttaa seuraavalta:

VALIKKO 1. Summa 2. Erotus 3. Tulo 4. Osamaara 5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
Versio 1.0
8.10.2014*/
#include <iostream>
using namespace std;
void main()
{
	int luku1, luku2;
	int valikko;
	cout << "Anna kokonaisluku: ";
	cin >> luku1;
	cout << "\nAnna toinen kokonaisluku: ";
	cin >> luku2;
	cout << "\nVALIKKO";
	cout << "\n1. Summa";
	cout << "\n2. Erotus";
	cout << "\n3. Tulo";
	cout << "\n4. Osamäärä";
	cout << "\n5. jakojäännös\n";
	cin >> ws >> valikko;
	switch (valikko)
	{
	case 1:cout << luku1 + luku2 << "\n";
		break;
	case 2:cout << luku1 - luku2 << "\n";
		break;
	case 3:cout << luku1*luku2 << "\n";
		break;
	case 4:cout << (float)luku1 / luku2 << "\n";
		break;
	case 5:cout << luku1 % luku2 << "\n";
		break;
	}


}