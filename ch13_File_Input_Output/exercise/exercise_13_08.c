#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 20

char * s_gets(char *st, int n);
int cal_ch(char ch, FILE *fp);

int main(int argc, char *argv[]) {
    char ch;
    FILE *fp;
    int count;
    if (argc < 2) {
        fprintf(stderr, "Usage: %s char [filename] or printf.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    if (argc == 2) {
        char filename[SLEN];
        printf("Enter the filename: ");
        while (s_gets(filename, SLEN) != NULL && filename[0] != '\0') {
            if ((fp = fopen(filename, "r")) == NULL) {
                fprintf(stderr, "Cant't open %s.\n", filename);
                printf("Enter the filename: ");
                continue;
            }else {
                count = cal_ch(ch, fp);
                printf("The %s file has appear %d -%c\n", filename, count, ch);
                printf("Enter the filename: ");
            }
        }
    }
    if (argc == 3) {
        if ((fp = fopen(argv[2], "r")) == NULL) {
            fprintf(stderr, "Can't open %s.\n", argv[2]);
            exit(EXIT_FAILURE);
        }
        count = cal_ch(ch, fp);
        printf("The %s file has appear %d -%c\n", argv[2], count, ch);
    }
    fclose(fp);
    return 0;
}

char * s_gets(char *st, int n) {
    char *ret_val, *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find){
            *find = '\0';
        }else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

int cal_ch(char ch, FILE *fp) {
    char fch;
    int i = 0;
    while ((fch = getc(fp)) != EOF) {
        if (ch == fch) {
            i++;
        }
    }
    return i;
}

