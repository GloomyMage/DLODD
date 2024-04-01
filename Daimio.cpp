#include "Daimio.h"

Daimio::~Daimio()
{
}
int Daimio::getRegenerer()
{
    return Regenerer;
}

void Daimio::setRegenerer(int R)
{
    Regenerer = R;
}




class Daimio : public Ennemi
{
private:
    int Regenerer;

public:
    Daimio() : Ennemi("Daimio", 40), attaque(20) {}

    Daimio::Daimio(int R)
    {
    }


    void Attaquer() {
        Ennemi::attaquer();
        std::cout << "Daimio inflige " << attaque << " points de d�g�ts !" << std::endl;
    }

    void Regenerer() {
        pointsDeVie += 5;
        if (pointsDeVie > 40) {
            pointsDeVie = 40;
        }
    }// +5 chaque tour, se bloque � 40 PV 
};