#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define DATA_SIZE 10

void showBarChart(void);
void showOneBAr(int barLength);
void setDataValues(void);

int dataSet[DATA_SIZE];

int main(void)
{
    void setDataValues(void);
    void showBarChart(void);
    return EXIT_SUCCESS;
}

void setDataValues(void)
{
    srand(time(NULL));
    for(int i = 0; i < DATA_SIZE; i++)
    {
        dataSet[i] = rand() % 50;
    }
}

void showBarChart(void)
{
    for(int i = 0; i < DATA_SIZE; i++)
    {
        showOneBar(dataSet[i]);
    }
}

showOneBar(int barLength)
{
    printf("%3d:",barLength);
    for(int i = 0; i < barLength; i++)
    {
        printf("*");
    }
    printf("\n");
}