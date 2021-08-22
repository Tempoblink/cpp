#include <stdio.h>
#define SIZE 10

void sort_array(double *array, int n) {
    double temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(array + i) <  *(array + i + 1)) {
                temp = *(array + i + 1);
                *(array + i + 1) = *(array + i);
                *(array + i) = *array;
            }
        }
    }
}

void print_array(double *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.1f ", *(array + i));
    }
    putchar('\n');
}

int main(void) {
    double source[SIZE] = {
        5.2, 4.3, 6.1, 7.4, 3.3, 1.8, 1.1, 7.9, 5.2, 2.9
    };
    sort_array(source, SIZE);
    printf("The sort array: ");
    print_array(source, SIZE);
    return 0;
}
