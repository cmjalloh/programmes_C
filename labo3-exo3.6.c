/* Exercice sur les pointeurs - somme de 2 pointeurs*/
/* 10/10/2023 @ M@lick jalloh - 13/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *sommeEntiers(int *a, int *b);  // Prototype de la fonction sommeEntiers

// Fonction principale (main)

int main() {
    int x = 15;
    int y = 70;

    int *pointeur_resultat = sommeEntiers(&x, &y);  // Appelle de la fonction

    printf("La somme est : %d\n", *pointeur_resultat);

    // Libéreration de la mémoire allouée
    free(pointeur_resultat);

    return 0;
}
int *sommeEntiers(int *a, int *b) {
    int *resultat = (int *)malloc(sizeof(int));  // Allocation de la mémoire pour le résultat
    
    *resultat = (*a) + (*b);  // Calcule la somme et la stocke dans le résultat

    return resultat;  // Retourne le pointeur vers le résultat
}
