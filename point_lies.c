#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter X and Y Co-ordinates of a point : \n");
    scanf("%d%d",&x,&y);

    if(x == 0 && y == 0)
    {
        printf("Point Lies on Origin!\n");
    }
    else
    if(x != 0 && y == 0)
    {
        printf("Point Lies on X-Axis!\n");
    }
    else
    if(x == 0 && y != 0)
    {
        printf("Point Lies on Y-Axis");
    }
    else
        printf("Point does not lie on any axis nor on origin!\n");
        
    return 0;
}