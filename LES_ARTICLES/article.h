#ifndef ARTICLE_H
#define ARTICLE_H
#include<iostream>
#include<cstring>
using namespace std;

class article
{
    char* reference;
    char* designation;
    int prix;
public:
    article( const char*, const char*,int);
    ~article();
   friend ostream& operator<<(ostream& os, const article& A);
    virtual void afficher();
    virtual int prixA();

};

#endif // ARTICLE_H
