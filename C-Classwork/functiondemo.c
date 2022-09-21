#include<stdio.h>

void fun1();  //function declaration
void fun2();

void main()
{
	printf("\n in main first:start");
	fun1();  //function calling
	fun2();
	printf("\n in main:end");
}

  // function creation / function defined
void fun1()
{
	fun2();
	printf("\n function 1 called");
}

void fun2()
{
	printf("\nfundtion 2 called");
}