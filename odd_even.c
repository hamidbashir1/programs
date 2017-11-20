#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number!\n");
    scanf("%d",&num);

    if (num %2 == 0)
    {
        printf("Number entered is even!\n");
    }
    else
        printf("Number entered is Odd!\n");
    return 0;
}