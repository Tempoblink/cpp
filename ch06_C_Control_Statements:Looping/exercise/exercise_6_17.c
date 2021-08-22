#include <stdio.h>
#define S1 8/100

int Chuckie(int year) {
    int sum = 100;
    for (int i = 1; i <= year; i++) {
        sum *= (1 + S1);
        sum -= 10;
    }
    return sum;
}

int main(void) {
    int i = 0, sum;
    do {
        i++;
        sum = Chuckie(i);
    }while (sum > 0);
    printf("year: %d\n", i);
    return 0;
}
