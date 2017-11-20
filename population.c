#include<stdio.h>

int main()
{
    int pop = 100000,i;
    for(i =0; i <10; i++)
    {
        pop =(pop/100) * 10;
        printf("Year %d : %d\n",10-i,pop);
    }
    return 0;
}