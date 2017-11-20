#include<stdio.h>
int cirshift(int *,int *,int *);
int main()
{
    int x,y,z;
    printf("Enter the values of X,Y and Z resp.: \n");
    scanf("%d%d%d",&x,&y,&z);
    cirshift(&x,&y,&z);
    printf("New values of x = %d\nNew values of y = %d\nNew values of z = %d\n",x,y,z);
    return 0;
}
   int cirshift(int *x,int *y,int *z)
    {
        int k;
        k = *y;
        *y = *x;
        *x = *z;
        *z = k;
        return (*x,*y,*z);
    }