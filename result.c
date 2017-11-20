#include <stdio.h>
int main() 
{
    int english,physics,chemistry,biology,urdu,total;
    float gp,per;
        printf("Enter Marks of English :- ");
                 scanf("%d",&english);
         printf("Enter Marks of Physics :- ");
                 scanf("%d",&physics);
             printf("Enter Marks of Chemistry :- ");
                 scanf("%d",&chemistry);
             printf("Enter Marks of Biology :- ");
                 scanf("%d",&biology);
             printf("Enter Marks of Urdu :- ");
                 scanf("%d",&urdu);
             per = (english + physics + chemistry + biology + urdu) * 100 / 500 ;
             gp = per / 10.0;
            total = english + physics + chemistry + biology + urdu;
         printf("Your aggregate marks out of 500 are :- %d\n", total);
        printf("Your Grade Points out of 10 are :- %2f\n", gp);
        if(per >= 70)
        {
            printf("FIRST DIVISION\n");
        }
else 
    if(per >= 50 && per < 70)
    {
      printf("SECOND DIVISION\n");
    }
else 
            if(per >=40 && per <= 50)
            {
                     printf("THIRD DIVIDION\n");

            }
else 
         printf("FAIL!\n");
return 0;
}
