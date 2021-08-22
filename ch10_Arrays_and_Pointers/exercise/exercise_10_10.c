#include <stdio.h>
#define COLS 5

void add_data(int cols, double source1[cols], double source2[cols], double target[cols]);

void printf_data(int cols, double array[cols]);

int main(void) {
    double source1[COLS] = {1, 2, 3, 4, 5};
    double source2[COLS] = {5, 4, 3 ,2, 1};
    double target[COLS];
    add_data(COLS, source1, source2, target);
    printf("The source1: \n");
    printf_data(COLS, source1);
    printf("The source2: \n");
    printf_data(COLS, source2);
    printf("The target: \n");
    printf_data(COLS, target);
    return 0;
}

void add_data(int cols, double source1[cols], double source2[cols], double target[cols]) {
    int i;
    for (i = 0; i < cols; i++) {
        target[i] = source1[i] + source2[i];
    }
}

void printf_data(int cols, double array[cols]) {
    int i;
    for (i = 0; i < cols; i++) {
        printf("%5.1f", array[i]);
    }
    putchar('\n');
}

