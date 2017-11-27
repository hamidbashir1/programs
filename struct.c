#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME 30
#define MAX_COLOR 15

struct person 
{
    char firstName[MAX_NAME];
    char lastName[MAX_NAME];
    int age;
    char eyeColor[MAX_COLOR];
    float height;
};

void printStructure(struct person individual);

int main(void)
{
    struct person citizen;
    citizen.age = 20;
    citizen.height = 5.8;
    strcpy(citizen.lastName, "Peerzada");
    strcpy(citizen.firstName, "Hamid");
    strcpy(citizen.eyeColor, "Black");

    printStructure(citizen);
    return EXIT_SUCCESS;
}

void printStructure(struct person individual)
{
    printf("First Name: %s\n",individual.firstName);
    printf("Last Name: %s\n",individual.lastName);
    printf("Age: %d\n",individual.age);
    printf("Height: %lf\n",individual.height);
    printf("Eye color: %s\n",individual.eyeColor);
}