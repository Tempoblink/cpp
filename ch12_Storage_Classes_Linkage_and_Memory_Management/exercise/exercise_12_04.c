#include <stdio.h>

int function_count = 0;
void test_function(int);

int main(void) {
    int times;
    printf("Enter the function times your want to run: ");
    while ((scanf("%d", &times)) == 1) {
        test_function(times);
        printf("Enter times(q to quit): ");
    }
    printf("Your have run %d function.\n", function_count);
    printf("Bye.\n");
    return 0;
}

void test_function(int times) {
    for (int i = 0; i < times; i++) {
        printf("Loop %d in function.\n", i);
    }
    ++function_count;
}
