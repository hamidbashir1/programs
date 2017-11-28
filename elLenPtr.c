#include<stdio.h>
#include<stdlib.h>

int main()
{
    int data[] = {15 , 20 , 30 , 45 , 60 , 80};
    int *ptr = data;
    printf("data[] starts at address %p with value %d\n", ptr , *ptr);

    int numElements = sizeof(data) / sizeof(int);
    printf("There are %d elements in data[]\n",numElements);

    for(int i = 0; i < numElements; i++)
    {
        printf("Address %p stores value: %d\n", ptr,*ptr);
     ptr++;
    }
}