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

// Wait function
void Pause() {
	cout << blue_on;
	system("PAUSE");
	cout << all_off;
}


// --------------------------------------------------------------------
// -------------------------- COMBAT -----------------------------------

void Combat(string mob) {
	Pause();
	system("CLS");
	cout << red_on << "Combat " << mob << all_off << endl << endl;
	cout << blue_on;
	Pause();
	system("CLS");
}

// --------------------------------------------------------------------
// ------------------------ HISTOIRE ----------------------------------
// 
// ------------------------- Choix ------------------------------------

void Choix1(bool choix) {
	system("CLS");
	if (!choix) {
		cout << "Le ninja contourne le village en prenant le chemin le plus long" << endl << "pour rester discret et il atteint le palais, fatigue. ";
		cout << red_on << "- 5 PV" << all_off << endl << endl;
	}
	else {
		cout << "Le ninja traverse le village en se faisant passer pour un voyageur." << endl;
		int random = rand() % 100;	// random value between 0 and 99
		if (random < 60)	// 60% chance 
		{
			cout << "Sur son chemin, il croise un marchand d onigiri et en achete. ";
			cout << yellow_on << "+1 Onigiri" << all_off << endl << endl;
		}
	}
	Pause();
}

void Choix2(bool choix) {
	system("CLS");
	if (choix) 
	{
		cout << "Trouvant un autre passage, Takeshi tombe sur la porte de la cour arriere." << endl;
		int random = rand() % 100;	// random value between 0 and 99
		if (random < 30)	// 30% chance 
		{
			cout << "Il reussit a l ouvrir et trouve un nunchaku. ";
			cout << yellow_on << "+1 Nunchaku" << all_off << endl;
		}
		else {
			cout << "Il tente d ouvrir la porte, mais rien ne se passe. " << endl;
		}

		cout << "Seulement, il prend trop de temps et un autre garde le voit. " << endl << endl;
		
		Combat("Samumu_Faible");

		cout << "Malgre son agilite, le ninja ne trouve pas d autres passages," << endl << "sauf la porte principale, mais il se fera facilement reperer" << endl << "alors il decide de passer par-dessus le mur." << endl << endl;
		Pause();
	}
}

// ---------------------- Storyline ---------------------------------

void Histoire() {

	bool choix;
	system("CLS");
	cout << "Dans l ombre des montagnes japonaises de la periode Sengoku," << endl << "un ninja solitaire, nomme Takeshi, recoit une mission perilleuse : " << endl;
	cout << blue2_on << "Eliminer le Daimio installe dans le village voisin." << all_off << endl;
	cout << "Une fois la nuit tombee et tous les samourais reperes, il arrive devant le village." << endl << endl;
	Pause();
	cout << endl << "Pour ne pas se faire remarquer, il doit user de strategie " << endl << "et une question se pose : " << blue2_on << "contourner le village ? ou le traverser ? " << all_off << endl;
	cout << endl << blue_on << "[Entrez (0) pour la premiere option et (1) pour la seconde option.] " << all_off;
	cin >> choix;

	Choix1(choix);

	cout << endl << endl << "La traversee est rapide et le palais se trouve a present devant lui." << endl;
	cout << "Malheureusement, a cet instant, un garde en patrouille devant le palais" << endl << "remarque le ninja malgre son deguisement. " << endl << red_on << "Le combat est engage." << all_off << endl << endl;
	
	Combat("Samumu_Faible");

	cout << "Apres avoir elimine le garde, le ninja doit" << blue2_on << " se depecher de passer" << all_off << " par-dessus le mur " << endl << "ou " << blue2_on << "trouver un autre passage" << all_off << " pour atteindre l interieur du palais." << endl;
	cout << endl << blue_on << "[Entrez (0) pour la premiere option et (1) pour la seconde option.] " << all_off;
	cin >> choix;

	Choix2(choix);

	cout << "Apres avoir grimper rapidement le mur, le ninja se retrouve dans la cour interieure. " << endl << endl;
	cout << "Arrivant a eviter tous les ennemis sur son chemin," << endl << "il traverse la cour interieure et se retrouve derriere le palais." << endl;

	Pause();
	system("CLS");

	cout << "Une fenetre est ouverte et le ninja s y infiltre " << endl << "se retrouvant dans la cuisine. Il y trouve de la nourriture " << endl << "et s en delecte. ";
	cout << yellow_on << "+2 Mochi +1 Ramen" << all_off << endl << endl;

}


// --------------------------------------------------------------------
// -------------------------- MAIN ------------------------------------

int main() {
	// VARIABLES


	srand(static_cast<unsigned int>(time(nullptr))); // To ramdomize rand()


	// MAIN SCREEN
	cout << " +++++++++++" << endl << endl;
	cout << " DANS L OMBRE DU DAIMIO" << endl << endl;
	cout << " +++++++++++" << endl << endl;
	Pause();

	// START
	Histoire();

	return 0;
}

