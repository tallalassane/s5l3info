#include "matricecreuse.h"



MatriceCreuse::MatriceCreuse(int** m,int l,int c){
    ligne=3; int courant=0;
    for(int i=0 ; i<l;i++){
        for(int j=0; j<c; j++){
            if(m[i][j]!=0) courant++;
        }

    }
    colonne=courant;
    mat=new int*[ligne];
    for(int i=0 ; i<ligne;i++){
        mat[i]=new int[courant];

    }

    int a=0;
    for(int i=0 ; i<l;i++){
        for(int j=0; j<c; j++){
            if(m[i][j]!=0)  {
                mat[0][a]=i;
                mat[1][a]=j;
                mat[2][a]=m[i][j];
                a++;
            }
        }

    }
}
/*

MatriceCreuse::~MatriceCreuse(){
    for(int i=0 ; i<ligne;i++){
        delete[] mat[i];

    }
    delete[] mat;
}
void MatriceCreuse:: afficher(){
    for(int i=0 ; i<ligne;i++){
        for(int j=0; j<colonne; j++){
            cout<<mat[i][j];

        }
        cout<<endl;

    }
}*/


MatriceCreuse::~MatriceCreuse() {
    for (int i = 0; i < ligne; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
}

// Affichage de la représentation creuse
void MatriceCreuse:: afficher()  {
    for (int i = 0; i < ligne; ++i) {
        for (int j = 0; j < colonne; ++j) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

