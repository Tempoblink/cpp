#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    if (argc < 2) {
        fprintf(stdout, "No file to print.\n");
        fprintf(stderr, "Please usage: %s [filename]...\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Can't open %s.\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        printf("The %s context: \n", argv[i]);
        while ((ch = getc(fp)) != EOF) {
            putc(ch, stdout);
        }
        fclose(fp);
        putchar('\n');
    }
    return 0;
}
