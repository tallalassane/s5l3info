#include "delocalise.h"


Delocalise::Delocalise(char* n,double v,int nbd, Fabrication f, bool t):Vaccin(n,v,nbd,f){
    deloc=t;

}
Delocalise::~Delocalise(){

}
void Delocalise:: afficher(){
    Vaccin::afficher();
    if(deloc){
        cout<<"cette vaccin est delocalise dans un pays frontalier"<<endl;
    }
    else {
        cout<<"cette vaccin n' est pas  delocalise dans un pays frontalier"<<endl;
    }
}
double Delocalise:: production(){
    double d=Vaccin::production();

    if(deloc){

        d=d- d* REDUCTION_DELOC;
    }
    else {
        d=d/2;
    }
    return d;
}
