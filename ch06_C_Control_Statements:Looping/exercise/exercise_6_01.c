#include <stdio.h>
#define SIZE 26

int main(void) {
    int i;
    char a;
    char alph[SIZE];
    for (i = 0, a = 'a'; i < SIZE; i++, a++) {
        alph[i] = a;
        printf("%c", alph[i]);
    }
    printf("\n");
    return 0;
}
