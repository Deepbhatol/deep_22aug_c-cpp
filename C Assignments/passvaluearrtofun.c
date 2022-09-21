#include<stdio.h>

void display(int n)
{
	printf("%d\t",n);
}

void main()
{
	int arr[5] = {65,26,15,84,63};
	int i;
	
	for(i=0;i<5;i++)
	{
		display(arr[i]);
	}
}
