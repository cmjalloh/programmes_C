/*
Écrire une procédure générant un tableau de valeurs réelles pseudo-aléatoires et
affichant le contenu et l’adresse de chaque case.
Le parcours doit se faire :
1. Par indice
2. Par adresse

*/

#include <stdio.h>
#include <stdlib.h>


void *genTab(int size);
int main(){
int size = 8;
float *tab[size] = genTab(size);
printf("Le tableau generé est: [%.2f] ", tab[size]);

return 0;

}


void  *genTab(int size){

float *tab = malloc(size * sizeof(float));


for (int i = 0; i < size; i++) {

    tab[i] = (float)(rand()/(float)RAND_MAX)*200;

}

for (int i = 0; i < size; i++) {

    printf(" le contenu du tableau est [%.2f] | son indice est : %d", tab[i], i);

}

}
