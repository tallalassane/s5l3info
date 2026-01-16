#ifndef SOIREE_H
#define SOIREE_H
#include "date.h"
#include<iostream>
#include<string.h>
using namespace std;


class soiree
{
  char*  thematique;
    Date date;
    string lieu;
    int coutb;


public:
    soiree(Date, char* , string, int c);
  friend  ostream& operator<<(ostream& ,soiree&);
  virtual  void affiche();
  virtual int calculcout();
};

#endif // SOIREE_H
