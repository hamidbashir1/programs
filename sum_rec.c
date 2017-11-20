#include<stdio.h>
int numsum(int);
int main()
{
    int num,sum;
    printf("Enter any number:\n");
    scanf("%d",&num);
    sum = numsum(num);
    printf("Sum = %d\n",sum);
    return 0;
}
    int numsum(int num)
    {
        int a,sum = 0;
        while (num != 0)
    {
        a = num % 10;
        sum = sum + a;
        num = num / 10;
    }
        return (sum);
    }