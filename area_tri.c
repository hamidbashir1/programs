#include <stdio.h>
#include <math.h>
int main ()
{
    float side1,side2,side3,area,par;
    printf("Enter length of one side");
    scanf("%f",&side1);
    printf("Enter length of second side");
    scanf("%f",&side2);
    printf("Enter length of third side");
    scanf("%f",&side3);
    par = (side1 + side2 + side3)/2;
    area = sqrt (par * (par - side1)* (par - side2)* (par - side3));
    printf(" Area of Triangle is %f\n", area);
    return 0;
}