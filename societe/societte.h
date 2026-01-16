#ifndef SOCIETTE_H
#define SOCIETTE_H
#include<string.h>
using namespace std;
#include<iostream>
typedef struct voiture{
    char cle[100];
    char marque[100];
    char gamme[100];
    char representation[100];
    int annee;
}voiture;

class SOCIETTE
{
    voiture ***tab;
    int ligne;
    int colonne;
    int hachage(char* cle);

public:
    SOCIETTE(int l,int c);
    bool recherche(char* cl);
    void inserer(voiture v);
    void supprimer(char* v);
    void affiche();
};

#endif // SOCIETTE_H
