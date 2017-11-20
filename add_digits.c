#include<stdio.h>
 int main()
{
    int num,total,sum = 0,rem;
    printf("Enter any five digit number:-");
    scanf("%d",&num);
    total = num;
    while (total != 0)
    {
        rem = total % 10;
        sum = sum + rem;
        total = total / 10;
    }
printf("Sum of the digits of given number is :- %d\n", sum );
return 0;
}
