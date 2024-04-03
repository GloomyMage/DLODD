#include "Daimio.h"

Daimio::~Daimio()
{
}
int Daimio::getRegenPV()
{
    return RegenPV;
}

void Daimio::setRegenPV(int R)
{
    RegenPV = R;
}




class Daimio : public Ennemi
{
private:
    int RegenPV;

public:
    Daimio() : Ennemi("Daimio", 40), attaque(20) {}

    Daimio::Daimio(int R)
    {
    }


    void Attaquer() {
        Ennemi::attaquer();
        std::cout << "Daimio inflige " << attaque << " points de dégâts !" << std::endl;
    }

    void RegenPV() {
        pointsDeVie += 5;
        if (pointsDeVie > 40) {
            pointsDeVie = 40;
        }
    }// +5 chaque tour, se bloque à 40 PV 
};