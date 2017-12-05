#include <stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int roll;
    int marks;
} s;

int main(void)
{
    printf("---------------\nEnter information------------\n");

    printf("\nEnter name: ");
    scanf("%s", s.name);

    printf("\nEnter roll number: ");
    scanf("%d", &s.roll);

    printf("\nEnter marks: ");
    scanf("%d", &s.marks);


    printf("---------------\nDisplaying Information---------------\n");

    printf("\nName: %s\n",s.name);
    

    printf("\nRoll number: %d\n",s.roll);

    printf("\nMarks: %d\n", s.marks);

    return EXIT_SUCCESS;
}