#include "anniversaires_entreprise.h"

Anniversaires_entreprise::Anniversaires_entreprise(Date d,char* th,string l,int c,int fc,int f ,int fa):
    soiree(d,th,l,c), frais_com(fc),forfais(f),frais_anni(fa){}
ostream& operator<<(ostream& sortie , Anniversaires_entreprise& ae){
    soiree s=ae;
    sortie<<s;
    sortie<<"frais_communication:"<< ae.frais_com<<endl;
    sortie<<"forfais:"<< ae.forfais<<endl;
    sortie<<"frais_communication:"<< ae.frais_anni<<endl;
    cout<<"**************************************************"<<endl;
    return sortie;
}


void Anniversaires_entreprise::affiche(){
    cout<<*this;
}

int Anniversaires_entreprise::calculcout(){
    int  a= soiree::calculcout();
    return a + frais_com + frais_anni + forfais;
}
