#ifndef CANONES_H
#define CANONES_H

#include "disparos.h"

class Canones
{
public:
    Canones();
    int posx;
    int posy;
    Disparos * getdistance();
private:
    Disparos* Disparos;
};

#endif // CANONES_H
