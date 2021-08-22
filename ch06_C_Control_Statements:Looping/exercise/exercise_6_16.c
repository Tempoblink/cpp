#include <stdio.h>
#define S1 0.1
#define S2 0.05

int daphne(int year) {
    int sum;
    sum = 100 * S1 * year;
    return sum;
}

int deirdre(int year) {
    int sum = 100;
    for (int i = 1; i <= year; i++) {
        sum *= (1 + S2);
    }
    return (sum-100);
}

int main(void) {
    int i = 0;
    int a, b;
    do {
        i++;
        a = daphne(i);
        b = deirdre(i);
    }while (b < a);
    printf("When %d year, daphne: $%d, deirdre: $%d\n", i, a, b);
    return 0;
}
