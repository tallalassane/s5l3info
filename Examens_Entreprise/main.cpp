#include "anniversaires_entreprise.h"
#include <QCoreApplication>
#include <iostream>
using namespace std;
#include "soiree.h"
#include<stdlib.h>
#include "complexe.h"
#include"levee_de_fonds.h"
int main(int argc, char *argv[])
{

    soiree s1(Date(27,04,2024),"liens de famille","Salle AMY",10000);
     soiree s2(Date(13,04,2024),"l'amitie","SALE BETA",90000);
    Anniversaires_entreprise  s3(Date(3,11,2024),"l'amitie","SALE gama",91000,4504,7931,7810);
    Levee_de_fonds s4(Date(17,10,2024),"soire cine","grande sals",45000,8541,75622,8924);

    // cout<<s1<<endl;
   //  cout<<s2<<endl;
    Complexe c(10);
     c.ajoutesoiree(s1);
    c.ajoutesoiree(s2);
     c.ajoutesoiree(s3);
    c.ajoutesoiree(s4);
     cout<<"le gain est:" <<c.gain()<<endl;
     c.affiche();
    cout<<"le gain est:" <<c.gain()<<endl;
     cout<<s1;
}
