#include <stdio.h>

void chline(char ch, int cols, int rows) {
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
    chline(ch, j, i);
    return 0;
}
