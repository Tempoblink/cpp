#include <stdio.h>
#define SIZE 10

int larger_in_array(int *array, int n) {
    int larger = *(array);
    for (int i = 1; i < n; i++) {
        if (*(array + i) > larger) {
            larger = *(array + i);
        }
    }
    return larger;
    
}

int main(void) {
    int source[SIZE] = {
        5, 4, 6, 7, 3, 1, 1, 7, 5, 2
    };
    int num;
    num = larger_in_array(source, SIZE);
    printf("The larger_in_source is %d\n", num);
    return 0;
}
