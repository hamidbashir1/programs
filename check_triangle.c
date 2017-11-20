#include<stdio.h>
int main()
{
        int side1,side2,side3;

        printf("Enter First side!\n");
    scanf("%d",&side1);

        printf("Enter Second side!\n");
    scanf("%d",&side2);

        printf("Enter Third side!\n");
    scanf("%d",&side3);


    if (side1 != side2 && side1 != side3 && side2 != side3)
    {
        printf("Triangle is Scalene!\n");
    }
    else
    if(side1 == side2 && side1 == side3 && side2 == side3)
    {
        printf("Triangle is Equilateral!\n");
    }
    else
        printf("Triangle is Isosceles!\n");  
    return 0;
}
