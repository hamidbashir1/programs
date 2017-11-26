#include<stdio.h>
#include<stdlib.h>

void checkTrafficLight(void);
void processColor(char);

int main(void)
{
    checkTrafficLight();
    return EXIT_SUCCESS;
}

void checkTrafficLight()
{
    printf("What color does the traffic light show(r=red,y=yellow,g=green): ");
    char color;
    scanf("%c",&color);
    processColor(color);
}

void processColor(char c)
{
    if((c=='r')||(c=='R'))
        printf("The traffic light is RED\n");
    else 
        if((c=='y')||(c=='Y'))
            printf("The traffic light is YELLOW\n");
        else
            if((c=='g')||(c=='G'))
                printf("The traffic light is GREEN\n");
            else
                printf("You entered an unrecognized color. Try again.\n");


}