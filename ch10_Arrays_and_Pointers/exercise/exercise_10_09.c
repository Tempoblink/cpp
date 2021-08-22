#include <stdio.h>
#define ROWS 3
#define COLS 5

void copy_data(int rows, int cols, double target[rows][cols], double source[rows][cols]);

void printf_data(int rows, int cols, double array[rows][cols]);

int main(void) {
    double source[ROWS][COLS] = {
        { 2,  4, 6, 8, 10},
        { 1,  3, 5, 7,  9},
        {12, 10, 8, 6,  4}
    };
    double target[ROWS][COLS];
    copy_data(ROWS, COLS, target, source);
    printf("The source: \n");
    printf_data(ROWS, COLS, source);
    printf("The target: \n");
    printf_data(ROWS, COLS, target);
    return 0;
}

void copy_data(int rows, int cols, double target[rows][cols], double source[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(*(target + i) + j) = *(*(source + i) +j);
        }
    }
}

void printf_data(int rows, int cols, double array[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5.1f", array[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}

