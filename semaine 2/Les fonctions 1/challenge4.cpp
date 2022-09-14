#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool dividedby(int a,int n)
{
	if (a%n==0)
		return true;
	else
	return false;
}


int main()
{
	int a,n;
	printf("\n a= ");
	scanf("%d",&a);
	printf("\n n= ");
	scanf("%d",&n);
	if(dividedby(a,n))
		printf("%d/%d=%d",a,n,a/n);
	else 
	printf("les deux nombre sont premier entre eux ");
		
}
