#include <stdio.h>

int main()
{
    int choice, num, i, fact;

    while (1)
    {
        printf("\n1.Factorial\n");
        printf("\n2.Prime\n");
        printf("\n3.Odd/Even\n");
        printf("\nYour Choice? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number:\n");
            scanf("%d", &num);
            fact = 1;
            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("\nFactorial value = %d\n", fact);
            break;
        case 2:
            printf("\nEnter number:\n");
            scanf("%d", &num);
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("\nNot a prime number.\n");
                    break;
                }
            }
            if (i == num)
            {
                printf("\nPrime number.\n");
            }
            break;
        case 3:
            printf("\nEnter number:\n");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("\nEven number.\n");
            }
            else
                printf("\nOdd number.\n");
            break;
        }
    }
}