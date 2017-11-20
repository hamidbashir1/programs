#include<stdio.h>

void main()
{
    int ram,shyam,ajay;
    printf("Enter age of Ram :- \n");
    scanf("%d",&ram);

    printf("Enter of Shyam :- \n");
    scanf("%d",&shyam);

    printf("Enter age of Ajay :- \n");
    scanf("%d",&ajay);

    if (ram < shyam && ram < ajay)
    {
        printf("Ram is Younger than Shyam and Ajay!\n");
    }
    else
    if (shyam <ram && shyam < ajay)
    {
        printf("Shyam is Younger than Ram and Ajay!\n");
    }
    else 
    printf("Ajay is Younger that Ram and Shyam!\n");
     
    
}