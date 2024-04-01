#include "Objets.h"

Objets::~Objets()
{
}

int Objets::getGainPv()
{
    return GainPV;
}

int Objets::getGainAttaque()
{
    return GainAttaque;
}

int Objets::getAttaque()
{
    return Attaque;
}

void Objets::setAttaque(int a)
{
    Attaque = a;
}

int Objets::getResistance()
{
    return Resistance;
}

void Objets::setResistance(int r)
{
    Resistance = r;
}

class ObjetsDeSoin : public Objets
{
private:
    int GainPV;
    int GainAttaque;

public:

    ObjetsDeSoin();

    int getGainPV();
    int getGainAttaque();

    void utiliser() {
        std::cout << "Utilisation de l'objet : " << nom << std::endl;
    }
};

class ObjetsDattaque : public Objets
{
private:
    int Attaque;
    int Resistance;

public:

    ObjetsDattaque();

    int getAttaque();
    int getResistance();

    void utiliser()
    {
        Resistance--; // enlève -1 à chaque tour 
    }
};