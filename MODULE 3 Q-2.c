#include<stdio.h>
main()
{
int n,i;
printf("\n Enter the number:");
scanf("%d",&n);
for (i=2;i<=n/2;i++)
{
if (n % i == 0)
{
printf("%d is not a prime number",n);
}
else
{
printf("%d is a prime number",n);	
}
}
}
