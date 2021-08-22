/* addemup.c -- 几种常见的语句 */

#include <stdio.h>

int main(void) {
    int count, sum, breakpoint;
    count = 0;
    sum = 0;
    printf("The days: ");
    scanf("%d", &breakpoint);
    while (count++ < breakpoint) {
        sum = sum + count;
    }
    printf("sum = $%d\n", sum);
    return 0;
}
