#include <stdio.h>
#define SIZE 7

void copy_ptr(double *target, double *source, int n);
void print_array(double *array);

int main(void) {
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];
    copy_ptr(target, source, 3);
    print_array(target);
    return 0;
}


void copy_ptr(double *target, double *source, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(target + i) = *(source + i + n);
    }
    return;
}

void print_array(double *array) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("%.1f  ", *(array + i));
    }
    putchar('\n');
    return;
}
