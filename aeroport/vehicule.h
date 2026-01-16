#ifndef VEHICULE_H
#define VEHICULE_H
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class vehicule
{
protected:
    int date;
    int prix_achat, prix_courant;
    char* marque;
public:
    vehicule(int,int, const char*);
   virtual  ~vehicule();
    virtual void afficher();
    virtual void  calculprix(int);
    friend ostream& operator<<(ostream&, const vehicule&);
};

#endif // VEHICULE_H
