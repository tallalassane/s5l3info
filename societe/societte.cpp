#include "societte.h"





int SOCIETTE::hachage(char* cle) {

    return strlen(cle) % ligne;  // Retourne l'index dans la plage des lignes
}


SOCIETTE::SOCIETTE(int l, int c) : ligne(l), colonne(c) {
    tab = new voiture**[ligne];  // Allocation des lignes
    for (int i = 0; i < ligne; i++) {
        tab[i] = new voiture*[colonne];  // Allocation des colonnes
        for (int j = 0; j < colonne; j++) {
            tab[i][j] = nullptr;  // Initialisation à nullptr (case vide)
        }
    }
}

bool SOCIETTE::recherche(char *cl){
    int n=hachage(cl);
    for(int i=0 ; i<colonne; i++){
        if( tab[n][i]!=nullptr && strcmp(tab[n][i]->cle,cl)==0)
            return true;
    }
    return false;

}

void SOCIETTE::inserer(voiture v){

    bool b=recherche(v.cle);
    int n=hachage(v.cle);
    if(!b){
        int j=0;
        while(j<colonne && tab[n][j]!=nullptr)
            j++;
        if(j<colonne) tab[n][j]=new voiture(v);
        else cout<<"cette ligne est pleine"<< endl;

    }
}
void SOCIETTE::supprimer(char* v){
    bool b=recherche(v);

    if(b){
        int j=0;

        int n=hachage(v);
        while(strcmp(tab[n][j]->cle,v)!=0)
            j++;
        int k=j;
        while(tab[n][k+1])  {tab[n][k]=tab[n][k+1]; k++;}
        delete tab[n][k]; tab[n][k]=nullptr;
    }
  else  cout<< "l'element n'existe pas "  ;
}
void SOCIETTE::affiche(){
    for(int i=0; i<ligne; i++){
        if(tab[i]){
            cout<<"ligne :"<<i<<endl;
            int j=0;
            while(tab[i][j]){
                cout<<"cle:"<<tab[i][j]->cle;
                cout<<" gamme:"<<tab[i][j]->gamme;
                cout<<" representation:"<<tab[i][j]->representation;
                cout<<" marque:"<<tab[i][j]->marque;
                cout<<" annee:"<<tab[i][j]->annee;
                cout<<";";
                j++;
            }

            cout<<endl;
        }
    }
}
