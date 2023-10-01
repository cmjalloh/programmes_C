#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void getAdrVal(int *tab,int size);
char getAscii(int val);
int *genTab(int size);
void getCallTab();
int main()
{
srand(time(NULL));
/*
int taille = 0;
printf("\nintroduisez la taille : ");
scanf("%d",&taille);
//int *t = malloc(taille * sizeof(int)),i;
int t[taille], i;
for(i=0;i<taille;i++)
{
t[i] = i + 1;
}
getAdrVal(t,taille);
//free(t);
*/
/*
char c = getAscii(97);
printf("%c",c);
*/
getCallTab();
return 0;
}
void getAdrVal(int *tab,int size)
{
int i;
for(i=0;i<size;i++)
    {
        printf("[%d]",tab[i]);
    }
    printf("\n");
for(i=0;i<size;i++)
    {
        printf("[%p]",&tab[i]);
    }
}
char getAscii(int val)
    {
        char c = (char) val;
    return c;
    }
int *genTab(int size)
{
    int *tab = malloc(size * sizeof(int)), i;
    for(i=0;i<size;i++)
    {
        tab[i] = rand()%100;
    }
return tab;
}
void getCallTab()
{
    int taille = 5;
    int *t = genTab(taille);
getAdrVal(t,taille);
free(t);
}
