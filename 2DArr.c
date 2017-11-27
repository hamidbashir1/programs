#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 2
#define NUM_COLS 3

void printTable(int table[][NUM_COLS]);

int main(void)
{
    int table[NUM_ROWS][NUM_COLS] = 
    {
        {123 , 16 , 34} ,
        {0 , 76 , 754}
    };
    printf("Row 2 Column 3 contains %d\n",table[1][2]);

    printTable(table);

    return EXIT_SUCCESS;
}

void printTable(int table[][NUM_COLS])
{
    printf("\nThe Table:\n");
    for(int i = 0; i< NUM_ROWS; i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            printf("%4d",table[i][j]);
        }
        printf("\n");
    }
}