#include "vaccin.h"


Vaccin::Vaccin(char* n,double v,int nbd, Fabrication f){

    nom=new char[strlen(n)+1];
    strcpy(nom,n);
    volumepardose=v;
    nbdose=nbd;
    Fab=f;
}
Vaccin::~Vaccin(){
    delete nom;

}

void Vaccin::  afficher(){
    cout<<*this;
}
double Vaccin:: conditionnement(){
    return volumepardose*nbdose*COND_UNITE ;
}
double Vaccin:: fabrication(){
    double d=volumepardose*nbdose*PRIX_BASE;
    if(Fab==HighTech){
        d=d* MAJORATION_HIGHTECH;
        return d;
    }
    else
        return d;

  }

double Vaccin::  production(){

    return  fabrication()+conditionnement();

}


ostream& operator<<(ostream& os, Vaccin V ){

    os<<V.nom<<endl;
    os<<"volume/dose"<<V.volumepardose<<endl;
    os<<"nombre de dose"<<V.nbdose<<endl;
    if(V.Fab==Standard)
    os<<"mode de fabrication:"<<"standard"<<endl;
    else
        os<<"mode de fabrication:"<<"HighTech"<<endl;

    return os;

}
