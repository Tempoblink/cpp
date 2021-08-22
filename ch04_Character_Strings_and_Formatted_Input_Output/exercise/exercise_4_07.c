#include <stdio.h>
#include <float.h>

int main(void) {
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("double = %.6f float = %.6f\n", a, b);
    printf("double = %.12f float = %.12f\n", a, b);
    printf("double = %.16f float = %.16f\n", a, b);
    printf("FLT_DIG = %d DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    return 0;
}
