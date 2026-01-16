#include "vehicule.h"



vehicule::vehicule(int a ,int pr,const char* mr){
    date=a; prix_achat=pr;
    marque=new char[strlen(mr)+1];
    strcpy(marque,mr);

}
vehicule::~vehicule(){
    delete[] marque;
}
void vehicule:: afficher(){
cout<<*this;

}
void  vehicule:: calculprix(int a){
    int d=a-date;

    prix_courant=prix_achat-prix_achat*d*0.01;

}
 ostream& operator<<(ostream& os,const vehicule& v){
     os<<"vehicule:"<<"marque= "<<v.marque<<";date=  "<<v.date<<"; prix=  "<<v.prix_courant;
     return os;

 }
