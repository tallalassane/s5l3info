#include "soiree.h"

soiree::soiree(Date d,char* th,string l,int c):date(d),lieu(l),coutb(c) {
    thematique=new char[strlen(th) + 1];
    strcpy(thematique,th);
}

ostream& operator<<(ostream& os,soiree &s){
    os<<"la date:"<<s.date.getjour()<<s.date.getmois()<<s.date.getannee()<< endl;
    os<<"thematrique:"<<s.thematique<<endl;
    os<<"lieu:"<<s.lieu<<endl;
    os<<"cout:"<<s.coutb<<endl;
    return  os;
}
void soiree::affiche(){
    cout<< *this;
    cout<<"*************************************************"<<endl;
}

int soiree::calculcout(){
    return coutb;
}
