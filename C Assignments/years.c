#include<stdio.h>

void main()
{
	float years,days=365,ans;
	
	printf("enter no of years:");
	scanf("%f",&years);
	
	ans= years*days;
	
	printf("%.2f",ans);
	
	printf("\nenter days:");
	scanf("%f",&days);
	
	ans=days/365;
	
	printf("%.2f",ans);
	
	
}