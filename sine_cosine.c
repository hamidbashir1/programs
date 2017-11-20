#include<stdio.h>
#include<math.h>
int main()
{
    float degree;
    int sum;

    printf("Enter value of angle in degrees :- \n");
    scanf("%f",&degree);

    sum = (sin(degree) * sin(degree) + cos(degree) * cos(degree));

    if (sum == 1)
    {
        printf("Summation is equal to 1");
    }

    else
    printf("Summation is not equal to 1");

    return 0;
}