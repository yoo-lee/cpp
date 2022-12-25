#include <stdio.h>
#include <math.h>

int main(void)
{
    float float_n = 8;
    printf( "%f\n", round(3.25) );
    printf( "%f\n", round(-3.25) );
    printf( "%f\n", round(0.0) );
    printf( "%f\n", round(float_n(1 << 8)));
}