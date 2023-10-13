/* Exercice sur les pointeurs */
/* 10/10/2023 @ M@lick jalloh - 13/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *Str1 = (char *)malloc(5); // Allocation de la mémoire pour "abcd" et le caractère nul '\0'.
    strcpy(Str1, "abcd");
    char *Str2 = Str1; // Pointez Str2 vers la même chaîne de caractères que Str1. 

    printf("Avant le free, Str1 contient: %s\n", Str1);
    printf("Avant le free, Str2 contient: %s\n", Str2);

    free(Str1); // Libérer la mémoire allouée pour Str1.

    //La chaîne de caractères "abcd" existe toujours en mémoire, mais Str1 ne peut plus être utilisé.
    //En essayant d'accéder à la chaîne de caractères via Str2

    printf("Après le free de Str1, le contenu de Str2 est: %s\n", Str2);

    return 0;
}