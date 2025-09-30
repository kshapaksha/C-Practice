#include <stdio.h>
int main() 
{
    int age;
    float ageInSec;
    printf("What is your age (years)?\t ");
    scanf("%d", &age);
    ageInSec = 3.156E7 * age; 
    printf("Your age in seconds is %5.2E", ageInSec);
    return 0;
}