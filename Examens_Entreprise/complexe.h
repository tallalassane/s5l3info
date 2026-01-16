#ifndef COMPLEXE_H
#define COMPLEXE_H
#include "soiree.h"
class Complexe
{
    int tmax;
    soiree **tab;
public:
    Complexe(int );
    ~Complexe();
    void ajoutesoiree(soiree&);
    void affiche();
    int gain();

};

#endif // COMPLEXE_H
