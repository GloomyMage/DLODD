#pragma once
#include <iostream>

class Objets
{
private:
    int GainPV;
    int GainAttaque;
    int Attaque;
    int Resistance;

public:

    Objets();
    Objets(int a, int r);

    ~Objets();

    int getGainPV();

    int getGainAttaque();

    int getAttaque();
    void setAttaque(int a);

    int getResistance();
    void setResistance(int r);

    void utiliser();


};
