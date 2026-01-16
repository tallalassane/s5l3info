#include "articleimporte.h"



articleImporte::articleImporte(const char* ref, const char* desi,int pr ,int tx):article(ref,desi,pr){
    taxe=tx;
}
articleImporte::~articleImporte(){

}
ostream& operator<<(ostream& os, const articleImporte& A){ //articleImporte
    article a=(const article)A;

    os <<a;

    os<<"taxe importation:"<<A.taxe<<endl;
    return os;
}
void articleImporte:: afficher(){
    cout<<*this;
}
int  articleImporte:: prixA(){
    int a=article::prixA();
    return a+0.4*taxe;
}

