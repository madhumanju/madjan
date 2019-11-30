#include <stdio.h>



int main() 
{
    
int a,b;
   
printf("enter two numbers");
   
scanf("%d%d",&a,&b);
   
printf("before swap %d%d",a,b);
   
b=a+b;
   
a=b-a;
   
b=b-a;
   
 
printf("after swap %d%d",a,b);
   
return(0);

}