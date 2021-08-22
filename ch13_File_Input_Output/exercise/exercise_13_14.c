#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 30

void print_source(int source[ROWS][COLS]);
void num_switch(int n);
void change_num(int source[ROWS][COLS]);

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
    change_num(source);
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

void change_num(int source[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == 0) {
                if (j == 0) {
                    if (abs(source[i][j] - source[i][j+1]) > 1) {
                        if (abs(source[i][j] - source[i+1][j]) > 1) {
                            source[i][j] = (source[i][j+1] + source[i+1][j]) / 2;
                        }
                    }
                }else if (j == COLS - 1) {
                    if (abs(source[i][j] - source[i][j-1]) > 1) {
                        if (abs(source[i][j] - source[i+1][j]) > 1) {
                            source[i][j] = (source[i][j-1] + source[i+1][j]) / 2;
                        }
                    }
                }else {
                    if (abs(source[i][j] - source[i][j-1]) > 1) {
                        if (abs(source[i][j] - source[i][j+1]) > 1) {
                            if (abs(source[i][j] - source[i+1][j]) > 1) {
                                source[i][j] = (source[i][j-1] + source[i][j+1] + source[i+1][j]) / 3;
                            }
                        }
                    }
                }
            }
            else if (j == 0) {
                if (i == ROWS - 1) {
                    if (abs(source[i][j] - source[i-1][j]) > 1) {
                        if (abs(source[i][j] - source[i][j+1]) > 1) {
                            source[i][j] = (source[i-1][j] + source[i][j+1]) / 2;
                        }
                    }
                }else if (i != 0) {
                    if (abs(source[i][j] - source[i-1][j]) > 1) {
                        if (abs(source[i][j] - source[i+1][j]) > 1) {
                            if (abs(source[i][j] - source[i][j+1]) > 1) {
                                source[i][j] = (source[i-1][j] + source[i+1][j] + source[i][j+1]) / 3;
                            }
                        }
                    }
                }
            }
            else if (i == ROWS - 1) {
                if (j == COLS - 1) {
                    if (abs(source[i][j] - source[i-1][j]) > 1) {
                        if (abs(source[i][j] - source[i][j-1]) > 1) {
                            source[i][j] = (source[i-1][j] +source[i][j-1]) / 2;
                        }
                    }
                }else if (j != 0) {
                    if (abs(source[i][j] - source[i][j-1]) > 1) {
                        if (abs(source[i][j] - source[i][j+1]) > 1) {
                            if (abs(source[i][j] - source[i-1][j]) > 1) {
                                source[i][j] = (source[i][j-1] + source[i][j+1] + source[i-1][j]) / 3;
                            }
                        }
                    }
                }
            }
            else if (j == COLS - 1) {
                if (i != 0 && i != ROWS -1) {
                    if (abs(source[i][j] - source[i][j-1]) > 1) {
                        if (abs(source[i][j] - source[i-1][j]) > 1) {
                            if (abs(source[i][j] - source[i+1][j]) > 1) {
                                source[i][j] = (source[i][j-1] + source[i-1][j] + source[i+1][j]) / 3;
                            }
                        }
                    }
                }
            }
            else{
                if (abs(source[i][j] - source[i-1][j]) > 1) {
                    if (abs(source[i][j] - source[i+1][j]) > 1) {
                        if (abs(source[i][j] - source[i][j-1]) > 1) {
                            if (abs(source[i][j] - source[i][j+1]) > 1) {
                                source[i][j] = (source[i-1][j] + source[i+1][j] + source[i][j-1] + source[i][j+1]) / 4;
                            }
                        }
                    }
                }
            }
        }
    }
}
