#include <stdio.h>
#include <math.h>
int main() 
{
    float p, q, r, sp, area;
    printf("Enter the sides of a triangle:\t ");
    scanf("%f %f %f", &p, &q, &r);
    sp = (p + q + r) / 2; 
    area = sqrt(sp * (sp - p) * (sp - q) * (sp - r)); 
    printf("Calculated area of triangle is %6.2f square units\n", area);
    return 0;
}