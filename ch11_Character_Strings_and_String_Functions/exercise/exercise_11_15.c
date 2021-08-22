#include <_ctype.h>
#include <stdio.h>
#include <ctype.h>
#define SIZE 20

int myatoi(const char *);
int power(int);
char * s_gets(char *, int);

int main(void) {
    char source[SIZE];
    printf("Enter a number: ");
    while (s_gets(source, SIZE) && source[0] != '\0') {
        printf("Your string: %s type: %zd\n", source, sizeof(source));
        printf("Your input:  %d type: %zd\n", myatoi(source), sizeof(myatoi(source)));
        printf("Enter a numer: ");
    }
    return 0;
}

int myatoi(const char *st) {
    int buffer = 0;
    int sum = 0;
    int i = 0;
    while (*(st + i)) {
        if (isnumber(st[i])) {
            i++;
        }else {
            sum = 0;
            break;
        }
    }
    for (int j = 0; 0 < i ; j++, i--) {
        sum += (st[i - 1] - '0') * power(j);
    }
    return sum;
}

int power(int n) {
    int i, sum;
    for (i = 0, sum = 1; i < n; i++) {
        sum *= 10;
    }
    return sum;
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
