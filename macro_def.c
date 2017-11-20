#include<stdio.h>
#define SMALL(char) (char >= 97 && char <= 122)
#define CAPITAL(char) (char >= 65 && char <= 90)
#define ALPHABET(char) (SMALL(char) || CAPITAL(char))
#define BIGGER(a,b) (a > b)?a:b 
void main()
{
    unsigned int choice;
    int a,b,bigger;
    char c;

    printf("1.To test whether a character is small case letter or not.\n");
    printf("2.To test whether a character is an upper case letter or not.\n");
    printf("3.To test whether a character is an alphabet or not.\n");
    printf("4.To obtain the largest number of two.\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter a character:\n");
        scanf("%c",&c);
        if(SMALL(c))
        {
            printf("%c is a Small case letter\n",c);
        }
        else    
            printf("%c is Not a Small case letter\n",c);
            break;

        case 2:
        printf("Enter a character: \n");
        scanf("%c",&c);
        if(CAPITAL(c))
        {
            printf("%c is an Upper case letter\n",c);
        }
        else
            printf("%c is Not an Upper case letter\n",c);
            break;
        case 3:
        printf("Enter a character:\n");
        scanf("%c",&c);
        if(ALPHABET(c))
        {
            printf("%c is an Alphabet\n",c);
        }
        else
            printf("%c is Not an Alphabet\n",c);
            break;
        case 4:
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        bigger = BIGGER(a,b);
        printf("%d is Largest number\n",bigger);
        break;
        default :
        break;
    }
}