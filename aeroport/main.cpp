#include <QCoreApplication>
#include"vehicule.h"
#include"voiture.h"
#include"avion.h"
#include"aeroport.h"
int main()
{
    vehicule v(2014,600,"toyota");
    voiture v1(2014,600,"toyota",2546,52658,5624,6);




    voiture v2(2024,10000000,"ford",4526,78952,5952,4);
    avion a1(2020,70000000,"boing","heliche",875);
    avion* a2=new avion(2023,8000000,"turkus","react",895);
    Aeroport A("blaise diagne");
//A.ajouter(&v);
    A.ajouter(&v1);
    A.ajouter(&v2);
    A.ajouter(&a1);
    A.ajouter(a2);

    A.afficher();
    //delete a2;


    return 0;
}
