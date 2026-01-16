#ifndef MATRICECREUSE_H
#define MATRICECREUSE_H
#include <iostream>
using namespace std;
class MatriceCreuse
{
    int ligne;
    int colonne;
    int** mat;
public:
    MatriceCreuse(int** m,int l,int c);
    ~MatriceCreuse();
    void afficher();
};

#endif // MATRICECREUSE_H
