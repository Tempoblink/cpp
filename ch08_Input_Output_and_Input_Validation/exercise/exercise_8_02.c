#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int num = 0;
    printf("Enter some text: \n");
    while ((ch = getchar()) != EOF) {
        num++;
        if (ch < 65 && ch != '\n' && ch != '\t' && !isnumber(ch)) {
            putchar('"');
            putchar('^');
            putchar(ch + 64);
            putchar('"');
            printf(" %d ", ch);
        }else if (ch == '\n' || ch == '\t') {
            putchar('"');
            switch (ch) {
                case '\t':
                    printf("\\t");
                    break;
                case '\n':
                    printf("\\n");
                    break;
                default:
                    break;
            }
            putchar('"');
            printf(" %d", ch);
        }else {
            putchar('"');
            putchar(ch);
            putchar('"');
            printf(" %d ", ch);
        }
        if (num % 10 == 0) {
            putchar('\n');
        }
    }
    return 0;
}
