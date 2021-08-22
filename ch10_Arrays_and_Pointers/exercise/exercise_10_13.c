#include <stdio.h>
#define ROWS 3
#define COLS 5

void input_data(int rows, int cols, double array[rows][cols]);
void avg_data(int rows, int cols, double array[rows][cols]);
void larger_in_array(int rows, int cols, double array[rows][cols]);
void printf_array(int rows, int cols, double array[rows][cols]);

int main(void) {
    double source[ROWS][COLS];
    input_data(ROWS, COLS, source);
    printf_array(ROWS, COLS, source);
    avg_data(ROWS, COLS, source);
    larger_in_array(ROWS, COLS, source);
    return 0;
}

void input_data(int rows, int cols, double array[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        printf("Enter the %d rows data(5): \n", i);
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &array[i][j]);
        }
    }
}
void printf_array(int rows, int cols, double array[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5.1f", array[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}

void avg_data(int rows, int cols, double array[rows][cols]) {
    int i, j;
    double total, subtot;
    for (i = 0, total = 0; i < rows; i++) {
        for (j = 0, subtot = 0; j < cols; j++) {
            subtot += array[i][j];
        }
        total += subtot;
        printf("The average of %d row is %.1f\n", i, subtot / cols);
    }
    printf("The average of array is %.1f\n", total / (rows * cols));
}

void larger_in_array(int rows, int cols, double array[rows][cols]) {
    double larger = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > larger){
                larger = array[i][j];
            }
        }
    }
    printf("The larger in array is %.1f\n", larger);
}

