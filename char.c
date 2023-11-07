#include <stdio.h>
int main()
{
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);
    printf("the size of int is %d\n",size_of_int);
    printf("the size of char is %d\n",size_of_int);
    printf("the size of float is %d\n",size_of_float);
    printf("the size of double is %d",size_of_double);
    return 0;
}