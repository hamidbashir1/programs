#include<stdio.h>
#include<stdlib.h>
void assessRoomCapacities(void);
void estimateWaitingVisitors(void);
void processData(void);
void generateReport(void);

    int room1,room2,room3;
    int visitors1,visitors2,visitors3;
    int totalAvailableSeats,totalWaitingVisitors;

int main()
{
    assessRoomCapacities();
    estimateWaitingVisitors();
    processData();
    generateReport(); 

return 0;
}
void assessRoomCapacities()
{
    printf("Enter seats left in room1: \n");
    scanf("%d",&room1);
    printf("Enter seats left in room2: \n");
    scanf("%d",&room2);
    printf("Enter seats left in room3: \n");
    scanf("%d",&room3);
    
}
void estimateWaitingVisitors()
{
    printf("Enter number of visitors waiting for room1: \n");
    scanf("%d",&visitors1);
    printf("Enter number of visitors waiting for room2: \n");
    scanf("%d",&visitors2);
    printf("Enter number of visitors waiting for room3: \n");
    scanf("%d",&visitors3);
}
void processData()
{
    totalAvailableSeats = room1 + room2 + room3;
    totalWaitingVisitors = visitors1 + visitors2 + visitors3;
}
void generateReport()
{
    printf("Overall there are still seats available (1 = YES, 0 = NO): %d\n",(totalAvailableSeats > totalWaitingVisitors));
    printf("Room1 can accept more visitors (1 = YES, 0 = NO): %d\n",(room1 > visitors1));
    printf("Room2 can accept more visitors (1 = YES, 0 = NO): %d\n",(room2 > visitors2));
    printf("Room3 can accept more visitors (1 = YES, 0 = NO): %d\n",(room3 > visitors3));
    printf("On average, there are %d visitors waiting per room\n",(visitors1 + visitors2 + visitors3)/3);
}