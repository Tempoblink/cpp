/* binary.c -- 以二进制形式打印制整数 */

#include <stdio.h>

void to_binary_n(unsigned long n, int p);

int main(void) {
    unsigned long number;
    int p;
    printf("Enter two integer (q to quit):\n");
    while ((scanf("%lu", &number) == 1) && (scanf("%d", &p) == 1)) {
        if (p <2 || p > 10) {
            printf("Error input\n");
            printf("Enter an integer(q to quit):\n");
            continue;
        }
        printf("Binary equivalent: ");
        to_binary_n(number, p);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}

void to_binary_n(unsigned long n, int p) {
    int r;
    char ch = p + '0' - 1;
    r = n % p;
    if (n >= p) {
        to_binary_n(n / p, p);
    }
    putchar(r == 0 ? '0' : ch);
    return;
}
