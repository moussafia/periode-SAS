#include <stdio.h>
#include <stdlib.h>
int main()
{puts("\n\n               Challenge 7 : Calcule et affichage résultat en format décimal \n\n\n");
int s,so,d,mode,a,b;
printf("donner le nombre a  : ");
scanf("%d",&a);
printf("\n donner le nombre b  : ");
scanf("%d",&b);
s=a+b;so=a-b;d=a/b;mode=a%b;
printf("\n\n %d=%d+%d\n",s,a,b);
printf("\n\n %d=%d-%d\n",so,a,b);
printf("\n\n %d=%d/%d\n",d,a,b);
printf("\n\n %d=%d mode %d\n",mode,a,b);
}
