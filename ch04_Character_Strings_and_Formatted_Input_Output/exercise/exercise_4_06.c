#include <stdio.h>
#include <string.h>

int main(void) {
    char name[40], first[40];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your family name: ");
    scanf("%s", first);
    printf("%s %s\n", name, first);
    printf("%*d %*d\n", (int)strlen(name), (int)strlen(name), (int)strlen(first), (int)strlen(first));
    printf("%s %s\n", name, first);
    printf("%-*d %-*d\n", (int)strlen(name), (int)strlen(name), (int)strlen(first), (int)strlen(first));
    return 0;
}
