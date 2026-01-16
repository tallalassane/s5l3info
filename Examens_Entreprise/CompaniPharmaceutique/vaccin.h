#ifndef VACCIN_H
#define VACCIN_H
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
// prix du conditionnement d'une unité
const double COND_UNITE = 0.5;
// prix de base de fabrication d'une unité
const double PRIX_BASE = 1.5;
// majoration du prix de fabrication pour vaccin "high tech"
const double MAJORATION_HIGHTECH = 0.5;
// reduction du cout du à la delocalisation
const double REDUCTION_DELOC = 0.2;
enum Fabrication {Standard, HighTech};

class Vaccin
{
    char* nom;
    double volumepardose;
    double nbdose;
    Fabrication Fab;

public:

    Vaccin(char* n,double v,int nbd, Fabrication f=Standard);
    ~Vaccin();
    virtual void afficher();
    double conditionnement();
    double fabrication();
    friend ostream& operator<<(ostream& os, Vaccin );
    virtual double production();
};

#endif // VACCIN_H
