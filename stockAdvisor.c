#include<stdio.h>
#include<stdlib.h>

#define SELL_PRICE_POINT 60.5
#define BUY_PRICE_POINT 18.9

double askStockValue(void);
void makeDecision(double value);
void handleTransaction(char action);

int main(void)
{
    double value = askStockValue();
    makeDecision(value);
    return EXIT_SUCCESS;
}

double askStockValue(void)
{
    printf("What is the current stock value?");
    double value;
    scanf("%lf",&value);
    return value;
}

void makeDecision(double value)
{
    if(value <= BUY_PRICE_POINT)
        handleTransaction('b');
    else
        if(value >= SELL_PRICE_POINT)
            handleTransaction('s');
    else
        handleTransaction('h');
}

void handleTransaction(char action)
{
    switch(action)
    {
        case 'b':
            printf("I suggest you buy more of this stock.\n");
            break;
        case 's':
            printf("I suggest you sell this stock.\n");
            break;
        case 'h':
            printf("Let's wait and see what the market is doing.\n");
            break;
        default:
            printf("Sorry, I cannot provide any advice at this time.\n");
            break;
    }
}