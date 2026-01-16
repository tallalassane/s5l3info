#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include"vaccin.h"
const int N = 100;
class Compagnie
{
    char* nom;
    int courant;
    Vaccin** tab;
public:
    Compagnie(char* );
    ~Compagnie();
    void ajout(Vaccin* v);
    void afficher();
    double coutproduction();
};

#endif // COMPAGNIE_H
