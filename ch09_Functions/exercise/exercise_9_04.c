#include <stdio.h>

double reci(double n) {
    return 1 / n;
}

double Harmonic(double x, double y) {
    double c;
    c = reci((reci(x) + reci(y)) / 2);
    return c;
}

int main(void) {
    double a, b, c;
    printf("Enter two double numbers: ");
    scanf("%lf %lf", &a, &b);
    c = Harmonic(a, b);
    printf("The Harmonic of %.3f and %.3f is %.3f.\n", a, b, c);
    return 0;
}
