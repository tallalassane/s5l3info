#ifndef AVION_H
#define AVION_H
#include "vehicule.h"
class avion : public vehicule
{
    char* moteur;
    int heure_vol;
public:
    avion(int,int,char*,char*,int);
    ~avion();
    void affiche();
   void  calculprix(int);
    friend ostream& operator<<(ostream&, avion& );
};

#endif // AVION_H
