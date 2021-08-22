#include <stdio.h>
#define breakpoint '#'
#define limit_char 8

int main(void) {
    char ch;
    int i = 0;
    printf("Enter a text(# to quit): \n");
    while ((ch = getchar()) != breakpoint) {
        i++;
        putchar(ch+1);
        if ((i % 8) == 0) {
            putchar('\n');
        }
    }
    printf("\nDone\n");
    return 0;
}
