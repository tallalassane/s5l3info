#include "avion.h"



avion::avion(int a,int pr ,char* mrq,char* mot,int nvol):vehicule(a,pr,mrq){

    moteur=new char[strlen(mot)+1];
    strcmp(moteur,mot);
    heure_vol=nvol;
}
avion::~avion(){
    cout<<"appel du destructeurde avion"<<endl;
    delete[] moteur;
}
void avion:: affiche(){
    cout<<*this;
}
void avion:: calculprix(int){
    if(strcmp(marque,"heliche")==0){
        float n=heure_vol/100;
        prix_courant=prix_achat-n*0.1*prix_achat;
    }
    else {
        float n=heure_vol/1000;
        prix_courant=prix_achat-n*0.1*prix_achat;
    }



}
ostream& operator<<(ostream&  os,avion& A){
    vehicule v=A;
    os<<v;
    os<<"moteur="<<A.moteur<<"nombre heure de vol"<<A.heure_vol<<endl;
    return os;

}
