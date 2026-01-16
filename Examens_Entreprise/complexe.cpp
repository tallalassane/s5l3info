#include "complexe.h"

Complexe::Complexe(int n):tmax(n) {
    tab=new soiree*[tmax];
    if(tab)
        for(int i=0; i<tmax;i++)
            tab[i]=NULL;

}

Complexe::~Complexe() {

    delete[] tab;  // Libération du tableau de pointeurs
}


void Complexe::ajoutesoiree(soiree& s){
    int i=0;
    while(i<tmax && tab[i]!=NULL)
        i++;
    if(i<tmax) tab[i]=&s;
    else cout<<"espace insuffisante"<< endl;

}
void Complexe::affiche(){
    int i=0;
        while(tab[i]){
        tab[i]->affiche();
        i++; }

}
int Complexe::gain(){
    int t=0; int i=0;
    while(tab[i]){
        t+=tab[i]->calculcout();
        i++;
    }
    return t;
}
