#include<stdio.h>
void pri_fact();
int main ()
{
    pri_fact();
}
    void pri_fact()
    {
        int num,i;
        printf("Enter any integer number: \n");
        scanf("%d",&num);
        
        printf("Prime Numbers of %d:- \n",num);
        i = 1;
        while(i < num)
        {
           if(num % i == 0)
           printf("%d\n",i);
           i++;
        }
    
    }
