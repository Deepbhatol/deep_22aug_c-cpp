#include <stdio.h>

void main()
{
	int i;
	int arr1[5],arr2[5];
	
	printf("\n Accepting array 1 elements\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\ndisplaying array 1 elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter element %d=%d\n",i+1,arr1[i]);
		
}
		
			printf("\n Accepting array 2 elements\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&arr2[i]);
	}
	printf("\ndisplaying array 2 elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter element %d=%d\n",i+1,arr2[i]);
	}
		
		printf("\n\n****************addition of 2 arrays*********");
		
		for(i=0;i<5;i++)
		{
		     printf("\n element %d=%d\n",i+1,arr1[i]+arr2[i]);
		}
		
		
}

	
	
	
	
