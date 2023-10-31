#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    int somme = 0;
    while (somme < 100)
    {  
        printf("donnez votre nombre: \n");
        scanf("%d", &n);
        somme = somme + n;
    }
    printf("La somme obtenue : %d", somme);
return 0;
}
