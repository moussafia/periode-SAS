#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{puts("\n\n        Challenge 6 : Palindrome  \n\n");
int a,n,i;
char T[50];
 printf("      donner le mot       :  ");
 scanf("%s",T);
 n=strlen(T);
        for(i=0;i<n;i++)
			{if (T[i]==T[n-1-i])
			a=1;
			else
			a=0;
			   }
			   if(a==1)
			   printf("\n\n       le mot est Palindrome\n\n");
			   else
			   printf("\n\n     le mot n'est pas Palindrome\n\n");}
