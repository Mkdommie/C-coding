#include <stdio.h>
int main (){

     int bookID,dueDate,returnDate, overdueDays, fineRate,fineAmount ;
     //input bookID, dueDate  and returnDate 
     printf ("Enter Book ID:");
     scanf ("%d",&bookID);
     printf ("Enter DueDate(as an integer):");
     scanf ("%d",&dueDate);
     printf ("Enter Return Date(as an integer):");
     scanf ("%d",&returnDate);
     
     //calculate  overdueDays 
     overdueDays =returnDate-dueDate;
     printf ("enter the overdueDays:%d\n",overdueDays);
     
     //calculate  fineRate 
     fineRate =overdueDays ;
    printf ("enter the finerate:%2d\n",fineRate);
    
         if(overdueDays<=7)  {
     fineAmount =overdueDays *20;
  } else if (overdueDays<=14)  {
      fineAmount =(7*20)+((overdueDays-7)*50);
  }else {
      fineAmount =(7*20) +(7*50)+((overdueDays-14)*100);
  }      
  
  printf ("the fine amount is:%.2d\n",fineAmount) ;
   
  return 0;
  }