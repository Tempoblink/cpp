#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30

void print_source(int source[ROWS][COLS]);
void num_switch(int n);

int main(int argc, char *argv[]) {
    int source[ROWS][COLS];
    char ch;
    FILE *fp;
    int i = 0;
    if (argc < 2) {
        fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    int j = 0;
    while ((ch = getc(fp)) != EOF) {
        if (ch != ' ' && ch != '\n') {
            source[i][j] = ch - '0';
            j++;
            if (j == COLS) {
                i++;
                j = 0;
            }
        }
    }
    print_source(source);
    fclose(fp);
    return 0;
}

void print_source(int source[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            num_switch(source[i][j]);
        }
        putchar('\n');
    }
}

void num_switch(int n) {
    switch (n) {
        case 0:
            putchar(' ');
            break;
        case 1:
            putchar('.');
            break;
        case 2:
            putchar('\'');
            break;
        case 3:
            putchar(':');
            break;
        case 4:
            putchar('~');
            break;
        case 5:
            putchar('*');
            break;
        case 6:
            putchar('=');
            break;
        case 8:
            putchar('%');
            break;
        case 9:
            putchar('#');
            break;
    }
}
