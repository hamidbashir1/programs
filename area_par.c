#include<stdio.h>
int main()
{
    int len,bre,area,par;
     
     printf("Enter Length of Rectangle :- \n");
    scanf("%d",&len);

    printf("Enter Breadth of Rectangle :- \n");
    scanf("%d",&bre);

    area = len * bre;
    par = (2 * len) + (2 * bre);

    printf("Area of Rectangle is :- %d\n",area);
    printf("Parimeter of Rectangle is :- %d\n",par);

    if (area > par)
    {
        printf("Area of this Rectangle is Greater than Parimeter of this Rectangle!\n");
    }
    else
    printf("Parimeter of Rectangle is greater than area of this Rectangle\n");

    return 0;
}