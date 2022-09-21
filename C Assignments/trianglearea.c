#include<stdio.h>

void main()
{
	float h,b,area;
	printf("*****area of triangle*****\n\n\n");
	
	printf("enter base of triangle:",b);
	scanf("%f",&b);
	
	printf("enter hight of triangle:",h);
	scanf("%f",&h);
	
	area = (h*b)/2;
	
	printf("area of triangle:%.2f",area);
	
	
	
}