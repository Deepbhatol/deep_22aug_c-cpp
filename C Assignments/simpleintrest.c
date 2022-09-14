#include<stdio.h>

void main()
{
	float value,per,time,si;
                             	//si=simple intrest
	printf("enter value:");
	scanf("%f",&value);
	
	printf("enter per:");
	scanf("%f",&per);
	
	printf("enter time:");
	scanf("%f",&time);
	
	si= (value*per*time)/100;
	
	printf("si=%.2f",si);
	
	
	
	
	
	
	
}