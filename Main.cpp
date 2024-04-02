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
	cout << all_off << endl << endl;
}


// --------------------------------------------------------------------
// -------------------------- COMBAT ----------------------------------

// Fonction appelée quand on entre en combat
// Prend en variable l'ennemi à affronter et le PV actuel du ninja
// Renvoie false (0) si perdu, true (1) si gagné
bool Fight(string mob, int PV) {
	Pause();
	system("CLS");
	cout << red_on << "Combat " << mob << all_off << endl << endl;
	cout << blue_on;
	Pause();
	system("CLS");
	return true;
}

// --------------------------------------------------------------------
// ------------------------ HISTOIRE ----------------------------------

int Histoire() {
	int PV = 50; // PV du ninja

	// vector<Objets> inventaire; // !!!!!!!!!!!!!!!!!!!!

	bool choix; // Choix du joueur
	bool combatGagne; // Résultat du combat, si gagné ou perdu

	system("CLS");
	cout << "Dans lombre des montagnes japonaises de la periode Sengoku, un jeune ninja nomme Takeshi" << endl;
	cout << "se voit confier une mission dune extreme dangerosite : " << blue2_on << "assassiner le Daimyo " << all_off << "regnant sur le" << endl;
	cout << "village voisin." << endl << endl;
	
	Pause();
	system("CLS");
	
	cout << "Bien quil ait ete entraine pour ce genre de tache, son coeur tambourine dans sa poitrine, une " << endl;
	cout << "nervosite insidieuse menacant de perturber sa concentration. Pourtant, il sait quil doit demeurer " << endl;
	cout << "dun calme absolu sil souhaite reussir." << endl << endl;

	Pause();
	
	cout << "Ce qui pourrait sembler banal pour un autre ninja est en realite dune importance capitale pour " << endl;
	cout << "Takeshi. Il sagit de sa premiere mission en solitaire, un test crucial qui scellera son destin : " << blue2_on << "etre" << endl;
	cout << "acclame parmi les siens" << all_off << " ou " << blue2_on << "sombrer dans loubli" << all_off << ". Suivant les enseignements quon lui a " << endl;
	cout << "inculques, Takeshi prend une profonde inspiration, vidant lentement ses poumons pour reguler" << endl;
	cout << "son rythme cardiaque et apaiser ladrenaline qui pulse dans ses veines." << endl << endl;

	Pause();
	system("CLS");

	cout << "Se fondant parmi les cimes des arbres de la foret qui borde le village voisin, le ninja attend " << endl;
	cout << "patiemment que le voile de la nuit setende, devenant ainsi quun avec le paysage. Dans cette " << endl;
	cout << "obscurite naissante, il commence a elaborer minutieusement les details de sa mission, chaque" << endl;
	cout << "mouvement calcule avec precision, chaque instant crucial pour assurer sa reussite." << endl << endl;

	Pause();
	system("CLS");

	cout << "Alors que la nuit enveloppe le paysage, le ninja quitte son perchoir et sapproche furtivement " << endl;
	cout << "du village. Cependant, il remarque avec une pointe dinquietude que davantage de gardes ont ete" << endl;
	cout << "deployes le long de lentree." << endl << endl;

	cout << "Cest un contretemps quil avait deja envisage, mais qui necessite maintenant une adaptation de " << endl;
	cout << "sa strategie." << endl << endl;

	Pause();

	cout << "La discretion demeure primordiale, et il se trouve confronte a un choix crucial : " << blue2_on << "contourner" << endl;
	cout << "le village " << all_off << "ou" << blue2_on  << " tenter de le traverser en se dissimulant sous un deguisement" << all_off << "." << endl << endl;
	cout << blue_on << "[Entrez (0) pour la premiere option et (1) pour la seconde option.] " << all_off;
	cin >> choix;

	system("CLS");
	if (!choix) {
		cout << "Le ninja choisit la voie de la prudence en contournant le village par le chemin le plus" << endl;
		cout << "eloigne, preferant sacrifier du temps pour preserver sa discretion. Apres un long periple ereintant " << endl;
		cout << "a travers les sentiers sinueux et les bois sombres, il finit par atteindre le palais du Daimyo." << endl << endl;

		cout << "Son corps " << blue2_on << "fatigue" << all_off << " trahit les traces de son periple, mais son esprit demeure alerte, vibrant d'une " << endl;
		cout << "determination sans faille. Malgre la fatigue qui lenvahit, Takeshi est au fait que sa mission est" << endl;
		cout << "loin detre terminee. ";
		cout << red_on << "- 5 PV" << all_off << endl << endl;
		PV -= 5;

		Pause();

		cout << "Sous son regard resolu, le palais du Daimyo se dresse majestueusement devant lui. Avec un " << endl;
		cout << "melange de respect et de determination, le ninja sapprete a franchir ses portes, pret a affronter les " << endl;
		cout << "defis ultimes qui lattendent a linterieur, sachant que le succes de sa mission repose entierement " << endl;
		cout << "sur ses epaules." << endl << endl;

		Pause();
		system("CLS");
	}
	else {
		cout << "Apres une breve reflexion, Takeshi decide de jouer la carte de la subtilite. Il opte pour le" << endl;
		cout << blue2_on << "deguisement" << all_off << ", sachant que son habilete a se fondre dans la masse pourrait lui permettre de passer " << endl;
		cout << "inapercu. Avec une precision chirurgicale, il se metamorphose en un villageois ordinaire, veillant " << endl;
		cout << "a chaque detail de sa tenue et de son comportement pour paraitre le plus authentique possible." << endl << endl;

		Pause();
		system("CLS");

		cout << "Une fois son deguisement en place, Takeshi sengage sur le chemin qui mene au coeur du village," << endl;
		cout << "pret a affronter tous les defis qui se dresseront sur sa route vers sa cible." << endl << endl;

		Pause();

		int random = rand() % 100;	// random value between 0 and 99
		if (random < 60)	// 60% chance 
		{
			cout << "Alors quil avance sur son chemin, Takeshi croise un humble " << blue2_on << "marchand donigiris" << all_off << "et ";
			cout << "decide den acheter, reconnaissant limportance de se sustenter avant de poursuivre sa mission. ";
			cout << yellow_on << "+1 Onigiri" << all_off << endl << endl;
			// ObjetsDeSoin Onigiri_1(15, 2);
			// inventaire.push_back(Onigiri_1);  // !!!!!!!!!!!!!!!!!!!!
			
			Pause();
			system("CLS");
		}

		
	}

	cout << "La traversee jusquau palais se deroule rapidement, mais juste au moment ou Takeshi se trouve " << endl;
	cout << "devant ses imposantes portes, " << blue2_on << "un garde en patrouille" << all_off << " le repere malgre son deguisement." << endl << endl;

	cout << "Sans plus attendre, le ninja se retrouve plonge dans un " << red_on << "combat acharne" << all_off << "." << endl << endl;

	combatGagne = Fight("SamumuFaible", PV);
	if (!combatGagne) {
		return 0;
	}

	cout << "Apres un affrontement bref mais intense, Takeshi parvient a neutraliser le garde, sachant" << endl;
	cout << "pertinemment que chaque seconde compte." << endl << endl;

	Pause();

	cout << "Sans perdre de temps, Takeshi se met en quete dun moyen pour penetrer a linterieur du palais." << endl;
	cout << "Il se retrouve face a une decision cruciale : " << blue2_on << "passer par-dessus le mur" << all_off << " ou " << endl;
	cout << blue2_on << "trouver un autre passage" << all_off << " pour atteindre l'intérieur du palais." << endl << endl;

	cout << endl << blue_on << "[Entrez (0) pour la premiere option et (1) pour la seconde option.] " << all_off;
	cin >> choix;

	system("CLS");
	if (choix) {
		cout << blue2_on << "En cherchant un autre passage, Takeshi decouvre une porte dissimulee." << all_off << "Il y jette un regard " << endl;
		cout << "attentif, evaluant rapidement les possibilites quelle offre pour son infiltration." << endl << endl;

		Pause();

		int random = rand() % 100;	// random value between 0 and 99
		if (random < 30)	// 30% chance 
		{
			cout << "Avec prudence, il l'ouvre et trouve " << blue2_on << "un nunchaku inattendu" << all_off << " dans l'obscurité. Cette ";
			cout << "decouverte pourrait etre cruciale pour les defis a venir. ";
			cout << yellow_on << "+1 Nunchaku" << all_off << endl << endl;
			// ObjetsDattaque Nunchaku_1(30, 2);
			// inventaire.push_back(Nunchaku_1);  // !!!!!!!!!!!!!!!!!!!!
		}
		else {
			cout << "Takeshi tente douvrir la porte discretement, mais elle resiste. " << endl << endl;
		}

		cout << "Malgre ses talents dagilite, Takeshi ne trouve " << blue2_on << "aucun autre passage disponible " << all_off << "a part la " << endl;
		cout << "porte principale, mais il sait quil se fera facilement reperer sil lemprunte. Sans autre choix, il " << endl;
		cout << "decide donc de passer par-dessus le mur pour poursuivre sa mission." << endl << endl;

		cout << "Seulement, il sest trop attarde et " << red_on << "un autre garde" << all_off << "lapercoit et le combat est engage." << endl << endl;

		combatGagne = Fight("SamumuFaible", PV);
		if (!combatGagne) {
			return 0;
		}
		cout << "Le ninja parvient a surmonter son adversaire, en le reduisant au silence de la mort." << endl << endl;
		cout << "Malgre son agilite, le ninja ne trouve pas d autres passages," << endl << "sauf la porte principale, mais il se fera facilement reperer" << endl << "alors il decide de passer par-dessus le mur." << endl << endl;
		Pause();
		system("CLS");
	}
	cout << blue2_on << "Il decide de grimper rapidement par-dessus le mur," << all_off << " utilisant ses competences acrobatiques " << endl;
	cout << "pour surmonter cet obstacle avec agilite. Une fois de lautre cote, il atterrit dans la " << blue2_on << "cour" << endl;
	cout << "interieure " << all_off << "du palais, pret a poursuivre sa mission." << endl << endl;

	Pause();

	cout << "Evitant habilement tous les gardes sur son chemin, le ninja traverse la " << blue2_on << "cour interieure" << all_off << " et atteint " << endl;
	cout << "larriere du palais. Reperant une fenetre ouverte, il sy faufile silencieusement, atterrissant dans la " << endl;
	cout << blue2_on << "cuisine" << all_off << "Il y trouve de la nourriture. ";
	cout << yellow_on << "+2 Mochi +1 Ramen" << all_off << endl << endl;
	// ObjetsDeSoin Mochi_1(15, 0);
	// ObjetsDeSoin Mochi_2(15, 0);
	// ObjetsDeSoin Ramen_1(20, 5);
	// inventaire.push_back(Mochi_1); 
	// inventaire.push_back(Mochi_2);  
	// inventaire.push_back(Ramen_1);  // !!!!!!!!!!!!!!!!!!!!

	Pause();

	cout << "Cependant, en sortant de la piece, il est surpris par un" << red_on << " samourai." << all_off << endl << endl;

	combatGagne = Fight("SamumuMoyen", PV);
	if (!combatGagne) {
		return 0;
	}

	cout << "Dans un mouvement vif, Takeshi le neutralise avant de recuperer la lance du defunt. ";
	cout << yellow_on << "+1 Lance" << all_off << endl << endl;
	// ObjetsDattaque Lance_1(25, 3);
	// inventaire.push_back(Lance_1);  // !!!!!!!!!!!!!!!!!!!!

	cout << "A pas de loup, le ninja continue son periple a travers le couloir obscur, ses sens en alerte" << endl;
	cout << "a chaque pas. Arrive a un carrefour, il est confronte a un choix crucial : ";
	cout << blue2_on << "droite " << all_off << "ou " << blue2_on << "gauche" << all_off << " ?" << endl << endl;

	cout << blue_on << "[Entrez (0) pour la premiere option et (1) pour la seconde option.] " << all_off;
	cin >> choix;

	system("CLS");

	if (!choix) {
		cout << blue2_on << "Takeshi choisit le chemin de droite " << all_off << "et arrive dans la salle a manger du palais, ou quelques " << endl;
		cout << "samourais se preparent pour le repas a venir. La tension monte alors que ce dernier entre " << endl;
		cout << "furtivement dans la piece, recuperant de la nourriture pour reprendre des forces avant le combat " << endl;
		cout << "imminent contre le redoutable Daimyo. ";
		cout << yellow_on << "+1 Onigiri +1 Mochi" << all_off << endl << endl;
		// ObjetsDeSoin Mochi_3(15, 0);
		// ObjetsDeSoin Onigiri_2(15, 2);
		// inventaire.push_back(Mochi_3); 
		// inventaire.push_back(Onigiri_2);  // !!!!!!!!!!!!!!!!!!!!

		cout << "Sans avertissement, les samourais remarquent sa presence et se mettent en position de combat." << endl;
		cout << red_on << "Le conflit est inevitable." << all_off << endl << endl;

		combatGagne = Fight("SamumuFaible", PV);
		if (!combatGagne) {
			return 0;
		}
		combatGagne = Fight("SamumuFaible", PV);
		if (!combatGagne) {
			return 0;
		}
		combatGagne = Fight("SamumuFaible", PV);
		if (!combatGagne) {
			return 0;
		}

		cout << "Malgre le nombre, il parvient a neutraliser les samourais un par un, son katana dansant " << endl;
		cout << "dans un ballet meurtrier." << endl << endl;

		cout << "Finalement, les samourais sont vaincus, gisant sur le sol de la salle a manger. Takeshi reprend " << endl;
		cout << "son souffle, conscient que chaque victoire le rapproche un peu plus de son objectif ultime : " << endl;
		cout << "assassiner le redoutable Daimyo et accomplir sa mission." << endl << endl;

		Pause();
		system("CLS");
	}
	else {
		cout << "Apres une breve hesitation," << blue2_on << " il opte pour le chemin de gauche" << all_off << ", qui le mene directement dans " << endl;
		cout << "une salle gardee par un samurai vigilant." << red_on << " Le combat est inévitable." << all_off << endl << endl;

		combatGagne = Fight("SamumuMoyen", PV);
		if (!combatGagne) {
			return 0;
		}
		cout << "Finalement, Takeshi triomphe avec une efficacite silencieuse." << endl << endl;
		cout << "Penetrant ensuite dans la salle," << blue2_on << " il decouvre avec satisfaction un arsenal darmes" << all_off << " soigneusement " << endl;
		cout << "rangees. Sans hesiter, il se saisit du nunchaku. Il sait parfaitement que cette arme familiere bien " << endl;
		cout << "maitrisee lui sera dune grande utilite face a son ennemi principal, le redoutable Daimyo qu'il est " << endl;
		cout << "determine a affronter. ";
		cout << yellow_on << "+1 Nunchaku" << all_off << endl << endl;
		// ObjetsDattaque Nunchaku_2(30, 2);
		// inventaire.push_back(Nunchaku_2);  // !!!!!!!!!!!!!!!!!!!!

		Pause();
		system("CLS");
	}
	cout << "Apres etre ressorti, il repere des escaliers et sait dinstinct quil sapproche du Daimyo. " << endl;
	cout << "Le coeur tambourinant, il monte les marches dans un seul et meme mouvement. Comme il lavait" << endl;
	cout << "pressenti, le couloir est peuple de samourais royaux, mais grace a sa finesse et a son agilite, il " << endl;
	cout << "parvient a eviter detre repere, se faufilant habilement dans une piece adjacente." << endl << endl;

	cout << "Malgre la tension palpable, Takeshi garde son sang-froid et se concentre sur lobjectif qui lui " << endl;
	cout << "reste a accomplir." << endl << endl;

	Pause();
	system("CLS");

	cout << "Il ressort de la piece et se retrouve" << red_on << " face a trois gardes" << all_off << ", probablement alertes par la disparition de " << endl;
	cout << "leurs camarades qui ne sont pas revenus de leur ronde. La situation devient critique alors que les " << endl;
	cout << "ennemis se regroupent et se ruent vers lui, realisant son objectif." << endl << endl;

	Pause();

	combatGagne = Fight("SamumuMoyen", PV);
	if (!combatGagne) {
		return 0;
	}
	combatGagne = Fight("SamumuMoyen", PV);
	if (!combatGagne) {
		return 0;
	}
	combatGagne = Fight("SamumuRoyal", PV);
	if (!combatGagne) {
		return 0;
	}

	cout << "Sans perdre une seconde, Takeshi decide de mettre en œuvre une strategie dinfiltration " << endl;
	cout << "audacieuse. Il grimpe habilement sur les poutres du palais, se mouvant avec agilite dans les " << endl;
	cout << "ombres pour eviter detre repere. Les gardes, perplexes face a sa disparition soudaine, se lancent " << endl;
	cout << "a sa recherche, mais Takeshi les depasse en silence, se rapprochant de plus en plus de la salle du " << endl;
	cout << "Daimyo." << endl << endl;

	Pause();
	system("CLS");

	cout << "Dans la salle, le ninja trouve sa cible seule, une occasion en or pour lattaquer. Se glissant dans " << endl;
	cout << "lombre, il se prepare a lassaut, planifiant de surprendre le Daimyo en se laissant tomber sur lui " << endl;
	cout << "depuis les hauteurs." << endl << endl;

	Pause();
	system("CLS");

	cout << "Cependant, ce dernier se revele etre plus agile que prevu, esquivant habilement lattaque surprise " << endl;
	cout << "du jeune ninja. Pris au depourvu, Takeshi se retrouve face a un adversaire redoutable, mais ce" << endl;
	cout << "nest pas tout ! Le Daimyo, realisant la menace, " << red_on << "appelle aussitot ses gardes" << all_off << "qui se tiennent en " << endl;
	cout << "embuscade derriere la porte, prets a intervenir a tout moment." << endl;

	Pause();
	system("CLS");

	cout << "La situation devient critique pour le ninja alors que les gardes affluent dans la salle, l’erncerclant." << endl;
	cout << "Son avantage tactique a ete compromis, et il se retrouve confronte a une lutte desesperee pour sa " << endl;
	cout << "survie." << endl << endl;

	Pause();
	system("CLS");

	cout << red_on << "« TATAKAI ! » " << all_off << endl << endl;

	Pause();
	system("CLS");

	cout << red_on << "« TATAKAI ! » " << all_off << "lance le Daimyo dune voix tonitruante, signifiant « combat » en japonais, avant " << endl << endl;
	cout << "de se joindre a ses gardes royaux pour attaquer le ninja." << endl << endl;

	cout << "Ainsi, ce dernier se retrouve alors confronte a une veritable maree dennemis, chacun determine a " << endl;
	cout << "le submerger." << endl << endl;

	combatGagne = Fight("SamumuRoyal", PV);
	if (!combatGagne) {
		return 0;
	}
	combatGagne = Fight("SamumuRoyal", PV);
	if (!combatGagne) {
		return 0;
	}
	combatGagne = Fight("Daimyo", PV);
	if (!combatGagne) {
		return 0;
	}

	cout << "Finalement, apres un combat acharne et epuisant, il emerge victorieux, son souffle court mais son " << endl;
	cout << "esprit triomphant." << endl << endl;

	Pause();

	cout << "Le Daimyo git a ses pieds, vaincu, tandis que ses gardes, desarmes et desempares, sont contraints " << endl;
	cout << "de reconnaitre la suprematie du ninja. Ce dernier a surmonte chaque obstacle qui se dressait sur " << endl;
	cout << "sa route. Mais son periple ne fait que commencer, car en ces temps troubles, de nouveaux defis et" << endl;
	cout << "de nouvelles aventures lattendent." << endl << endl;

	Pause();

	return 1;
}


// --------------------------------------------------------------------
// -------------------------- MAIN ------------------------------------

int main() {
	// VARIABLES


	srand(static_cast<unsigned int>(time(nullptr))); // To ramdomize rand()


	// MAIN SCREEN
	cout << " +++++++++++" << endl << endl;
	cout << " DANS L OMBRE DU DAIMYO" << endl << endl;
	cout << " +++++++++++" << endl << endl;
	Pause();

	// START
	if (Histoire()) {
		cout << endl << blue2_on << "FIN" << blue_on << endl << endl;
	}
	else {
		system("CLS");
		cout << blue2_on << "Le ninja est tombe au combat et na pas pu mener a bien sa mission..." << blue_on << endl << endl;
	}

	return 0;
}

