#include <stdio.h>
#define ROWS 3
#define COLS 5

void double_data(int rows, double (*source)[COLS]);

void printf_data(int rows, double (*source)[COLS]);

int main(void) {
    double source[ROWS][COLS] = {
        { 2,  4, 6, 8, 10},
        { 1,  3, 5, 7,  9},
        {12, 10, 8, 6,  4}
    };
    printf("The source: \n");
    printf_data(ROWS, source);
    printf("The target: \n");
    double_data(ROWS, source);
    printf_data(ROWS, source);
    return 0;
}

void double_data(int rows, double (*source)[COLS]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < COLS; j++) {
            source[i][j] *= 2;
        }
    }
}

void printf_data(int rows, double (*source)[COLS]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%5.1f", source[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}

