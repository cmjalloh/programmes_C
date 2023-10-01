//  Tableaux � 2 dimensions

#include <stdio.h>
#include <stdlib.h>
int *genTab(int size);
void getAdrVal(int *tab,int size);
void getCallTab();
void printTab(int *tab, int size);
int main()
{
/*
int *tab = genTab(5);
printTab(tab,5);
tab = realloc(tab,7 * sizeof(int));
tab[5] = 0;
tab[6] = 0;
printTab(tab,7);
tab = realloc(tab,4 * sizeof(int));
printTab(tab,4);
*/
int C = 2, L = 3, i, j;
/* //tableau statique � 2 dimensions
int tab[L][C];
for(i=0;i<L;i++)
 {
  for(j=0;j<C;j++)
   {
     tab[i][j] = i+j;
   }
 }
for(i=0;i<L;i++)
 {
  for(j=0;j<C;j++)
  {
    printf("[%d]",tab[i][j]);
  }
printf("\n");
 }
*/
// declaration et allocation tableau dynamique à 2 dimensions

int **tab = malloc(L * sizeof(int*));
for(i = 0; i < L; i++)
  {
   tab[i] = malloc(C * sizeof(int));
  }
// parcours
 for(i = 0; i < L ; i++)
  {
    for(j = 0;j < C; j++)
    {
      tab[i][j] = i+j;
    }
  }
// parcours et affichage
for(i = 0; i < L; i++)
 {
  for(j = 0; j < C;j++)
   {
    printf("[%d]",tab[i][j]);
   }
  printf("\n");
 }
// lib�ration
for(i = 0;i < L; i++)
    {
      free(tab[i]);
    }
free(tab);
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
void printTab(int *tab, int size)
{
int i;
for(i=0;i<size;i++)
    {
        printf("[%d]",tab[i]);
    }
printf("\n");
}
