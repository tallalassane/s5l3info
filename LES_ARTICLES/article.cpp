#include "article.h"



article::article(const char* ref, const char* des,int pr){
    reference=new char[strlen(ref)+1];
    strcpy(reference,ref);

    designation=new char[strlen(des)+1];
    strcpy(designation,des);
    prix=pr;
}
article::~article(){
    delete[] reference;
    delete[] designation;
}
ostream& operator<<(ostream& os,const article &A){
    os<<"reference:"<<A.reference<<endl;
    os<<"designation:"<<A.designation<<endl;
    os<<"prix achat:"<<A.prix<<endl;
    return os;
}
void article:: afficher(){
    cout<<*this;
}
int  article:: prixA(){
    return prix;
}


