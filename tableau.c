#include<stdio.h>
int tableau (int tab[], int n)
{ 
 int som=0;
 int i,k,m;
 int p=0,q=0;
 int tabPosi[n],tabNega[n];
printf("Les données du tableau:\n");
 for (i=0; i<n; i++)
     printf("%d\t", tab[i]);
printf("\n");
for (i=0, k=0; i<n; i++)
{
    tab[k]=tab[i];
    if(tab[i]!=0 && k++);
}
n=k;
printf("Les données du tableau exclu '0':\n");
for (i=0; i<n; i++)
printf(" %d\t", tab[i]);
printf("\n");
printf("La somme est de:\n");
for (i=0; i<n; i++)
{
som+=tab[i];
}
printf(" %d", som);
printf("\n");
printf("Les valeurs de l'inverse:\n");
for (i=n-1; i>=0; i--)
{
  printf(" %d\t", tab[i]);
}
printf("\n");
for (i=0; i<n; i++)
{
  if (tab[i]<0)
  {
    tabNega[q]=tab[i];
    q++;
  }
  else
  {
    tabPosi[p]=tab[i];
    p++;
  }
}
printf("tableau de valeur negative\n");
  for (i=0; i<q; i++)
  {
    printf("%d\t", tabNega[i]);
  }
  printf("\n");
  printf("tableau de valeur positive\n");
  for (i=0; i<p; i++)
  {
    printf("%d\t", tabPosi[i]);
  }
  printf("\n");
printf("les nombres divisible par 2: \n");
for (i=0; i<n; i++)
{
  if (tab[i]%2==0)
  {
    printf("%d\t", tab[i]);
  }
}printf("\n");
}

