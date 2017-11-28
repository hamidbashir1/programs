#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *dynamicArray = malloc(20 * sizeof(int));

    *dynamicArray = 10;
    printf("---------------------------------------\n");
    printf("\nAddress %p stores value: %d\n", dynamicArray , *dynamicArray);

    dynamicArray[1] = 20;
    printf("\ndynamicArray[1] stores value %d\n",dynamicArray[1]);
    printf("\nThe size of dynamicArray is %lu\n\n", sizeof(dynamicArray));

    free(dynamicArray);

    return EXIT_SUCCESS;
}