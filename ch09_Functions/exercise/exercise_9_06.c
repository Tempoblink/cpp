#include <stdio.h>

void change(double *x, double *y) {
    double temp;
    if ( *x > *y) {
        temp = *x;
        *x = *y;
        *y =temp;
    }
    return;
}

void sort(double *a, double *b, double *c) {
    change(a, b);
    change(a, c);
    change(b, c);
    return;
}

int main(void) {
    double a, b, c;
    printf("Enter 3 double numbers: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    sort(&a, &b, &c);
    printf("Now: %.3f %.3f %.3f\n", a, b, c);
    return 0;
}
