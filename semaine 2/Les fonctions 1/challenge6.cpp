#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int t[100],int n)
{
    if (n >= 1)
{
		int c,i;
	for(i=0;i<n;i++)
		{if(t[i]>t[i+1])
			{c=t[i];
			t[i]=t[i+1];
			t[i+1]=c;
			}}
        return bubble_sort(t,n-1);
}
}
int main() {
  int  n, i, t[100];

  printf(" Entrez le nombre d'elements dans le tableau: ");
  scanf("%d", &n);

  printf(" \n\n Entrez %d entiers : ", n);

  for (i = 0; i < n; i++)
    scanf("%d", &t[i]);

  bubble_sort(t,n-1);

  printf("\n Tableau trier : ");
  for(i = 0; i < n; i++)  {
     printf(" %4d", t[i]);
  }
  printf("\n");}


