/* Ecrire une fonction qui admet 10 notes en paramètres et qui affiche la moyenne et la
mention. La fonction retournera ensuite la moyenne.
Exemple : Refusé < 10 | Passable < 12 | Assez bien < 14 | Bien < 16 | Très bien > 16 */
// 10/10/2023 @ M@lick jalloh - 

#include <stdio.h>
#include <stdlib.h>

float moyenneNotes(float tab[], int taille);
char* mension(float moyenne);

int main(){
int taille= 10;
float tab[]= {12.5, 14.5, 15.3, 8.8, 19.2, 19.00, 15.5, 11.6, 6.9, 18.5};
// Appel de la fonction moyenne et de la procedure mension 
float moyenne = moyenneNotes(tab, taille);
char* distinction = mension(moyenne);
// Affichage des la moyenne et de la mension obtenues
printf("La moyenne est : %.2f\n", moyenne);
printf("\nLa mension obtenue est : %s\n", distinction);
//Liberation de la memoire 
free(distinction);
return 0;

}

// Fonction calculant la moyenne des notes passees en parametres
float moyenneNotes(float tab[], int taille){
    float somme = 0;
    for (int i = 0; i < taille; i++)
        somme+= tab[i];
    return somme/taille;
}
// Procedure d'affichage de la mension
char* mension(float moyenne){
    char* mension = malloc(11*sizeof(char));
        if (moyenne < 10) 
            mension = "Refus";
    
        else if (moyenne < 12) 
            mension = "Passable";
     
        else if (moyenne < 14) 
            mension = "Bien";
     
        else if (moyenne < 16) 
            mension = "Assez Bien";
     
        else 
            mension = "Tres Bien";

return mension;
}

