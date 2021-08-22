#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define BUFFER_SIZE 80

char * s_gets(char *, int);
void split_string(char *, char **);

int main(void) {
    int words;
    char *buffer = malloc(BUFFER_SIZE * sizeof(char));
    char **array;
    printf("How many words do you wish to enter? ");
    while (scanf("%d", &words) == 1 && words > 0) {
        while (getchar() != '\n') {
            continue;
        }
        array = (char **)malloc(words * sizeof(char *));
        printf("Enter %d words now: ", words);
        s_gets(buffer, BUFFER_SIZE);
        split_string(buffer, array);
        printf("Here are your words:\n");
        for (int i = 0; i < words; i++) {
            printf("%s\n", array[i]);
        };
        printf("How many words do you wish to enter?(-1 to quit)");
    }
    printf("Bye.\n");
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

void split_string(char *source, char **target) {
    int i, j;
    bool is_word = false;
    for (i = 0, j = 0; source[i] != '\0'; i++) {
        if (!isspace(source[i]) && !is_word) {
            target[j] = (source + i);
            ++j;
            is_word = true;
        }
        if (isspace(source[i]) && is_word) {
            is_word = false;
            source[i] = '\0';
        }
    }
}
