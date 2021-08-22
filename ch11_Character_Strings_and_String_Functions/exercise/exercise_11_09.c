#include <stdio.h>
#define LIM 20

char * s_gets(char *, int);
void rev_string(char *);
void clear_string(char *);

int main(void) {
    char source[LIM];
    printf("Enter the source: ");
    while (s_gets(source, LIM)) {
        rev_string(source);
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

void rev_string(char *string) {
    int end;
    char temp;
    int i = 0;
    while (*(string + i)) {
        i++;
    }
    end = i - 1;
    i = 0;
    while (i < (end - i)) {
        temp = *(string + end - i);
        *(string + end  - i) = *(string + i);
        *(string + i) = temp;
        i++;
    }
}

void clear_string(char *string) {
    for (int i = 0; *(string + i) != '\0'; i++) {
        *(string + i) = '\0';
    }
}
