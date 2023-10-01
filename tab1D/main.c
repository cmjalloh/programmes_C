#include <stdio.h>

void affiche_tableau(int *tab, unsigned taille);

int main()
{
    int tab[5] = { 2, 45, 67, 89, 123 };

    affiche_tableau(tab, 5);
    return 0;
}
void affiche_tableau(int *tab, unsigned taille)
{
    for (unsigned i = 0; i < taille; ++i)
        printf("tab[%u] = %d\n", i, tab[i]);
}

