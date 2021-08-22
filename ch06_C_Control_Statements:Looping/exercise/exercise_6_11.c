#include <stdio.h>
#define SIZE 10

int main(void) {
    int num[SIZE];
    printf("Enter eight numbers: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 7; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
