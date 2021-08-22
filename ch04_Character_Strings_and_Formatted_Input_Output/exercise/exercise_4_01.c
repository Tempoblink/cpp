#include <stdio.h>

int main(void) {
    char name[40], first[40];
    printf("Enter your full name: ");
    scanf("%s %s", name, first);
    printf("Hello! %s %s\n", name, first);
    return 0;
}
