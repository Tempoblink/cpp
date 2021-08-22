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
        switch (ch) {
            case sec:
                num++;
                putchar(ring);
                break;
            case ring:
                num++;
                putchar(ring);
                putchar(ring);
                break;
            default:
                putchar(ch);
        }
    }
    printf("\n%d changes.\n", num);
    return 0;
}
