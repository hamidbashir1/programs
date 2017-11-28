#include<stdio.h>
#include<stdlib.h>


#define SUM(A, B) (A + B)
#define PRODUCT(A, B) (A * B)


int main()
{
     int num1, num2, sum, product;

     printf("\nEnter the first number\n");
     scanf("%d",&num1);
     printf("\nEnter the second number\n");
     scanf("%d",&num2);
         sum=SUM(num1,num2);
         product=PRODUCT(num1,num2);

     printf("\n\nSum of two numbers using Macros is: %d\n",sum);
     printf("\n\nProduct of two numbers using macros is: %d\n\n",product);
 
   return EXIT_SUCCESS;

}