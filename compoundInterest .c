#include <stdio.h>
#include <math.h>
int main() {
      float  amount, principal, rate, number_of_compoundings,time,compoundInterest ;
      printf("enter principal:");
      scanf ("%f",&principal);
      printf ("enter the rate(in percentage):");
      scanf ("%f",&rate);
      rate =rate /100;
      printf ("enter number_of_compounding:");
      scanf ("%f",&number_of_compoundings);
      printf ("enter time(in years):");
      scanf ("%f",&time);
      amount =principal* pow((1+rate/number_of_compoundings),(number_of_compoundings*time));
      compoundInterest=amount-principal;
      printf ("the compoundInterest is:%f\n",compoundInterest);
      
      return 0;
      }