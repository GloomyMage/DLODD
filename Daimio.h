#pragma once
#include <iostream>
class Daimio
{
private:

    int RegenPV;

public:

    Daimio();
    Daimio(int R);
    ~Daimio();

    int getRegenPV();
    void setRegenPV(int R); // r�g�nration chaque tour 

    void Attaquer();
};
