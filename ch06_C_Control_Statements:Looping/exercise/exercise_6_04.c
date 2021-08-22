#include <stdio.h>
#define LINE 6

int main(void) {
    int i,j;
    char ch = 'A';
    for (i = 0; i < LINE; i++) {
        for (j = 0 ; j <= i ; j++, ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
