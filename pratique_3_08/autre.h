#ifndef __AUTRE__H_
#define __AUTRE__H_

typedef struct Personne Personne;

struct Personne
{
    char *nom;
    int age;
};

void initTab(int n, Personne *tab);
void printTab(int n, Personne *tab);

#endif