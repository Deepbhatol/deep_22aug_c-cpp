#include<stdio.h>

void main()
{
	int a;
	for(a=1;a<=10; a++)
	{
		if(a==5)
		//break;
		continue;
		
		printf("\n%d",a);
		
	}
	printf("\nout of loop");
}