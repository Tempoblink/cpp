#include <stdio.h>

void chline(char ch, int rows, int cols) {
    for (int a = 0; a < rows; a++) {
        for (int b = 0; b < cols;  b++) {
            putchar(ch);
        }
        putchar('\n');
    }
    return;
}

int main(void) {
    char ch;
    int i, j;
    printf("Enter a char: ");
    ch = getchar();
    printf("Enter rows and cols: ");
    scanf("%d %d", &i, &j);
    chline(ch, i, j);
    return 0;
}
