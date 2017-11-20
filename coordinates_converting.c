#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    double r, theta;
    printf("Enter the value of co-ordinates i.e, x,y \n");
    scanf("%lf%lf", &x, &y);
    r = sqrt(y * y - x * x);
    theta = arctan(y / x) + 3.14;
    printf("The value in POLAR CO-ORDINATES is %lf\n%lf", r, theta);
    return 0;
}