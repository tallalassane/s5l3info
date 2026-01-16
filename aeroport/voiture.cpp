#include "voiture.h"




voiture::voiture(int a,int pr,char*m,double cy,int pui,int klo,int nbport):vehicule(a,pr,m){
    cylindre=cy;
    puissance=pui;
    kilometrage=klo;
    nombre_porte=nbport;
}
voiture::~voiture(){
}
void voiture:: afficher(){
    cout<<*this;
}
void voiture:: calculprix(int a ){

    int d= a-date; float f=round(kilometrage/1000);
    float b=(prix_achat*f*0.05);
    int c=(prix_achat*d*0.02);

    prix_courant=prix_achat-b-c;
    if(strcmp(marque,"renault")==0 || strcmp(marque,"Fiat")==0){
        prix_courant=prix_courant-prix_achat*0.1;
    }

    if(strcmp(marque,"ferarri")==0 || strcmp(marque,"porch")==0){
        prix_courant=prix_courant+prix_achat*0.2;
    }




}
ostream& operator<<(ostream& os,voiture& v){
    vehicule ve=v;
    os<<ve;
    os<<"  cylindre"<<v.cylindre<<"puissance:"<<v.puissance<<"kilometrage"<<v.kilometrage
       <<"nombre de porte"<<v.nombre_porte<<endl;
    return os;


}
