#include <stdio.h>
int main()
{
    int a = 20;
    int b = 20, d;
    d = a + b;
    printf("a+b = %d\n", a + b);
    d = a - b;
    printf("a-b = %d\n", a - b);
    d = a * b;
    printf("a*b = %d\n", a * b);
    d = a / b;
    printf("a/b = %d\n", a / b);
    d = a % b;
    printf("a%%b = %d\n", a % b);
    return 0;
}