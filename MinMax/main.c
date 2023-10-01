#include <stdio.h>

// Définition de la fonction qui trouve le minimum et le maximum
void trouverMinEtMax(double num1, double num2, double num3, double *min, double *max) {
    *min = num1;
    *max = num1;

    if (num2 < *min) {
        *min = num2;
    }
    if (num3 < *min) {
        *min = num3;
    }

    if (num2 > *max) {
        *max = num2;
    }
    if (num3 > *max) {
        *max = num3;
    }
}

int main() {
    double num1, num2, num3;

    // Demande à l'utilisateur de saisir les trois nombres
    printf("Entrez le premier nombre : ");
    scanf("%lf", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &num2);

    printf("Entrez le troisième nombre : ");
    scanf("%lf", &num3);

    double min, max;

    // Appel de la fonction pour trouver le minimum et le maximum
    trouverMinEtMax(num1, num2, num3, &min, &max);

    // Affiche le minimum et le maximum
    printf("Le minimum est : %lf\n", min);
    printf("Le maximum est : %lf\n", max);

    return 0;
}
