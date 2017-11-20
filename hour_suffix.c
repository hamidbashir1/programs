#include<stdio.h>

int main()
{
    int hr;

    for(hr = 0; hr < 24; hr++)
    {
        if(hr == 0) 
            printf("\n12 Midnight\n");
        if(hr > 0 && hr < 12)
            printf("\n%d AM\n",hr);
        if(hr == 12)
            printf("\n%d Noon\n",hr);
        if(hr > 12 && hr < 24 )
            printf("\n%d PM\n",hr);
    }
    return 0;
}