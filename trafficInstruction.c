#include<stdio.h>
#include<stdlib.h>

void processColor(char c);
void checkTrafficLight(void);
void stopDriving(void);
void getReady(void);
void startDriving(void);
void trafficLightMalfunction(void);

int main(void)
{
    checkTrafficLight();
    return EXIT_SUCCESS;
}

void checkTrafficLight(void)
{
    printf("What color does the traffic light show?\n");
    printf("\n r=red\n y=yellow\n g=green\n\n Choice: ");
    char color;
    scanf("%c",&color);
    processColor(color);

}

void processColor(char color)
{
    switch(color)
    {
        case 'r':
            stopDriving();
            break;
        case 'y':
            getReady();
            break;
        case 'g':
            startDriving();
            break;
        default :
            trafficLightMalfunction();
            break;
    }
}

void stopDriving()
{
    printf("You must stop the car now\n");
    printf("Else you will be fined!");
}

void getReady()
{
    printf("Shift the gear into D but keep pressing the break pedal\n");
}

void startDriving()
{
    printf("Press the gas pedal, release the breaks, and proceed with caution!\n");
}

void trafficLightMalfunction()
{
    printf("This is an unrecognized color! Is there a malfunction?\n");
}
