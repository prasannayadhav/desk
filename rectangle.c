#include <stdio.h>
void main()
{
    float l, b, area;
    printf("enter length of rectangle:");
    scanf("%f", &l);
    printf("enter breadth of rectangle:");
    scanf("%f", &b);
    area = (l & b);
    printf("area of rectangle: %f\n", area);
}