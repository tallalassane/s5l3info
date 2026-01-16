#ifndef AEROPORT_H
#define AEROPORT_H
#include"vehicule.h"
#define N 100
class Aeroport
{
    vehicule* tab[N];
    char* nom;
    int courant;
public:
    Aeroport(char*);
  virtual  ~Aeroport();
    void ajouter(vehicule* v);
    void afficher();


};

#endif // AEROPORT_H
