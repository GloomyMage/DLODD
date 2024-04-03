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
    void setRegenPV(int R); // régénration chaque tour 

    void Attaquer();
};
