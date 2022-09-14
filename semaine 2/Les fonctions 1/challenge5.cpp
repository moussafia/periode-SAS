#include<stdio.h>
#include<stdlib.h>

int fusionner(int t[100],int i,int m,int f);
int merge_sort(int t[100],int i,int f)
{	int m;
		if (i<f)
		{			m=(i+f)/2;
			merge_sort(t,i,m);
			merge_sort(t,m+1,f);
			fusionner(t,i,m,f);
		}
		
}
 
int fusionner(int t[100],int i,int m,int f)
{		int tmp[100];
		int l,k,g,j,d;
		l=f-i+1;k=i;g=i;d=m+1;
		while(k<=f)
		{if(((g<=m)&&(t[g]<t[d]))|| (d>f))
		{tmp[k]=t[g];
		g++;}
		else {tmp[k]=t[d];
		d++;}
		k++;}
		for(j=i;j<=f;j++)
		{t[j]=tmp[j];}
}

int main() {
  int  n, i, t[100];
 
  printf(" Entrez le nombre d'elements dans le tableau: ");
  scanf("%d", &n);
 
  printf(" \n\n Entrez %d entiers : ", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &t[i]);
 
  merge_sort(t,0,n-1);
 
  printf("\n Tableau trier : ");
  for(i = 0; i < n; i++)  {
     printf(" %4d", t[i]);
  }
  printf("\n");}
