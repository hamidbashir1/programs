#include<stdio.h>
#include<stdlib.h>
 
 //Function Prtotypes
 int calculateTotalPointsMade(int q1, int q2, int q3, int q4);
 float calculateAveragePoints(int q1, int q2, int q3, int q4);
 float twoPointsPerformance(int totalshots, int shotsMade);
 float threePointsPerformance(int totalShots, int shotsMade);

void displayStatistics(int totpts, int tot2pts, int tot3pts, float avgQtr, float twoPts, float threepts);
    int totalShots;
int main()
{
        //Variables declarations
        int twoPointQ1;         //the number of two-shots made in quarter1
        int threepointQ1;       //the number of three-point shots made in quarter1
        int totalShotsQ1;       //total number of shots made in quarter1

        int twoPointQ2;         //the number of two-shots made in quarter2
        int threepointQ2;       //the number of three-point shots made in quarter2
        int totalShotsQ2;       //total number of shots made in quarter2

        int twoPointQ3;         //the number of two-shots made in quarter3
        int threepointQ3;       //the number of three-point shots made in quarter3
        int totalShotsQ3;       //total number of shots made in quarter3

        int twoPointQ4;         //the number of two-shots made in quarter4
        int threepointQ4;       //the number of three-point shots made in quarter4
        int totalShotsQ4;       //total number of shots made in quarter4
        

    printf("Enter the number of shots in the 1st quarter: ");
    scanf("%d",&totalShotsQ1);
    printf("Enter the number of 2-point shots made in the 1st quarter: ");
    scanf("%d",&twoPointQ1);
    printf("Enter the number of 3-point shots made in the 1st quarter: ");
    scanf("%d",&twoPointQ1);

    printf("Enter the number of shots in the 2nd quarter: ");
    scanf("%d",&totalShotsQ2);
    printf("Enter the number of 2-point shots made in the 2nd quarter: ");
    scanf("%d",&twoPointQ2);
    printf("Enter the number of 3-point shots made in the 2nd quarter: ");
    scanf("%d",&twoPointQ2);

    printf("Enter the number of shots in the 3rd quarter: ");
    scanf("%d",&totalShotsQ3);
    printf("Enter the number of 2-point shots made in the 3rd quarter: ");
    scanf("%d",&twoPointQ3);
    printf("Enter the number of 3-point shots made in the 3rd quarter: ");
    scanf("%d",&twoPointQ3);

    printf("Enter the number of shots in the 4th quarter: ");
    scanf("%d",&totalShotsQ4);
    printf("Enter the number of 2-point shots made in the 4th quarter: ");
    scanf("%d",&twoPointQ4);
    printf("Enter the number of 3-point shots made in the 4th quarter: ");
    scanf("%d",&twoPointQ4);

            /*--------------------CALCULATE STATISTICS--------------------*/

    int totalPoints = calculateTotalPointsMade(totalShotsQ1,totalShotsQ2,totalShotsQ3,totalShotsQ4);
    int total2Points = calculateTotalPointsMade(twoPointQ1,twoPointQ2,twoPointQ3,twoPointQ4);
    int total3points = calculateTotalPointsMade(threepointQ1,threepointQ2,threepointQ3,threepointQ4);

    float averagerPerQuarter = calculateAveragePoints(totalShotsQ1,totalShotsQ2,totalShotsQ3,totalShotsQ4);
    float twoPoints = twoPointsPerformance(totalPoints,total2Points);
    float threePoints = threePointsPerformance(totalPoints,total3points);

    void displayStatistics(int totalPoints,int total2Points,int total3points,float averagerPerQuarter,float twoPoints,float threePoints);

    return EXIT_SUCCESS;

}

                /*-------------------------FUNCTIO DEFINITIONS-------------------------*/
    
    int calculateTotalPointsMade(int q1, int q2, int q3, int q4)
    {
        double sum = q1 + q2 + q3 + q4;
        return sum;
    }

    float calculateAveragePoints(int q1, int q2, int q3, int q4)
    {
        float average = (q1 + q2 + q3 + q4)/4.0;
        return average;
    }

    float twoPointsPerformance(int totalshots, int shotsMade)
    {
        float performance = ((float)shotsMade/(float)totalShots)*100.0;
        return performance;
    }

    float threePointsPerformance(int totalShots, int shotsMade)
    {
        float performance = ((float)shotsMade/(float)totalShots)*100.0;
        return performance;

    }