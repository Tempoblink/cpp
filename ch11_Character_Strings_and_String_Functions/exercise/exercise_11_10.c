#include <stdio.h>
#define LIM 20

char * s_gets(char *, int);
void clear_string(char *);
void delete_space(char *);

int main(void) {
    char source[LIM];
    char *ch;
    printf("Enter the source: ");
    while ((ch = s_gets(source, LIM)) && *ch) {
        delete_space(source);
        puts(source);
        clear_string(source);
        printf("Enter next source: ");
    }
    return 0;
}

char * s_gets(char *st, int n) {
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        }else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

void clear_string(char *st) {
    for (int i = 0; *(st + i) != '\0'; i++) {
        *(st + i) = '\0';
    }
}

void delete_space(char *st) {
    for (int i = 0; *(st + i) != '\0'; i++) {
        if (*(st + i) == ' ') {
            for (int j = 0; *(st + i + j) != '\0'; j++) {
                *(st + i + j) = *(st + i + j + 1);
            }
        }
    }
}
