#include <stdio.h>
#define W_2_D 7
int main(void) {
    int num, week, day;
    printf("Enter the days: ");
    scanf("%d", &num);
    while (num > 0) {
        week = num / W_2_D;
        day = num % W_2_D;
        printf("%d days are %d weeks, %d days\n", num, week, day);
        printf("Next days: ");
        scanf("%d", &num);
    }
    printf("Done!\n");
    return 0;
}
