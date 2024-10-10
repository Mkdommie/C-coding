#include<stdio.h>
int main (){

int start;
int stop;
int sum =0;

printf("enter start:",start);
scanf("%d",&start);

printf("enter stop:",stop);
scanf("%d",&stop);

for(int i=start ;i<=stop;i++){
printf("%d\n",i);
sum+=i;
}printf("the sum is %d",sum);











return 0;
}
