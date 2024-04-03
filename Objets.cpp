#include "Objets.h"

Objets::Objets()
{
}

Objets::Objets(int a, int r)
{
}

Objets::~Objets()
{
}

int Objets::getGainPV()
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

void Objets::utiliser()
{
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

ObjetsDeSoin::ObjetsDeSoin()
{
}

int ObjetsDeSoin::getGainPV()
{
    return 0;
}

int ObjetsDeSoin::getGainAttaque()
{
    return 0;
}

ObjetsDattaque::ObjetsDattaque()
{
}

int ObjetsDattaque::getAttaque()
{
    return 0;
}

int ObjetsDattaque::getResistance()
{
    return 0;
}