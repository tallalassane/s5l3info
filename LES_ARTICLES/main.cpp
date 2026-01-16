#include <QCoreApplication>

#include "article.h"
#include"articleimporte.h"
#include"articleslocaux.h"
#include"magasin.h"
int main()
{   article a1("atfcx","lait",6000);
    article a2("atvb","sucre",700);
    articlesLocaux* al1=new articlesLocaux("artg","vinaigre",800,7106);
    articlesLocaux* al2=new articlesLocaux("vxqz","bisciut",400,9043);
    articleImporte* am1=new articleImporte("bquu","cube mazzi",500,470);
    articleImporte* am2=new articleImporte("auibv","the",100,50);
    Magasin M(100);

    M.ajouter(al1);
    M.ajouter(al2);
    M.ajouter(am1);
    M.ajouter(am2);

    M.afficher();




    return 0;
}
