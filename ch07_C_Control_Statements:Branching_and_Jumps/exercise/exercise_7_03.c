#include <stdio.h>
#define ZERO 0

int main(void) {
    int num;
    int even = 0;
    int odd = 0;
    int even_sum = 0;
    int odd_sum = 0;
    printf("Enter some numbers(0 to quit): ");
    while (scanf("%d", &num) == 1) {
        if (num == 0) {
            break;
        }
        if (num % 2 == 0) {
            even++;
            even_sum += num;
        }
        if (num % 2 == 1) {
            odd++;
            odd_sum += num;
        }
        printf("Enter some numbers(0 to quit): ");
    }
    printf("even: %d, even_avg: %.3f\nodd: %d, odd_avg: %.3f\n",
            even, (float)even_sum / even, odd, (float)odd_sum / odd);
    return 0;
}
