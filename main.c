#include<stdio.h>
#include"tableau.h"
#include<stdlib.h>
#include<stdlib.h>
int main()
{
 int tab[50]; 
 int n;
 char c;
 int som=0;
 int i,k,m;
 do
 {
     printf("Dimension du tableau: ");
     scanf("%d", &n);
     while((c=getchar())!='\n' && c != EOF);
 } while (n<=1 || n>50);

 for (i=0; i<n; i++)
   {
     printf("Elément %d : ", i);
     scanf("%d", &tab[i]);
   }

tableau(tab, n);
 }