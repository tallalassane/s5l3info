#include "societte.h".h"
#include <iostream>

int main() {
    SOCIETTE societe(2, 2); // Création d'une société avec une grille 2x2

    // Définition d'une voiture
    voiture v1 = {"1234", "Toyota", "SUV", "Noire", 2020};

    // Insertion
   societe.inserer(v1);
    voiture v11 = {"A123", "Toyota", "SUV", "Noire", 2020};
    voiture v2 = {"B4567", "Ford", "Berline", "Bleue", 2018};
    voiture v3 = {"C789v", "BMW", "Sport", "Rouge", 2022};

    // Insertion
    societe.inserer(v11);
    societe.inserer(v2);
    societe.inserer(v3);

    societe.affiche();
    societe.supprimer("A123");
societe.affiche();
    return 0;
}

