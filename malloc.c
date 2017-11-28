#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *dynamicArray = malloc(20 * sizeof(int));

    *dynamicArray = 10;
    printf("Address %p stores value: %d\n", dynamicArray , *dynamicArray);

    dynamicArray[1] = 20;
    printf("dynamicArray[1] stores value %d\n",dynamicArray[1]);
    printf("The size of dynamicArray is %lu\n", sizeof(dynamicArray));

    free(dynamicArray);

    return EXIT_SUCCESS;
}