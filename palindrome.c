#include<stdio.h>
int main()
{
    int num, pal=0,rem,b;
      printf("Enter any number to check if it is palindrome or not:- ");
      scanf("%d",&num);
      b = num;
      while (num != 0)
      {
        rem = num % 10;
        pal = pal * 10 + rem;   
        num = num / 10;
        
      }
        if(b == pal)
        
             printf("%d is PALINDROME\n",b);
        
         else
             printf("%d is not a PALINDROME\n",b);
    return 0;

}