#include <stdio.h>

double add(int n) {
    double sum = 0;
    for (float i = 1.0; i <= n; i++) {
        printf("%.1f\n", i);
        sum += 1.0 / i;
    }
    return sum;
}

double div(int n) {
    double sum = 0;
    float alp = 1;
    for (float i = 1.0; i <= n; i++) {
        for (int j = 1; j <= (int)i; j++) {
            alp *= -1.0;
        }
        sum -= alp / i;
    }
    return sum;
}

int main(void) {
    int num;
    printf("Enter the limit: ");
    while ((scanf("%d", &num)) == 1 && num != 0) {
        printf("add_sum: %.6f\n", add(num));
        printf("add_div: %.6f\n", div(num));
        printf("Enter next limit(q to quit): ");
    }
    printf("Done\n");
    return 0;
}
