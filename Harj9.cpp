/*Harjoitus 9
Santeri Taponen
Tee ohjelma, joka toimii laskimena. K�ytt�j�lt� kysyt��n kaksi kokonaislukua, jonka j�lkeen ohjelma antaa valikon laskutoimituksista. Valikko nayttaa seuraavalta:

VALIKKO 1. Summa 2. Erotus 3. Tulo 4. Osamaara 5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen nayt�lle.
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
	cout << "\n4. Osam��r�";
	cout << "\n5. jakoj��nn�s\n";
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