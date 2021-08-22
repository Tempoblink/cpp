#include <stdio.h>

int main(void) {
    char a;
    printf("Enter a char: ");
    scanf("%c", &a);
    printf("The char is %c, and ASCII is %d\n", a, a);
    return 0;
}
