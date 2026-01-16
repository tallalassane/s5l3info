#include "levee_de_fonds.h"


Levee_de_fonds::Levee_de_fonds(Date d,char* th,string l,int c,int fc,int f ,int fa): soiree(d,th,l,c),montant(fa),frais_levee_de_fonds(f),frais_com(fc){}
ostream& operator<<(ostream& sortie , Levee_de_fonds& ae){
    soiree s=ae;
    sortie<<s;
    sortie<<"frais_communication"<< ae.frais_com<<endl;
    sortie<<"montant:"<< ae.montant<<endl;
    sortie<<"frais_levee_de_fonds"<< ae.frais_levee_de_fonds<<endl;
    cout<<"**************************************************"<<endl;

    return sortie;
}


void Levee_de_fonds::affiche(){
    cout<<*this;
}

int Levee_de_fonds::calculcout(){
    int  a=soiree::calculcout();
    return a + frais_com + (0.2*montant) + frais_levee_de_fonds;
}
