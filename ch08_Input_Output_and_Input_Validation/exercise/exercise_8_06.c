/* menuette.c -- 菜单程序 */

#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void) {
    char ch;
    ch = get_first();
    putchar(ch);
    putchar('\n');
    return 0;
}

char get_first(void) {
    int ch;
    do {
        ch = getchar();
    }while (isspace(ch));
    return ch;
}

