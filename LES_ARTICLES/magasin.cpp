#include "magasin.h"

Magasin() {}

Magasin::Magasin(int n){
    N=n; courant=0;

    tab=new article*[N];

}
Magasin::~Magasin(){
    for (int var = 0; var < courant; ++var) {
        delete tab[var];
    }
    delete[] tab;
}
void Magasin:: ajouter(article* A){
    if(courant<N){
        tab[courant++]=A;
    }

}
int Magasin:: Calclprix(){
    int p=0;
    for (int var = 0; var < courant; ++var) {
        p+=tab[var]->prixA();
    }
    return p;
}
void Magasin:: afficher(){
    for (int var = 0; var < courant; ++var) {
        tab[var]->afficher();
        cout<<"prix:"<< tab[var]->prixA()<<endl;

    }
}


