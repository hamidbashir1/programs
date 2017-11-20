#include<stdio.h>
int main()
{
    int hours;

    printf("Enter Time (in Hours) to complete an assigned work: \n");
        scanf("%d",&hours);
        
        if(hours <= 3)
        {
            printf("Efficency of the worker is :- HIGHLY EFFICIENT!\n");
        }
    else
        if(hours >= 3 && hours <=4)
        {
            printf("Ordered to improve your Speed!\n");
        }
    else
        if(hours >= 4 && hours <= 5)
        {
            printf("Get the training to improve your speed!\n");
        }
    else
        printf("You are Terminated!\n");

    return 0;
}