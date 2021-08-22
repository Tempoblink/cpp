#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define BUFSIZE 4028
#define SLEN 20

char * s_gets(char *st, int n);
void file_copy(FILE *source, FILE *target);

int main(void) {
    FILE *source, *target;
    char file_in[SLEN], file_out[SLEN];
    char ch;
    printf("Enter the target filename: ");
    s_gets(file_out, SLEN);
    if ((target = fopen(file_out, "a+")) == NULL) {
        fprintf(stderr, "Can't open %s\n", file_out);
        exit(EXIT_FAILURE);
    }
    printf("Enter the source filename: ");
    s_gets(file_in, SLEN);
    if (strcmp(file_in, file_out) == 0) {
        fprintf(stderr, "Can't copy file to itself\n");
    }else if ((source = fopen(file_in,"r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", file_in);
        exit(EXIT_FAILURE);
    }
    file_copy(source, target);
    if (ferror(source) != 0) {
        fprintf(stderr, "Error in reading file %s\n", file_in);
    }
    if (ferror(target) != 0) {
        fprintf(stderr, "Error in writing file %s\n", file_out);
    }
    fclose(source);
    printf("File %s appended.\n", file_out);
    rewind(target);
    printf("%s contents:\n", file_out);
    while ((ch = getc(target)) != EOF) {
        putchar(ch);
    }
    puts("Done dislpaying.");
    fclose(target);
    return 0;
}

char *s_gets(char *st, int n) {
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

void file_copy(FILE *source, FILE *target) {
    char ch;
    while ((ch = getc(source)) != EOF) {
        putc(ch, target);
    }
}
