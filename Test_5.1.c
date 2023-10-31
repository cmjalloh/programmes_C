#include <stdio.h>
#include <stdlib.h>
#define NMAX 10

int main(){
    printf("La table de Zahra 4eme Année: \n");
    int i, j;
    printf("     I");
    for( j=1; j <= NMAX ; j++) printf("%4d", j);
    printf("\n");
    printf("-------");
    for( j = 1; j <= NMAX ; j++) printf("----");
    printf("\n");
    for( i = 1; i <= NMAX ; i++) {
        printf("%4d I", i);
        for( j = 1; j <= NMAX ; j++) 
            printf("%4d",i*j);
    printf("\n");
    }
    printf("45 x 11 = %d", 45*11);
    return 0;

}