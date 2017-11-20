#include<stdio.h>
void areaperi(float,float *, float *);

int main()
{
    float area, perimeter,radius;

    printf("Enter radius of a circle:- \n");
        scanf("%f",&radius);
    
    areaperi(radius,&area,&perimeter);

    printf("Area =%f\n",area);
    printf("Perimeter =%f\n",perimeter);

  return 0;  
}

void areaperi(float r,float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}