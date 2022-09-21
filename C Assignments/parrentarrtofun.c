#include<stdio.h>

void show(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	
	}
}
	void main()
	{
		int marks[5]={10,25,45,56,23};
		show(marks);
	}
