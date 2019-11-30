#include <stdio.h>

#include<string.h>


int main() 
{
   
int num, dig;
   
char str[10];
 
   
printf("Enter number");
   
scanf("%d", &num);
 
   
sprintf(str, "%d", num);
 
   
dig = strlen(str);
   
printf("digits are %d", dig);
 
   
return(0);

}