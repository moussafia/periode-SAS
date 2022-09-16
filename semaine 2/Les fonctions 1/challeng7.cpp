#include<stdio.h>
#include<stdlib.h>

int tri_rapide(int t[100],int n)
{	if(n>2)
{
		int i,c;
		for(i=0;i<n-1;i++)
			{if (t[n-1]<t[i])
				{c=t[i];
				t[i]=t[n-1];
				t[n-1]=c;
				}}
			return	tri_rapide(t,n-1);}
}
int main() {
  int  n, i, t[100];

  printf(" Entrez le nombre d'elements dans le tableau: ");
  scanf("%d", &n);

  printf(" \n\n Entrez %d entiers : ", n);

  for (i = 0; i < n; i++)
    scanf("%d", &t[i]);

  tri_rapide(t,n);

  printf("\n Tableau trier : ");
  for(i = 0; i < n; i++)  {
     printf(" %4d", t[i]);
  }
  printf("\n");}


