#include "articleslocaux.h"



articlesLocaux::articlesLocaux(const char* ref, const char* des,int pr,int ct): article(ref,des,pr){
    cout_tr=ct;
}
articlesLocaux::~articlesLocaux(){

}
ostream& operator<<(ostream& os, articlesLocaux& A){
    os << (const article&)A;
    os<<"cout de transport:"<<A.cout_tr<<endl;
    return os;
}
void  articlesLocaux:: afficher(){
    cout<<*this;
}
int articlesLocaux:: prixA(){
    int a=article::prixA();
    return a+cout_tr;
}


