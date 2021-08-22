#include <stdio.h>

int main(void) {
    int ch[8];
    int i, j, num;
    for (i = 0; i < 8; i++) {
        for (j = 0, num = 1; j < i; j++) {
            num *= 2;
        }
        ch[i] = num;
    }
    i = 0;
    do {
        printf("%d\n", ch[i]);
        i++;
    }while (i < 8);
    return 0;
}
