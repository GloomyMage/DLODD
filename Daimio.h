#pragma once
#include <iostream>
class Daimio
{
private:

    int Regenerer;

public:

    Daimio();
    Daimio(int R);
    ~Daimio();

    int getRegenerer();
    void setRegenerer(int R); // régénration chaque tour 

    void Attaquer();
};
