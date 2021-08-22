#include <stdio.h>
#include <stdbool.h>
#define SIZE 20

void is_word(char *array) {
    bool is_word = false;
    char ch;
    int i = 0;
    while ((ch = getchar()) != EOF) {
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            *(array + i) = ch;
            i++;
            is_word = true;
        }
        if ((ch == ' '|| ch == '\t' || ch == '\n') && is_word) {
            break;
        }
    }
    *(array + i) = '\0';
}

void print_array(char *array) {
    for (int i = 0; array[i] != '\0'; i++) {
        putchar(array[i]);
    }
    putchar('\n');
}


int main(void) {
    char source[SIZE];
    puts("Enter a word:");
    is_word(source);
    print_array(source);
    return 0;
}
