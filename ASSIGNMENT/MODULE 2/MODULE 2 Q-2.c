#include<stdio.h>
main()
{
	int p;
	float r,n,simple_intrest,CI,time;
	printf("Enter the priciple amount:");
	scanf("%d",&p);
	printf("Enter the time period:");
	scanf("%f",&time);
	printf("\nEnter the rate:");
	scanf("%f",&r);
	printf("\nEnter the number of year:");
	scanf("%f",&n);
	simple_intrest =(p*r*n)/100;
	printf("\nsimple intrest is %f",simple_intrest);
	
	CI=(p*(r/n)*n*time);
	printf("\ncompound intrest is %f",CI);
	
}




// p*r*n

//p(rate/n)n*times
