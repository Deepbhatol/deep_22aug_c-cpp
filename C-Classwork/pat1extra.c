#include<stdio.h>

void main()
{
	int i,j,m,n,choice;
    
		again:
	   
	printf("\nenter N:");
	scanf("%d",&n);

	for( i=1;i<=n;i++)
	{
	
		for(m=1;m<=n-i;m++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		 printf("\n");	 
		 
	}
	
	printf("\nPress 5 for Repeat Again\n");
	printf("enter your choice:");
	goto again;
}
