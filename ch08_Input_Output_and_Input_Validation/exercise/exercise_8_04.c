#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    char ch;
    bool is_word = false;
    int word_sum, char_sum;
    word_sum = char_sum = 0;
    float avg_sum;
    while ((ch = getchar()) != EOF) {
        if (!isspace(ch) && !is_word) {
                is_word = true;
                word_sum++;
        }
        if (isspace(ch) && is_word) {
            is_word = false;
        }
        if (isalpha(ch)) {
            char_sum++;
        }
    }
    avg_sum = (float)char_sum / word_sum;
    printf("Word:%d, Char:%d, Avg:%.2f\n", word_sum, char_sum, avg_sum);
    return 0;
}
