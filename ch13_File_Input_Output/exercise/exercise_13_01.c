/* count.c -- 使用标准 I/O */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 20

char * s_gets(char *st, int n);

int main(void) {
    int ch;
    char filename[SLEN];
    FILE *fp;
    unsigned long count = 0;
    printf("Enter the file name: ");
    s_gets(filename, SLEN);
    if ((fp = fopen(filename, "r")) == NULL) {
        printf("Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", filename, count);
    return 0;
}

char * s_gets(char *st, int n) {
    char *ret_val;
    char *find;
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
