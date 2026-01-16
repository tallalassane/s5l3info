#ifndef ARTICLEIMPORTE_H
#define ARTICLEIMPORTE_H

#include "article.h"
#include <iostream>
using namespace std;

class articleImporte : public article {
    int taxe;

public:
    articleImporte(const char* ref, const  char* desi, int prix, int taxe);
    ~articleImporte();

    void afficher() override;
    int prixA();

    friend ostream& operator<<(ostream& os, const articleImporte& A);
};

#endif
