#include <stdio.h>

int square(int a) {
    int num;
    num = a * a;
    return num;
}

int add_all(int down, int up) {
    int num;
    for ( ; down <= up; down++) {
        num += square(down);
    }
    return num;
}

int main(void) {
    int down, up;
    printf("Enter lower and upper integer limits: ");
    while (scanf("%d%d", &down, &up) == 2 && up < down) {
        printf("The sums of the squares from %d to %d is %d\n", square(down), square(up), add_all(down, up));
        printf("Enter next set of limits: ");
    }
    printf("Done\n");
    return 0;
}
