#include<stdio.h>
int main()
{
    int profit,loss,cp,sp;
    printf("Enter Cost Price of 1 item\n");
    scanf("%d",&cp);

    printf("Enter Selling Price of 1 item\n");
    scanf("%d",&sp);

    if (sp > cp)
    {
        printf("You have earned Profit!\n");
        profit = sp - cp;
        printf("Profit earned = %d\n",profit);
    }
    else
    {
        printf("You have incurred Loss!\n");
            loss = cp - sp;
        printf("Incurred loss = %d\n",loss);
    }
    return 0;
}