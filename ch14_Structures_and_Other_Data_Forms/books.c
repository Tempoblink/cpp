//* book.c -- 一本书的图书目录 */

#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

char * s_gets(char *st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void) {
    struct book libray;
    printf("Please enter the book title.\n");
    s_gets(libray.title, MAXTITL);
    printf("Now enter the author.\n");
    s_gets(libray.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &libray.value);
    printf("%s by %s: $%.2f\n", libray.title, libray.author, libray.value);
    printf("%s: \"%s\"($%.2f)\n", libray.author, libray.author, libray.value);
    printf("Done.\n");
    return 0;
}

char * s_gets(char *st, int n) {
    char *ret_val, *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        }else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

