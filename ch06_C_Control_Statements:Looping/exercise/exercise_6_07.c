#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void) {
    char ch[SIZE];
    printf("Enter a char: ");
    scanf("%s", ch);
    for (int i = (int)strlen(ch); i >= 0; i--) {
        printf("%c", ch[i-1]);
    }
    printf("\n");
    return 0;
}
