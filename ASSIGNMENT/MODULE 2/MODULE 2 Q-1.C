#include<stdio.h>
main()
{
	int n,num;	
	printf("\nEnter a number:");
	scanf("%d",&n);
	
	num=n*n;
	printf("\nSquare of given number is %d",num);
	
	num=n*n*n;
	printf("\ncube of given number is %d",num);
}
