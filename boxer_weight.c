#include <stdio.h>
int main()
{
    int weight;

    printf("Enter weight (in Pounds) of Boxer:- \n");
    scanf("%d", &weight);

    if (weight < 115)
    {
        printf("Weight Class of Boxer is:- Flyweight\n");
    }
    else if (weight >= 115 && weight <= 121)
    {
        printf("Weight Class of Boxer is:- Bantamweight\n");
    }
    else if (weight >= 122 && weight <= 153)
    {
        printf("Weight Class of Boxer is:- Featherweight\n");
    }
    else if (weight >= 154 && weight <= 189)
    {
        printf("Weight Class of Boxer is:- Middleweight\n");
    }
    else
     printf("Weight Class of Boxer is :- Heavyweight\n");

    return 0;
}