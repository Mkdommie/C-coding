//do while
#include <stdio.h>
int main (){
      int sum=0,start,stop;
      printf ("enter a value for when to start:");
      scanf("%d",&start);
      printf("entera value for when to stop:");
      scanf("%d",&stop);
      
      do{
             printf("%d\n",start);
             sum+=start ;
        start++;
             
             
   }
   while(start<=stop);
    printf("the sum is %d",sum); 
   return 0;
  
   }   
      