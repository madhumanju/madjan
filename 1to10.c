#include <stdio.h> 
  

int main() 

{ 
    
int i = 1; 
    
printf("%d ",i);

begin: 
   
 i=i+1;
    
printf("%d ", i); 
  
    
if (i < 10) 
       
 goto begin;
 
    return 0;
 
} 