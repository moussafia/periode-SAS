#include<stdio.h>
#include<stdlib.h>
int main()
{puts("   \n\n     Challenge 11 :            ");
int h,m,s,h1,m1,s1;
printf("           \n\n   donner 1 er instant sous le format HH:MM:SS :  \n\n");
printf("            donner l'heur :     ");
scanf("%d",&h);
printf("           \n donner le minute :     ");
scanf("%d",&m);
printf("           \n donner le seconde :     ");
scanf("%d",&s);
printf("             \n\n         %d - %d -%d",h,m,s);
printf("           \n\n   donner 2 eme instant sous le format HH':MM':SS' :  \n\n");
printf("            donner l'heur :     ");
scanf("%d",&h1);
printf("           \n donner le minute :     ");
scanf("%d",&m1);
printf("           \n donner le seconde :     ");
scanf("%d",&s1);
printf("             \n\n              %d - %d -%d",h1,m1,s1);
if ((h<h1) || ((h1==h) && (m<m1)) || ((h1==h) && (m=m1) && (s<s1)))
printf("\n\n          Le deuxieme instant vient avant le premier");
else if ((h1<h) || ((h1==h) && (m1<m)) || ((h1==h) && (m=m1) && (s1<s)))
printf("\n\n    Le premier instant vient avant le deuxième");
else if (m==m1 && h==h1 && s==s1)
printf("\n\n        Il s'agit du même instant");}

