#include "date.h"

Date::Date(int j,int m, int a): jour(j),mois(m),annee(a) {}
int  Date::getjour(){
    return jour;
}

int  Date::getmois(){
    return mois;
}


int  Date::getannee(){
    return annee;
}

void  Date::setjour(int a){
    jour=a;
}



void  Date::setmois(int a){
    mois=a;
}



void  Date::setannee(int a){
    annee=a;
}
