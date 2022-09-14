#include <stdio.h>

int main()
{

   int i, n, a=1 , b=1 , c=1;

   printf("Enter the number of terms: "); 
   scanf("%d", &n);
printf("%d ",a); 
for (i = 1; (i<=n ); i++)


{
   
if(c<=n){

   c = a + b;
   a=b;
   b=c;      
   printf("%d ",a); 
}
}


}