#include <stdio.h>

int main(void) {
    int down, up;
    printf("Enter the down: ");
    scanf("%d", &down);
    printf("Enter the up: ");
    scanf("%d", &up);
    for ( ; down <= up; down++) {
        printf("%d ,%d, %d\n", down, down*down, down*down*down);
    }
    return 0;
}
