#include <_ctype.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 80

int cal[5] = {0,0,0,0,0};
int * is_word(const char *);


int main(void) {
    char source[SIZE];
    int *sum;
    char ch;
    int i = 0;
    puts("Enter a text: ");
    while ((ch = getchar()) != 0 && ch != EOF) {
        source[i] = ch;
        i++;
        if (i > 80) {
            break;
        }
    }
    source[i] = '\0';
    sum = is_word(source);
    printf("Words:      %d\n", sum[0]);
    printf("Upper char: %d\n", sum[1]);
    printf("Lower char: %d\n", sum[2]);
    printf("Punct:      %d\n", sum[3]);
    printf("Number:     %d\n", sum[4]);
    return 0;
}


int * is_word(const char *st) {
    int *p;
    p = cal;
    int i = 0;
    bool is_word = false;
    while (st[i]) {
        if (!isspace(st[i]) && !is_word) {
            p[0]++;
            is_word = true;
        }
        if (isspace(st[i]) && is_word) {
            is_word = false;
        }
        if (isupper(st[i])) {
            p[1]++;
        }
        if (islower(st[i])) {
            p[2]++;
        }
        if (ispunct(st[i])) {
            p[3]++;
        }
        if (isnumber(st[i])) {
            p[4]++;
        }
        i++;
    }
    return p;
}

