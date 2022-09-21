#include<stdio.h>

void main()
{
	int choice;
	
	printf("show days of week \n\n");
	
    printf("press 1 to print monday to sunday ");	
	printf("enter your choice:",choice);
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\n Monday\n Tuesday\n Wednesday\n Thursday\n Friday\n Saturday\n Sunday\n");
		break;
		default :printf("\nInvalid Choice");
		break;
		
		
	}
	
	
	
	
	
	
}