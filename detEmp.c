#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int empno ;
    char name[10] ;
    int basicPay, allowances, deduction, netPay ;
} e[10] ;
void main(void)
{
    int i, n ;
    printf("Enter the number of employees : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter the employee number : ") ;
        gets(e[i].name);
        //scanf("%d", &e[i].empno) ;
        printf("\nEnter the name : ") ;
        scanf("%s", e[i].name) ;
        printf("\nEnter the basic pay, allowances & deductions : ") ;
        scanf("%d %d %d", &e[i].basicPay, &e[i].allowances, &e[i].deduction) ;
        e[i].netPay = e[i].basicPay + e[i].allowances - e[i].deduction ;
    }
    printf("\n Emp. No.\tName   \t BasicPay \t allowances \t Deduction \t NetPay \n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\n\n  %d\t\t%s\t %d \t %d \t \t  %d \t \t%d \n\n", e[i].empno,
        e[i].name, e[i].basicPay, e[i].allowances, e[i].deduction, e[i].netPay) ;
    }

}