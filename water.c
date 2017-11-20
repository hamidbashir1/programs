#include<stdio.h>
int main()
{
    int boil =100,freez = 0,kelvinBoil,fahrenheitBoil,kelvinFreez,fahrenheitFreez;
    kelvinBoil =  boil + 273;
    fahrenheitBoil = (boil * 9)/5 + 32;
    kelvinFreez = freez + 273;
    fahrenheitFreez = (freez * 9)/5 + 32;
    printf("\nBoiling Point of water in kelvin is:-- %d\n",kelvinBoil);
    printf("\nBoiling Point of water in Fahrenheit is:-- %d\n",fahrenheitBoil);
    printf("\nFreezing Point of water in Kelvin is:-- %d\n",kelvinFreez);
    printf("\nFreezing Point of water in Fahrenheit is:-- %d\n",fahrenheitFreez);
return 0;
}