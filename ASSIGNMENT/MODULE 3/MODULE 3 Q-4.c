#include<stdio.h>
main ()
{
 float h,b,l,w,r,Area_of_triangle,Area_of_Rectangle,Area_of_circle;
 int num;
 
 printf("\n----Menu----\n");
 printf("\n1.Area of Triangle.\n2.Area of Rectangle.\n3.Area of Circle.");
 
 printf("\nSelect the Number According to Requirement from given menu:");
 scanf("%d",num);
 switch(num)
 {
 	case 1:
 		printf("Enter the Height of triangle:");
 		scanf("%f",h);
 		printf("Enter the of Base of triangle:");
 		scanf("%f",b);
 		Area_of_triangle=1/2(b*h);
 		break;
 	
 	case 2:
 		printf("Enter the length of Reactangle:");
 		scanf("%f",h);
 		printf("Enter the of width of Reactangle:");
 		scanf("%f",b);
 		Area_of_Rectangle=l*w;
 		break;
 	
 	case 3:
 		printf("Enter the Radius of Circle:");
 		scanf("%f",r);
 		Area_of_circle=3.14*r*r;
 		break;	
	 }	
}
