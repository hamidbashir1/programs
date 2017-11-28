#include <stdio.h>
#include<stdlib.h>

struct student
{
    char name[50];
    int roll;
    int marks;
} s[10];

void main()
{
    int i;

    printf("\n\t\t\t***Enter information of 10 students***\n");
    printf("\t\t\t--------------------------------------");
    for(i=0; i<2; ++i)
    {
        s[i].roll = i+1;

        printf("\nFor roll number%d,\n",s[i].roll);

        printf("\nEnter name: \n");
        scanf("%s",s[i].name);

        printf("\nEnter marks: \n");
        scanf("%d",&s[i].marks);

        printf("\n");
    }

    printf("\t\t\t***Displaying Information***\n");
    printf("\t\t\t----------------------------");

    for(i=0; i<2; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("\nName: ");
        printf("%s\n",s[i].name);
        printf("\nMarks: %d\n\n",s[i].marks);
        printf("----------------");
        printf("\n");
    }
    
}