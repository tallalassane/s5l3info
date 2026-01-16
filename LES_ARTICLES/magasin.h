#ifndef MAGASIN_H
#define MAGASIN_H
#include "article.h"
class Magasin
{
    article** tab;
    int N,courant;
public:
    Magasin(int);
   virtual ~Magasin();
    void ajouter(article*);
    int  Calclprix();
    void afficher();
};

#endif // MAGASIN_H

