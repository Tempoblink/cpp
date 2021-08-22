#include <stdio.h>

double min(double x, double y);

int main(void) {
    double a, b, c;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    c = min(a, b);
    printf("%.2f and %.2f, the min is %.2f\n", a, b, c);
    return 0;
}

double min(double x, double y) {
    if (x < y) {
        return x;
    }else {
        return y;
    }
}
