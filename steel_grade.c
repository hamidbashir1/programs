#include <stdio.h>
int main()
{
    int hardness, strength;
    float carbon;

    printf("Enter the hardness of steel :- \n");
        scanf("%d", &hardness);

    printf("Enter the carbon content of steel :- \n");
        scanf("%f", &carbon);

    printf("Enter the Tensile strength of steel :- \n");
        scanf("%d", &strength);

    if (hardness > 50 && carbon < 0.7 && strength > 5600)
    {
        printf("Grade of your Steel is :- 10\n");
    }

    else 
        if (hardness > 50 && carbon < 0.7)
        {
            printf("Grade of your Steel is :- 9\n");
        }

    else 
        if (carbon < 0.7 && strength > 5600)
        {
            printf("Grade of your Steel is :- 8\n");
        }

    else 
        if (hardness > 50 && strength > 5600)
        {
            printf("Grade of your Steel is :- 7\n");
        }

    else 
        if (hardness > 50 || carbon < 0.7 || strength > 5600)
        {
            printf("Grade of your Steel is :- 6\n");
        }

    else
            printf("Grade of your Steel is :- 5\n");
            
    return 0;

}
