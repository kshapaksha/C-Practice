#include<stdio.h>
int main()  
{ 
    float Celsius,Fahrenheit;
    printf("Temperature in Fahrenheit\t");
    scanf("%f",&Fahrenheit);
    Celsius=5.0/9.0*(Fahrenheit-32);
    printf("Temperature in Celsius is %6.2f",Celsius);
    return 0;
}
