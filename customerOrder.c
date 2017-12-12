#include<stdio.h>
int main()
{
    int stock = 100, credit, item;

    printf("Enter the number of items to be supplied:- \n");
        scanf("%d",&item);
    printf("Enter his credit balance:- \n");
        scanf("%d",&credit);

    if(credit == 0)
    {
        if(item <= stock)
        {
            printf("Supply his Order\n");
        }
    }
    else
        if(credit != 0 )
        {
            printf("Do not supply his Order.\n Clear your Credit balance first.\n");
        }
    else
        if(item > stock)
        {
            if(credit == 0)
            {
                printf("Supply what is in Stock. \n We will transfer your remaining amount to you.\n");
            }
        }
    return 0;
}