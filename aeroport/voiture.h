#ifndef VOITURE_H
#define VOITURE_H
#include "vehicule.h"
class voiture:public vehicule
{
    double cylindre;
    int nombre_porte;
    int puissance;
    int kilometrage;
public:

    voiture(int,int,char*,double,int,int,int);
    ~voiture();
    void afficher();
    void calculprix(int);
    friend ostream& operator<<(ostream&,voiture&);
};

#endif // VOITURE_H
