#include<stdio.h>
#include<stdlib.h>

void testBreak(void);

int main(void)
{
    testBreak();
    return EXIT_SUCCESS;
}

void testBreak(void)
{
    int n;
    int loopCounter = 0;
    while(1)
    {
        printf("Cycle[%d]: Enter a number: ",loopCounter);
        scanf("%d",&n);
        if((n == 0) || (loopCounter >= 10))
        break;
        loopCounter++;
    }
}