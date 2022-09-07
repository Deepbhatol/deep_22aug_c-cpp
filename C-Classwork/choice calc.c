#include<stdio.h>

void main()

{
	int a,b,choice;
	
	printf("  CHOICE CALCULATOR");
	
	
	printf("\n\nenter A:");
	scanf("%d",&a);
	printf("\nenter B:");
	scanf("%d",&b);
	
	printf("\nA=%d , B=%d",a,b);
	printf("\n press 1 for addition");
	printf("\n press 2 for subtraction");
	printf("\n press 3 for multiplication");
	printf("\n press 4 for division");
	
	printf("\n\n enter your choice :");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\n addition is :%d",(a+b));
	}
	
	else if(choice==2)
	{
		printf("\n subtraction is :%d",(a-b));
	}
	
	else if(choice==3)
	{
		printf("\n multiplication is :%d",(a*b));
	}
	
	else if(choice==4)
	{
		printf("\n division is :%.2f",(a/(float)b));
	
	}
	else 
	{
		printf("\n invalid choice ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}