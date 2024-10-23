#include <stdio.h>
#include<string.h>
struct book{
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
}book;

int main (){
struct  book;
  strcpy(book.title,"Introduction to C.programming");
  strcpy(book.ISBN,"9780131103627");
  book.price=49.99;
  book.publication_year= 2022 ;
  strcpy(book.author,"John Smith");
  
  
  /*printf("enter the title:");
  scanf("%s",&book.title);
  printf("enter author:");
  scanf("%s",&book.author);
  printf("enter publication_year:");
  scanf("%d",&book.publication_year);
  printf("enter ISBN:");
  scanf("%d",&book.ISBN);
  printf("enter price:");
  scanf("%f",book.price);*/
  
  printf("title:%s\n",book.title);    
  printf("author:%s\n",book.author);
  
  printf("publication_year:%d\n",book.publication_year);
  printf("ISBN:%s\n",book.ISBN);
  printf("price:%f\n",book.price);
  
  return 0;
  }






    