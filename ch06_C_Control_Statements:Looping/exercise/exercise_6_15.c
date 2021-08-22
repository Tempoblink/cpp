#include <stdio.h>
#include <string.h>
#define SIZE 10

void ftnirp(char a[SIZE]) {
    for (int i = (int)strlen(a) - 1; i > -1; i--) {
        printf("%c", a[i]);
    }
    printf("\n");
}

int main(void) {
    char ch[SIZE];
    int i = -1;
    printf("Enter a line char: ");
    do {
        i++;
        scanf("%c", &ch[i]);
    }while (ch[i] != '\n');
    ftnirp(ch);
    return 0;
}
