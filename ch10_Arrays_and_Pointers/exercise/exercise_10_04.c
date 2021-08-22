#include <stdio.h>
#define SIZE 10

double larger_in_array(double *array, int n) {
    double larger = *(array);
    for (int i = 1; i < n; i++) {
        if (*(array + i) > larger) {
            larger = *(array + i);
        }
    }
    return larger;
    
}

int main(void) {
    double source[SIZE] = {
        5.2, 4.3, 6.1, 7.4, 3.3, 1.8, 1.1, 7.9, 5.2, 2.9
    };
    double num;
    num = larger_in_array(source, SIZE);
    printf("The larger_in_source is %.1f\n", num);
    return 0;
}
