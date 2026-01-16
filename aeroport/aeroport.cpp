#include "aeroport.h"

Aeroport::Aeroport(char* n) {
    courant=0;
    nom=new char[strlen(n)+1];
    strcpy(nom,n);
    for (int var = 0; var < N; ++var) {
        tab[var]=nullptr;

    }

}

Aeroport::~Aeroport(){
    delete[] nom;
}
void Aeroport:: ajouter(vehicule* v){

    tab[courant++]=v;
    /*int i=0;
    while(i<N && tab[i]!=nullptr) i++;
    if(i<N) tab[i]=v; */
}
void Aeroport:: afficher(){
    for (int var = 0; var < courant; ++var) {
        tab[var]->calculprix(2025);
        tab[var]->afficher();

    }
   /* int i=0;
    while(tab[i]){
      // tab[i]->calculprix(2025);
        tab[i]->afficher();
        i++;
    }*/
}
