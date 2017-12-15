#include <stdio.h>
#include <time.h> //for sleep() function
 
int main()
{
    int hour, minute, second;
     
    hour=minute=second=0;
 
    while(1)
    {
    
         
        //print time in HH : MM : SS format
        
        printf("\n\n%02d : %02d : %02d \n\n",hour,minute,second);
       
         
         //clear output buffer in gcc
        fflush(stdout);
         
         //increase second
        second++;
 
        //update hour, minute and second
        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
         
        break;
    }
 
    return 0;
}