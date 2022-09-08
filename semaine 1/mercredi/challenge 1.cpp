#include <stdio.h>
#include <stdlib.h>
int main()
{puts("\n\n        Challenge 1 :Affichage Informations\n\n");
char Nom[15],prenom[15],Sexe[8];
int age;
printf("donner votre nom: ");
scanf("%s",Nom);
printf("donner votre prenom: ");
scanf("%s",prenom);
printf("donner votre age: ");
scanf("%d",&age);
printf("donner votre sexe: ");
scanf("%s",Sexe);
printf("\n\n NOM= %s \n\n Prenom= %s \n\n age= %d ans \n\n sexe= %s",Nom,prenom,age,Sexe);}
