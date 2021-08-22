#include <stdio.h>
#define LIM 20

char * mystrncpy(char *, char *, int );
void clear_string(char *, int );
char * s_get(char *, int );

int main(void) {
    char s1[LIM];
    char s2[LIM];
    int n;

    printf("Enter a string to copy: ");
    s_get(s2, LIM);
    while (*s2) {
        printf("How many characters do you want to copy?(MAX: %d)", LIM);
        scanf("%d", &n);
        while (getchar() != '\n') {
            continue;
        }
        if (n > LIM) {
            n = LIM;
        }
        printf("Original string: %s\n", s2);
        mystrncpy(s1, s2, n);
        printf("Copy: %s\n", s1);

        clear_string(s1, LIM);

        printf("Enter a string to copy(max: %d): ", LIM);
        s_get(s2, LIM);
    }
    puts("Bye");
    return 0;
}


char * mystrncpy(char *source1, char *source2, int num) {
    int i = 0;
    while (*(source2) != '\0' && i < num) {
        *(source1 + i) = *(source2 + i);
        i++;
    }
    while (i < num) {
        *(source1 + i) = '\0';
        i++;
    }
    return source1;
}

void clear_string(char * st, int n) {
    for (int i = 0; i < n; i++) {
        *(st + i) = '\0';
    }

}

char * s_get(char *st, int n) {
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
