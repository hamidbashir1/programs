#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int sizes[] = {15 , 20 , 30};
     
     int *ptr = sizes;

     printf("Address %p stores value: %d\n", ptr,*ptr);

     ptr++;
     printf("Address %p stores value: %d\n", ptr,*ptr);
     ptr++;

     printf("Address %p stores value: %d\n", ptr,*ptr);

     ptr--;
     ptr--;
     printf("Address %p stores value: %d\n", ptr,*ptr);

     return EXIT_SUCCESS;

}