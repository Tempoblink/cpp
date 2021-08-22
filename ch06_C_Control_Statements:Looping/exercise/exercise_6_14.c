#include <stdio.h>
#define SIZE 8

void print_col(double a[SIZE]);

void add_all(double a[SIZE]) {
    double b[SIZE];
    int i, j, num;
    for (i = 0; i < SIZE; i++) {
        num = 0;
        for (j = 0; j <= i; j++) {
            num += a[j];
        }
        b[i] = num;
    }
    print_col(b);
}

void print_col(double a[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%8.3f", a[i]);
    }
    printf("\n");
}

int main(void) {
    double n[SIZE];
    printf("Enter eight numbers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &n[i]);
    }
    print_col(n);
    add_all(n);
    return 0;
}
