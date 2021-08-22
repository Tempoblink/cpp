#include <stdio.h>

double cmp(double a, double b) {
    double c = (a - b) / (a * b);
    return c;
}

int main(void) {
    double x, y;
    printf("Enter two float: ");
    while ((scanf("%lf%lf", &x, &y) == 2)) {
        printf("%.2f\n", cmp(x, y));
        printf("Enter next two float(q to quit): ");
    }
    printf("Done!\n");
    return 0;
}
