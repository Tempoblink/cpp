#include <stdio.h>
#define LIM 20

char * string_in(const char *, const char *);
char * s_gets(char *, int);

int main(void) {
    char source1[LIM];
    char source2[LIM];
    char *p;
    
    printf("Enter the source1: ");
    while (s_gets(source1, LIM)) {
        printf("Enter the source2: ");
        s_gets(source2, LIM);
        p = string_in(source1, source2);
        if (p) {
            printf("Find it at %ld\n", (p - source1 + 1));
        }else {
            puts("Not found!");
        }
        printf("ENter the next source1: ");
    }
    return 0;
}

char * string_in(const char *string1, const char *string2) {
    int i, j;
    for (i = 0; *(string1 + i) != '\0'; i++) {
        if (*(string1 + i) == *(string2)) {
            for (j = 0; *(string2 + j) != '\0'; j++) {
                if (*(string1 + i + j) != *(string2 + j)) {
                    break;
                }
            }
            if (*(string2 + j) == '\0') {
                return (char *)(string1 + i);
            }
        }
    }
    return NULL;
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
