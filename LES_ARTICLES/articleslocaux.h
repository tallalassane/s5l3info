#ifndef ARTICLESLOCAUX_H
#define ARTICLESLOCAUX_H
#include"article.h"
class articlesLocaux : public article
{
    int cout_tr;
public:
    articlesLocaux(const char*, const char*,int,int);
    ~articlesLocaux();
    friend ostream& operator<<(ostream& os, articlesLocaux& A);
    void afficher();
    int prixA();
};

#endif // ARTICLESLOCAUX_H

