#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp[2];
    char ch1, ch2;
    if (argc < 3) {
        fprintf(stderr, "Usage: %s [filename1] [filename2] \n", argv[2]);
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i < argc; i++) {
        if ((fp [i - 1] = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Can't open file %s.\n", argv[i]);
            exit(EXIT_FAILURE);
        }
    }
    while ((ch1 = getc(fp[0])) != EOF) {
        if (ch1 != '\n') {
            putc(ch1, stdout);
        }else {
            putchar(' ');
            while ((ch2 = getc(fp[1])) != EOF) {
                if (ch2 != '\n') {
                    putc(ch2, stdout);
                }else {
                    break;
                }
            }
            putchar('\n');
        }
    }
    return 0;
}
