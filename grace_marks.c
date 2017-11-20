#include<stdio.h>

void main()
{
    int class,sub_fail,grace;

    printf("enter class obtained by the student and number of subjects he failed in: \n");
        scanf("%d%d",&class,&sub_fail);
    switch(class)
    {
        case 1:
        switch(sub_fail)
        {
            case 1:
            case 2:
            case 3:
            grace = 5;
            break;

            default :
            grace = 0;
            break;
        }
        break;
        case 2:
            switch(sub_fail)
            {
                case 1:
                case 2:
                grace = 4;
                break;

                default :
                grace = 0;
                break;
            }
            break;
        case 3:
        switch(sub_fail)
        {
            case 1:
            grace = 5;
            break;
            default :
            grace = 0;
            break;
        }
        break;    
    }
    printf("Student will get %d grace marks as per subjct\n",grace);
}