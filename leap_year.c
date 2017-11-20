#include<stdio.h>
int main()
{
    int year;
    printf("Enter year to check if it is leap or not:-");
    scanf("%d",&year);
    if(year % 4 == 0)
    {
        printf("LEAP YEAR\n");
    }
    else
    printf("NOT A LEAP YEAR\n");
}