#include <stdio.h>

int main(void) {
    char point;
    printf("Enter a char: ");
    scanf("%c", &point);
    for (int i = 0; i <= point - 'A'; i++) {
        for (int j = point - 'A'; j > i; j--) {
            printf(" ");
        }
        for (char up = 'A'; up<= 'A' + i; up++) {
            printf("%c", up);
        }
        for (char down = 'A' + i - 1 ; down >= 'A'; down--) {
            printf("%c", down);
        }
        printf("\n");
    }
    return 0;
}
