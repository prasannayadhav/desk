/*
Double Data Type

A Double data type in c is used to store decimal numbers
(numbers with floating point values) with double precision.
It is used to define numeric values which hold numbers with decimal values in c.

The double data type is basically a precision sort of data type
that is capable of holding 64 bits of decimal numbers or floating points.
since double has more precision as compared to that float then it is much more
obvious that it occupies twice the memory occupied by the floating-point type.
It can easily accomodate about 16 to 17 digits after or before a decimal point.

Range:1.7E-308 to 1.7E+308
Size: 8 bytes
Format specifier: %1f

syntax of Double

The variable can be declared as double precision floating point using the double keyword:

double var_name;
*/

// c program to demonstrate
// use of double data type

#include <stdio.h>
int main()
{
    double a = 123123123.00;
    double b = 12.293123;
    double c = 2312312312.123123;
    printf("%lf\n", a);

    printf("%lf\n", b);

    printf("%lf\n", c);

    return 0;
}