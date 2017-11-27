#include<stdio.h>
#include<stdlib.h>

void showBarChart(void);
void showOneBar(int barLength);

int main(void)
{
    showBarChart();
    return EXIT_SUCCESS;
}

void showBarChart(void)
{
    showOneBar(10);
    showOneBar(12);
    showOneBar(05);
    showOneBar(06);
    showOneBar(07);

}

void showOneBar(int barLength)
{
    printf("%3d",barLength);
    {
        for(int i =0; i < barLength; i++)
            printf("*");
    }
    printf("\n");
}
