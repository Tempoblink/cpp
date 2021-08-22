#include <stdio.h>

int division(int n, int m) {
    int num;
    num = n % m;
    return num;
}

int main(void) {
    int first, second;
    printf("This program computers moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second);
    printf("Now enter the first operand: ");
    scanf("%d", &first);
    while (first > 0) {
        printf("%d %% %d is %d\n", first, second, division(first, second));
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &first);
    }
    printf("bye\n");
    return 0;
}
