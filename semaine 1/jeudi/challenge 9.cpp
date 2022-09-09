#include<stdio.h>
#include<stdlib.h>
int main()
{puts("   \n\n     Challenge 9 :            ");
int j,m,a;
printf("donner le jour :");
scanf("%d",&j);
printf("donner le mois :");
scanf("%d",&m);
printf("donner l'année' :");
scanf("%d",&a);
printf("\n\n\n      la date est qui vous avez donner : %d - %d - %d",j,m,a);
printf("\n\n\n");
if((m>0 && m<13) && (j>0 && j<33))
{
if (m==1)
printf("%d - janvier - %d",j,a);
else if (m==2)
printf("%d -fevrier - %d",j,a);
else if (m==3)
printf("%d - mars - %d",j,a);
else if (m==4)
printf("%d - avril - %d",j,a);
else if (m==5)
printf("%d - mai - %d",j,a);
else if (m==6)
printf("%d - juin - %d",j,a);
else if (m==7)
printf("%d - juillet - %d",j,a);
else if (m==8)
printf("%d - aout - %d",j,a);
else if (m==9)
printf("%d - Septombre - %d",j,a);
else if (m==10)
printf("%d - October - %d",j,a);
else if (m==11)
printf("%d - november - %d",j,a);
else if (m==12)
printf("%d - decomber - %d",j,a);}
}


