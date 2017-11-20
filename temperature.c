#include<stdio.h>
int main()
{
	int fahrenheit,celsius = 0;
	printf("Enter the temperature of City in Fahrenheit :- \n");
	scanf("%d",&fahrenheit);
	celsius  = (fahrenheit - 32) * 5/9 ;
	printf("Temperature after converting Fahrenheit into Celsius is :- %d\n",celsius);
	return 0;
}