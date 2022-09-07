#include<stdio.h>

void main()

{
	int a,b;
	
	printf("enter value of A:");
	scanf("%d",&a);
	printf("enter value of B:");
	scanf("%d",&b);
	
	printf("A=%d \nB=%d",a,b);
	
	printf("\n======== BASIC CALCULATOR =======\n");
	printf("\naddition =%d",(a+b));
	printf("\nsubtrection =%d",(a-b));
	printf("\nmultiplication =%d",(a*b));
	printf("\ndivision =%.2f",(a/(float)b));
	
	
}