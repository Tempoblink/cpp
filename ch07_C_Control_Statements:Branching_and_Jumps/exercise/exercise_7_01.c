#include <stdio.h>
#define SPACE ' '
#define LINE '\n'

int main(void) {
    char ch;
    int space = 0;
    int line = 0;
    int other = 0;
    printf("Enter a text(# to quit): \n");
    while ((ch = getchar()) != '#') {
        if (ch == SPACE) {
            space++;
            continue;
        }else if (ch == LINE) {
            line++;
            continue;
        }else {
            other++;
            continue;
        }
        printf("Enter a text(# to quit): \n");
    }
    printf("space: %d, line: %d, other: %d\n", space, line, other);
    printf("Done\n");
    return 0;
}
