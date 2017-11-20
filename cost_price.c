#include<stdio.h>
int main ()
{
    float price,profit,cost_price =0;
     printf("Enter total price of 15 items:- ");
      scanf("%f",&price);
      printf("Enter total profit earned on them:- ");
      scanf("%f",&profit);
     cost_price= (price - profit)/15 ;
    printf("The cost price of one item is :- %f\n",cost_price);
    return 0;
}