// reducto.c –把文件压缩成原来的1/3！

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

char * s_gets(char *st, int n);
int main(void) {
    FILE *in, *out;
    int ch;
    char source[LEN];
    char name[LEN];
    int count = 0;
    printf("Enter the file name: ");
    s_gets(source, LEN);
    if ((in = fopen(source, "r")) == NULL) {
        fprintf(stderr, "I countn't open the file \"%s\"\n", source);
        exit(EXIT_FAILURE);
    }
    strncpy(name, source, LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while ((ch = getc(in)) != EOF) {
        if (count++ % 3 == 0) {
            putc(ch, out);
        }
    }
    if (fclose(in) != 0 || fclose(out) != 0) {
        fprintf(stderr, "Error in closing files\n");
    }
    return 0;
}

char * s_gets(char *st, int n) {
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        if ((find = strchr(st, '\n'))) {
            *find = '\0';
        }else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
