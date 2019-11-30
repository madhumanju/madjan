#include<stdio.h>

 
int main() 
{
   
int n;
   
int sum = 0;
   
printf("enter number");
   
scanf("%d",&n);
 
   
for (; n > 0; sum=sum + n % 10, n=n /10);
 
   
printf("Sumis %d", sum);
return 0;

}