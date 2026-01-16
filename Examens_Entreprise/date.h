#ifndef DATE_H
#define DATE_H

class Date
{
    int jour;
    int mois;
    int annee;
public:
    Date(int, int, int);
    int getmois();
    int getannee();
    int getjour();
    void setjour(int);
    void setmois(int);
    void setannee(int);
};

#endif // DATE_H
