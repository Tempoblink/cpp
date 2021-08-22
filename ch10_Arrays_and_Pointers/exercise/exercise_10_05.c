#include <stdio.h>
#define SIZE 10

double range_in_array(double *array, int n) {
    double larger = *array;
    double small = *array;
    double range;
    for (int i = 1; i < n; i++) {
        if (*(array + i) > larger) {
            larger = *(array + i);
        }
        if (*(array + i) < small) {
            small = *(array + i);
        }
    }
    range = larger - small;
    return range;
    
}

int main(void) {
    double source[SIZE] = {
        5.2, 4.3, 6.1, 7.4, 3.3, 1.8, 1.1, 7.9, 5.2, 2.9
    };
    double num;
    num = range_in_array(source, SIZE);
    printf("The larger_in_source is %.1f\n", num);
    return 0;
}
