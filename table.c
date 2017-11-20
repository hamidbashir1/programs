#include<stdio.h>
int main()
{
    int i,num,table = 0;
    printf("Enter number to get table of that: ");
    scanf("%d",&num);
    for(i =1;i <= 10;i++)
    {
        table = i * num;
        printf("%d\n",table);
    }
    return 0;
}