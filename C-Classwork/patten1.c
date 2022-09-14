#include<stdio.h>

void main()
{
	int j,m;
	
	for(int i=1;i<=10;i++)
	{
	
		for(m=1;m<=10-i;m++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		 printf("\n");
		 
	}
	
	
}
