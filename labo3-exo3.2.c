/* Exercice sur les pointeurs - correction à apporter*/
/* 10/10/2023 @ M@lick jalloh - 13/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
int nb = 43;
int *pointeur;
pointeur = &nb;
*(int*)pointeur=34;
printf("la valeur pointee est: %d ", *pointeur);
printf("\nL'entier n vaut: %d", nb);
return 0;
}