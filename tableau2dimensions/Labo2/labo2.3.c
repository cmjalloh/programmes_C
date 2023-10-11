
#include <stdio.h>
#include <stdlib.h>

int* diffTab(const int* tab1, int size1, const int* tab2, int size2, int* resultSize) {
    int minSize = (size1 < size2) ? size2 : size1; // Taille minimale entre les deux tableaux
    int* result = (int*)malloc(minSize * sizeof(int)); // Tableau résultant
    int i;
    *resultSize = 0; // Initialisation la taille du tableau résultant à zéro

    for (i = 0; i < size1; i++) {
        int diff = tab1[i];

        // Si l'indice existe dans le deuxième tableau, il est soustrait/
        if (i < size2) {
            diff -= tab2[i];
        }

        // Vérification si la différence est positive
        if (diff > 0) {
            result[*resultSize] = diff;
            (*resultSize)++;
        }
    }

    // Réductiion la taille du tableau resultant si necessaire
    result = (int*)realloc(result, (*resultSize) * sizeof(int));

    return result;
}

int main() {
    int tab1[] = {8, 5, 3, 5};
    int size1 = 4;
    int tab2[] = {7, 4, 2};
    int size2 = 3;
    int resultSize;
    int* tabResult = diffTab(tab1, size1, tab2, size2, &resultSize);

    // Afficher le tableau resultant de la difference
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", tabResult[i]);
    }
    printf("\n");

    // Libereration la mémoire 
    free(tabResult);

    return 0;
}