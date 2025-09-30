#include <stdio.h>
int main() 
{
    float u,v,acc,time;
    printf("Enter the value of initial velocity in m/s:\t");
    scanf("%f",&u);
    printf("Enter the amount of acceleration:\t");
    scanf("%f",&acc);
    printf("Enter the time in sec:\t");
    scanf("%f",&time);
    v=u + acc * time; 
    printf("Velocity after %6.2f sec is %6.2f m/s\n", time, v);
    return 0;
}