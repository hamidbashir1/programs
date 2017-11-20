#include<stdio.h>
int main()
{
    int num, rev=0;
      printf("Enter the five digit number you want to reverse:- ");
      scanf("%d",&num);
      while(num != 0)
      {
        rev = rev * 10;
        rev = rev + num % 10;
        num = num / 10;
      }
      printf("Number after reversing is :- %d\n", rev);
        return 0;
}