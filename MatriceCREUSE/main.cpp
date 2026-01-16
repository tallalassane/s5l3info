#include <QCoreApplication>
#include "matricecreuse.h"
#include <iostream>

#include <iostream>

int main() {
    int L = 3;  // nombre de lignes
    int C = 4;  // nombre de colonnes

    // 1) Allocation d'un tableau de pointeurs (chaque pointeur sur une ligne)
    int** mat = new int*[L];

    // 2) Pour chaque ligne, on alloue un tableau de C entiers
    for (int i = 0; i < L; ++i) {
        mat[i] = new int[C];
    }

    // 3) Remplissage : par exemple avec des valeurs séquentielles
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < C; ++j) {
            mat[i][j] = i * C + j + 1;
        }
    }

    // 4) Affichage
    std::cout << "Matrice " << L << "x" << C << " :\n";
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < C; ++j) {
            std::cout << mat[i][j] << ' ';
        }
        std::cout << '\n';
    }
    MatriceCreuse M(mat,3,4);
    M.afficher();

    // 5) Libération de la mémoire
    for (int i = 0; i < L; ++i) {
        delete[] mat[i];   // on libère chaque ligne
    }
    delete[] mat;         // puis le tableau de pointeurs

    return 0;
}
