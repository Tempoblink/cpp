#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int lower_sum, upper_sum;
    lower_sum = upper_sum = 0;
    while ((ch = getchar()) != EOF) {
        if (islower(ch)) {
            lower_sum++;
        }else if (isupper(ch)) {
            upper_sum++;
        }else {
            continue;
        }
    }
    printf("Lower: %d, Upper: %d\n", lower_sum, upper_sum);
    return 0;
}
