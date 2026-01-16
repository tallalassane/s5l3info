#ifndef ANNIVERSAIRES_ENTREPRISE_H
#define ANNIVERSAIRES_ENTREPRISE_H
#include "soiree.h"

class Anniversaires_entreprise:public soiree
{
    int frais_com;
    int forfais;
    int frais_anni;
public:
    Anniversaires_entreprise(Date d, char* , string, int, int, int, int);
    friend ostream& operator<<(ostream&, Anniversaires_entreprise&);
    void affiche();
    int calculcout();
};

#endif // ANNIVERSAIRES_ENTREPRISE_H
