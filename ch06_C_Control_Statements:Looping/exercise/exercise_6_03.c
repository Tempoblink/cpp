#include <stdio.h>
#define LINE 6

int main(void) {
    int i;
    char ch;
    for (i = 0; i < LINE; i++) {
        for (ch = 'F'; ch >= 'F' - i; ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
