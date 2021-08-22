#include <stdio.h>
#include <ctype.h>
#define sec '.'
#define ring '!'
#define breakpoint '#'

int main(void) {
    char ch;
    int num = 0;
    printf("Enter a text(# to quit): \n");
    while ((ch = getchar()) != breakpoint) {
        if (ch == sec) {
            num++;
            putchar(ring);
            continue;
        }
        else if (ch == ring) {
            num++;
            putchar(ring);
            putchar(ring);
            continue;
        }else {
            putchar(ch);
        }
    }
    printf("\n%d changes.\n", num);
    return 0;
}
