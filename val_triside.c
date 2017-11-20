#include<stdio.h>
int main()
{
        float side1,side2,side3,sum,sum1,sum2;

        printf("Enter First side!\n");
    scanf("%f",&side1);

        printf("Enter Second side!\n");
    scanf("%f",&side2);

        printf("Enter Third side!\n");
    scanf("%f",&side3);

    sum = side1 + side2;
    sum1 = side1 + side3;
    sum2 = side2 + side3;
    if (sum > side3 && sum1 > side2 && sum2 > side1 )
    {
        printf("Triangle is Valid!\n");
    }
    else
        printf("Not a Valid Triangle!\n");
        
    return 0;
}
