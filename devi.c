#include<stdio.h>
int main()
{
    int a=10;
    int b=-10;
    int c=66u;
    int d=777777L;
    printf("integer value with positive value: %d\n",a );
    printf("integer value with negative value: %d\n",b);
    printf("integer value with an unsigned int value:%u\n",c);
    printf("integer value with long int value:%ld", d);
    return 0;
}