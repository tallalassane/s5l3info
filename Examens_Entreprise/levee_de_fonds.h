#ifndef LEVEE_DE_FONDS_H
#define LEVEE_DE_FONDS_H
#include "soiree.h"
class Levee_de_fonds :public soiree
{
    int montant;
    int frais_levee_de_fonds;
    int frais_com;
public:
    Levee_de_fonds(Date,char*,string,int,int,int,int);
    friend ostream& operator<<(ostream&, Levee_de_fonds&);
    void affiche();
    int calculcout();
};

#endif // LEVEE_DE_FONDS_H
