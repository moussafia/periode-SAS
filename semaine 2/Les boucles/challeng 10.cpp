#include<stdio.h>
#include<stdlib.h>
int main()
{int a,s,n;
char c;
n=0;
s=0;
a=0;
while((n<10) && (c!='o'))
{printf(" \n a= ");
scanf("%d",&a);
if(a>0)
{s+=a;
n++;}
printf(" \n voullez vous le resultat ? si oui tapez 'o' sinon tapez 'n' ");
scanf("%s",&c);}
printf(" \n\n la somme des valeur qui vous entree est: %d ",s);
}
