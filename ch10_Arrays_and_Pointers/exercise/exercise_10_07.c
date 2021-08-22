#include <stdio.h>
#define ROWS 3
#define COLS 4

void copy_two(int (*target)[COLS], int (*source)[COLS], int rows);
void copt_ptr(int *target, int *source, int cols);
void print_array(int (*array)[COLS]);

int main(void) {
    int source[ROWS][COLS] = {
        { 2,  4, 6, 8},
        { 3,  5, 7, 9},
        {12, 10, 8, 6}
    };
    int target[ROWS][COLS];
    copy_two(target, source, ROWS);
    print_array(target);
    return 0;
}

void copy_two(int (*target)[COLS], int (*source)[COLS], int rows) {
    int i;
    for (i = 0; i < rows; i++) {
        copt_ptr(*(target + i), *(source + i),COLS);
    }
}

void copt_ptr(int *target, int *source, int cols) {
    int i;
    for (i = 0; i < cols; i++) {
        *(target + i) = *(source + i);
    }
}

void print_array(int (*array)[COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%2d ", *(*(array + i) + j));
        }
        putchar('\n');
    }
    putchar('\n');
    return;
}
