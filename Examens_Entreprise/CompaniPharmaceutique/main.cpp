#include "vaccin.h"
#include "delocalise.h"
#include"compagnie.h"
int main(int argc, char *argv[])
{

    Vaccin v1("Zamiflu", 0.55, 200000, HighTech);
    Vaccin v2("Triphas", 0.20 , 10000);
    // affichage des vaccins à compléter ici
    Delocalise v3("numgun",0.1,15000,Standard,true);
    Delocalise v4("doman",0.3,12000,HighTech,false);
    Compagnie com("iciba");

    com.ajout(&v2);
    com.ajout(&v1);
    com.ajout(&v3);
    com.ajout(&v4);
    com.afficher();
    cout<<" le coup de production est "<<com.coutproduction();
    return 0;
}
