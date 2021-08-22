#include <stdio.h>
#define S_PER_M 60

int main(void) {
    int num, min, hour;
    printf("Enter the minutes: ");
    scanf("%d", &num);
    while (num > 0) {
        min = num % S_PER_M;
        hour = num / S_PER_M;
        printf("%d:%d\n", hour, min);
        printf("the next minutes: ");
        scanf("%d", &num);
    }
    printf("Done!\n");
    return 0;
}
