#include<stdio.h>
int main()
{
    int i, n;
    float arr[100];
    printf("Enter total number of elements(1 to 100 : ) you want to enter.");
    scanf("%d",&n);
    printf("\n");
      for(i = 0; i < n; i++)
      {
          printf("Enter number : \n\n");
          scanf("%f",&arr[i]);
      }
      for(i = 0; i < n; i++)
      {
          if(arr[0] < arr[i])
              arr[0] = arr[i];
      }
      printf("Largest element entered is : %.2f",arr[0]);
return 0;
}