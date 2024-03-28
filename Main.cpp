#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;


// Manipulators for turning colors on and colors off when printing text
ostream& blue_on(ostream& os)
{
	return os << "\033[96m";
}
ostream& blue2_on(ostream& os)
{
	return os << "\033[94m";
}
ostream& red_on(ostream& os)
{
	return os << "\033[31m";
}
ostream& yellow_on(ostream& os)
{
	return os << "\033[93m";
}
ostream& all_off(ostream& os)
{
	return os << "\033[0m";
}
// --------------------------------------------------------------------

void Combat(string mob) {
	system("PAUSE");
	system("CLS");
	cout << red_on << "Combat " << mob << all_off << endl << endl;
}

void Choix1(bool choix) {
	system("CLS");
	if (!choix) {
		cout << blue_on << "Le ninja contourne le village en prenant le chemin le plus long pour rester discret et il atteint le palais, fatigue. ";
		cout << red_on << "- 5 PV" << all_off << endl << endl;
	}
	else {
		cout << blue_on << "Le ninja traverse le village en se faisant passer pour un voyageur." << all_off << endl;
		int random = rand() % 100;	// random value between 0 and 99
		if (random < 60)	// 60% chance 
		{
			cout << blue_on << "Sur son chemin, il croise un marchand d onigiri et en achete. ";
			cout << yellow_on << "+1 Onigiri" << all_off << endl << endl;
		}
	}
	system("PAUSE");
}

void Histoire() {

	bool choix;
	system("CLS");
	cout << blue_on << "Dans l ombre des montagnes japonaises de la periode Sengoku, un ninja solitaire, nomme Takeshi, recoit une mission perilleuse :" << endl;
	cout << blue2_on << "Eliminer le Daimio installe dans le village voisin." << endl;
	cout << blue_on << "Une fois la nuit tombee et tous les samourais reperes, il arrive devant le village." << all_off << endl << endl;
	system("PAUSE");
	cout << endl << blue_on << "Pour ne pas se faire remarquer, il doit user de strategie et une question se pose : " << blue2_on << "contourner le village ? ou le traverser ? " << all_off << endl;
	cout << endl << "[Entrez (0) pour la premiere option et (1) pour la seconde option.] ";
	cin >> choix;

	Choix1(choix);

	cout << endl << endl << blue_on << "La traversee est rapide et le palais se trouve a present devant lui." << endl;
	cout << "Malheureusement, a cet instant, un garde en patrouille devant le palais remarque le ninja malgre son deguisement. " << red_on << "Le combat est engage." << all_off << endl << endl;
	
	Combat("Samumu_Faible");
}

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));

	cout << "Hello world";

	Histoire();

	return 0;
}

