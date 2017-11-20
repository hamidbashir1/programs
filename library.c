#include<stdio.h>
int main()
{
    int days;
    float fine;

    printf("Enter number of days you kept book :- \n");
    scanf("%d",&days);

    if(days <= 5)
    {
        printf("You have to pay Fine!\n");
        fine = days * 0.50;
        printf("The fine is :-Rs%f\n",fine);
    }
    else
    if(days > 5 && days <= 10)
    {
        printf("You have to pay Fine!\n");
        fine = 2.5 + (days - 5);
        printf("The fine is :-Rs%f\n",fine);
    }
    else
    if(days > 10 && days <= 30)
    {
        printf("You have to pay Fine!\n");
        fine = 7.5 + (days - 10) * 5;
        printf("The fine is :-Rs%f\n",fine);
    }
    else
    printf("Your Membership has been cancelled!\n\n For more details contact your Co-ordinator!\n\n");

    return 0;
}
