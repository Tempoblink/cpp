#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    if (argc < 1) {
        printf("Error.");
    }
    if (strcmp(argv[1], "-p") && strcmp(argv[1], "-l") && strcmp(argv[1], "-u")) {
        argv[2] = argv[1];
        argv[1] = "-p";
    }
    fp = fopen(argv[2], "r");
    if (fp == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }else {
        while (!(strcmp(argv[1], "-p"))) {
            while ((ch = getc(fp)) != EOF) {
                putchar(ch);
            }
            break;
        }
        while (!(strcmp(argv[1], "-l"))) {
            while ((ch = getc(fp)) != EOF) {
                putchar(tolower(ch));
            }
            break;
        }
        while (!(strcmp(argv[1], "-u"))) {
            while ((ch = getc(fp)) != EOF) {
                putchar(toupper(ch));
            }
            break;
        }
    }
    fclose(fp);
    return 0;
}
