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
    void setRegenerer(int R); // r�g�nration chaque tour 

    void Attaquer();
};
