#include<stdio.h>
#include<stdlib.h>
void listNumbers(int small, int large, int k);

int main(void)
{
    printf("Enter the small number: \n");
    int smallNumber;
    scanf("%d",&smallNumber);

    printf("Enter the large number: \n");
    int largeNumber;
    scanf("%d",&largeNumber);

    listNumbers(smallNumber,largeNumber,1);

return EXIT_SUCCESS;
}

void listNumbers(int small,int large,int k)
{
    printf("Step[%d]: %d \n",k , small);
     if(small < large)
    
    listNumbers(small +1,large,k +1);
}