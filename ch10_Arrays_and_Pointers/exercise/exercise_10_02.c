#include <stdio.h>

void copy_arr(double *target, double *source, int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source_start, double *source_end);
void print_array(double *array);

int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    printf(" source: ");
    print_array(source);
    printf("target1: ");
    print_array(target1);
    printf("target2: ");
    print_array(target2);
    printf("target3: ");
    print_array(target3);
    return 0;
}

void copy_arr(double *target, double *source, int n) {
    int i;
    for (i = 0; i < n; i++) {
        target[i] = source[i];
    }
    return;
}

void copy_ptr(double *target, double *source, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(target + i) = *(source + i);
    }
    return;
}

void copy_ptrs(double *target, double *source_start, double *source_end) {
    int i = 0;
    while (source_start < source_end) {
        *(target + i) = *(source_start++);
        i++;
    }
    return;
}

void print_array(double *array) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%f  ", *(array + i));
    }
    putchar('\n');
    return;
}
