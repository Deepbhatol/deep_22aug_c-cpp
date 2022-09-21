#include<stdio.h>

void show(int *p)
{
	int i;\
	printf("\npassing Entire array in function using pointer.\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	
	}
}
	void main()
	{
		int marks[5]={10,25,45,56,23};
		show(marks);
	}
