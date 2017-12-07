#include<stdio.h>
#include<string.h>
void home();
void newsFeed();
void profile();
void notifications();
void settings();
void logOut();

void main(void)
{
   char username[]="hamid",password[]="password",p[15],u[15];
   int n=1,a,b,X=1;
   int choice,num;
   printf("\nEnter USER ID and PASSWORD below (You have only three chances to enter)\n\n\n");
   while(n<=3)
   {
     
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tUSERNAME: ");
      scanf("%s",u);
      printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPASSWORD: ");
      scanf("%s",p);
      a=strcmp(u,username);
      b=strcmp(p,password);
      if(a==0&&b==0)
      {
        
        printf("\n1. HOME\t\t2. NEWSFEED\t\t3. PROFILE\t\t4. NOTIFICATIONS\t\t5. SETTINGS\t\t6. LOG OUT\n\n");

    while(X)
    {
        printf("\nEnter your choice: ");
        num = scanf("%d",&choice);
        switch(num)
        {
            case '1':
                home();
                break;
            case '2':
                newsFeed();
                break;
            case '3':
                profile();
                break;
            case '4':
                notifications();
                break;
            case '5':
                settings();
                break;
            case '6':
                logOut();
                break;
            default :
                printf("\nOops! Incorrect Choice\n\n");
                break;
        }
        
    }  
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

void home()
{
    printf("\t\t\tWelcome to Home page of our website\n\n");

}

void newsFeed()
{

}
   
void profile()
{

}

void notifications()
{

}

void settings()
{

}

void logOut()
{
    printf("\t\t\t\tYou have loged out succesfully\n\n\n");
    
}