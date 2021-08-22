#include <stdio.h>

void larger_of(double *x, double *y) {
    if (*x < *y) {
        *x = *y;
    }else {
        *y = *x;
    }
    return;
}

int main(void) {
    double x, y;
    printf("Enter two double numbers: ");
    scanf("%lf %lf", &x, &y);
    larger_of(&x, &y);
    printf("Now x: %f, y: %f\n", x, y);
    return 0;
}
