#include <stdio.h>
int main(){

int age;
int annualincome;

printf ("enter your age:");
scanf ("%d",&age);
printf ("enter annualincome:");
scanf ("%d",&annualincome);

   if  (age>=21&annualincome>=21000) {
         printf ("congratulations you qualify for a loan.\n:");
   } else {
   printf ("unfortunately, we are unable to offer you a loan at this time.\n:");
       }
       
       return  0;
       }