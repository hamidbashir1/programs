#include<stdio.h>
#include "areaperi.h"
int main()
{
    float rad,area,x,y,z;
    double cir_ar,cir_peri,sqr_ar,sqr_peri,tri_ar,tri_peri;
    
    printf("Enter the radius of the circle:\n");
        scanf("%f",&rad);
    printf("Enter the side of the square:\n");
        scanf("%f",&area);
    printf("Enter the sides of the triangle:\n");
        scanf("%f%f%f",&x,&y,&z);
    if(x+y>z && y+z>z && x+z >y)
    {
        
        tri_peri = TRI_PERI(x,y,z);
        printf("\nTriangle :- ");
        printf("\nArea :%lf \nPerimeter : %f\n",tri_ar,tri_peri);
    }
    else
        printf("The triangle you entered is invalid!\n");
        cir_ar = CIR_AREA(rad);
        cir_peri = CIR_PERI(rad);
        sqr_ar = SQR_AREA(area);
        sqr_peri = SQR_PERI(area);
        printf("\nCircle :- ");
        printf("\nArea :%f \nPerimeter : %f\n",cir_ar,cir_peri);
        printf("\nSquare :- ");
        printf("\nArea :%f \nPerimeter : %f\n",sqr_ar,sqr_peri);
    return 0;

}
