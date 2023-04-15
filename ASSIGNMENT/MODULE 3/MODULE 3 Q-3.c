#include<stdio.h>
main()
{
	int m,p,c,e,com,total;
	float percentage;
	
	printf("\nEnter the marks of Maths:");
	scanf("%d",&m);
	printf("\nEnter the marks of Physic:");
	scanf("%d",&p);
	printf("\nEnter the marks of Chemistry:");
	scanf("%d",&c);
	printf("\nEnter the marks of English:");
	scanf("%d",&e);
	printf("\nEnter the marks of Computer:");
	scanf("%d",&com);

    total=m+p+c+e+com;
    printf("\ntotal marks is:%d",total);
    
    percentage=total/5.0;
    printf("\npercentage is %f",percentage);
    if (percentage > 75)
    {
    	printf("\nDistinction");
	}
	else if (percentage > 60 && percentage <=75)
    {
    	printf("\nFrist class");
	}
	else if (percentage > 50 && percentage <=60)
    {
    	printf("\nSecond class");
	}
	else if (percentage > 35 && percentage <=50)
    {
    	printf("\nPass class");
	}
	else 
	{	
	printf("\nFail");
    }
}
