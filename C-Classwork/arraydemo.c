#include <stdio.h>

void main()
{
	int i;
	int arr1[5];
	
	printf("\n Accepting array elements\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&arr1[i]);
	}
	
	
	printf("\ndisplaying array elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter element %d=%d\n",i+1,arr1[i]);
		
	}
	
	
	
	
}