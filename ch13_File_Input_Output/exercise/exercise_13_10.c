#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 20

char * s_gets(char *st, int n);

int main(void) {
    char filename[20];
    FILE *fp;
    long settle;
    char ch;
    printf("Enter file name: ");
    while (s_gets(filename, SLEN) != NULL & filename[0] != '\0') {
        if ((fp = fopen(filename, "r")) == NULL) {
            fprintf(stderr, "Can't open %s.\n", filename);
            exit(EXIT_FAILURE);
        }else {
            printf("Enter the settle(-1 to quit): ");
            while ((scanf("%ld", &settle)) == 1 && settle > -1) {
                fseek(fp, settle, SEEK_SET);
                while ((ch = getc(fp)) != EOF && ch != '\n') {
                    putc(ch, stdout);
                }
                printf("\nEnter the settle(-1 to quit): ");
            }
            while (getchar() != '\n') {
                continue;
            }
            printf("Enter file name: ");
        }
    }
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
