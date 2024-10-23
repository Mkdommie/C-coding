#include <stdio.h>
#include<string.h>
struct book {
char title[30];
char author[30];
 int publication_year;
float price;
char isbn[13];
}book;

int main (){
// struct book;
  /*student1.height =5.7 ;
  strcpy(student1.name,"Dommie");
  strcpy(student1.email,"mkdommie19@gmail.com");
  strcpy(student1.reg_no,"CT101/G/22777/24");
  student1.phone_no= 788  ;
  */
  printf("enter title:");
  scanf("%s",&book. title);
  printf("enter author:");
  scanf("%s",&book.author);
  printf("enter publication_year:");
  scanf("%d",&book.publication_year);
  printf("enter price:");
  scanf("%f",&book.price);
  printf("enter isbn:");
  scanf("%d",&book.isbn);
  
  printf("title:%s\n",book.title);    
  printf("price:%2f\n",book.price);
  
  printf("author :%s\n",book.author);
  printf("publication_year:%d\n",book.publication_year);
  printf("isbn:%d\n",book.isbn);
  
  return 0;
  }






    