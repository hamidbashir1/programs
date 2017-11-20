#include<stdio.h>
void main()
{
    int num,i;

    for(num = 1; num < 300; num++)
    {
        for(i = 2; i < 300; i++)
        {
            if(i == num)
              continue;
            if(num % i == 0)
              break;
            if((num % i != 0) && i == 299)
                printf("%d\n",num);
        }
    }
}