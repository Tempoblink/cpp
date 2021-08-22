#include <stdio.h>
#include <stdbool.h>
#define breakpoint '#'

int main(void) {
    char ch;
    bool prev_is = false;
    int sum = 0;
    printf("Enter a text(# to quit): \n");
    while ((ch = getchar()) != breakpoint) {
        if (ch == 'e') {
            prev_is = true;
        }
        if (ch == 'i' && prev_is) {
            sum++;
            prev_is = false;
        }
    }
    printf("sum: %d\n", sum);
    return 0;
}
