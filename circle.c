#include<stdio.h>
int main()
{
    int x,y;
    float rad,dia,dis;

    printf("Enter Radius of Circle :- \n");
    scanf("%f",&rad);

    printf("Enter X Co-ordinate :- \n");
    scanf("%d",&x);

    printf("Enter Y Co-ordinate :- \n");
    scanf("%d",&y);

    dis = x * x + y * y;
    dia = rad * rad;

    if(dis == dia)
    {
        printf("Point lies on the circle!\n");
    }
    else
    if(dis > dia)
    {
        printf("Point lies outside the circle!\n");
    }
    else
        printf("Point lies inside the circle!\n");
}