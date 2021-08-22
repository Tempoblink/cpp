#include <stdio.h>

void cube(double n) {
    printf("%.2f\n", n*n*n);
}

int main(void) {
    double num;
    printf("Enter a double: ");
    scanf("%lf", &num);
    cube(num);
    return 0;
}
