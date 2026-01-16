#ifndef DELOCALISE_H
#define DELOCALISE_H
#include "vaccin.h"
class Delocalise : public Vaccin
{
        bool deloc;
public:
    Delocalise(char* n,double v,int nbd, Fabrication f=Standard, bool st=false);
    ~Delocalise();
    void afficher();
    double production();
};

#endif // DELOCALISE_H
