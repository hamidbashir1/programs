#include <stdio.h>
int main()
{
    char g, m, f, pg, qual;

    int yos, sal;

    printf("Enter Gender(M/F), Years Of Service and Qualifications(G for Graduation and PG for Post-Graduation)\n");

    scanf("%c%d%lc", &g, &yos, &qual);

    if (g == m && yos >= 10 && qual == pg)
    {
        sal = 15, 000;
    }
    else if ((g == m && yos >= 10 && qual == g) || g == m && yos < 10 && qual == pg)
    {
        sal = 10, 000;
    }
    else if (g == m && yos < 10 && qual == g)
    {
        sal = 7, 000;
    }
    else if (g == f && yos >= 10 && qual == pg)
    {
        sal = 12, 000;
    }
    else if (g == m && yos >= 10 && qual == g)
    {
        sal = 9, 000;
    }
    else if (g == m && yos < 10 && qual == pg)
    {
        sal = 10, 000;
    }
    else if (g == m && yos < 10 && qual == g)
    {
        sal = 6, 000;
    }
    printf("Salary Of Employee is :- %d\n", sal);
    return 0;
}
