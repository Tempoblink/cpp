#include <stdio.h>

int main(void) {
    int num, breakpoint;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", num);
    breakpoint = num + 10;
    while (num++ < breakpoint) {
        printf("%d\n", num);
    }
    return 0;
}
