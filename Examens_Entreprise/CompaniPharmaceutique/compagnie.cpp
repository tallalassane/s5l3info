#include "compagnie.h"

Compagnie::Compagnie(char* n){
    nom= new char[strlen(n)+1];
    strcpy(nom,n);
   courant=0;
    tab=new Vaccin*[N];


}
Compagnie::~Compagnie(){
    for (int var = 0; var < courant; ++var) {
        delete tab[var];

    }
    delete tab;
}
void Compagnie:: ajout(Vaccin* v){
    tab[courant++]=v;
}
void Compagnie:: afficher(){
    cout<<"le nom est:"<<nom<<endl;
    for (int var = 0; var < courant; ++var) {
        tab[var]->afficher();
    }

}
double Compagnie:: coutproduction(){
    double d=0;

    for (int var = 0; var < courant; ++var) {
        d=d+tab[var]->production();

    }
    return d;

}
