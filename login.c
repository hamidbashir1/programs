#include<stdio.h>
#include<string.h>
void main()
{
   char username[]="hamid",password[]="password",p[15],u[15];
   int n=1,a,b;
   printf("\nEnter USER ID and PASSWORD below (You have only three chances to enter)\n\n\n");
   while(n<=3)
   {
     
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tUSERNAME: ");
      scanf("%s",u);
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tPASSWORD: ");
      scanf("%s",p);
      a=strcmp(u,username);
      b=strcmp(p,password);
      if(a==0&&b==0)
      {
         printf("\nYou have logged in successfully.");
         break;
      }
      else
      {
         printf("\nWrong PASSWORD and/or USER ID. Now you have % d more chance/s.",3-n);
      }
      
      n++;
   }
   if(n==4)
      printf("\nYou can't log in.");
      
}
   