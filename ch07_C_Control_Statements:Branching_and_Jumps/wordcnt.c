// wordcnt.c -- 统计字符数、单词数、行数

#include <stdio.h>
#include <ctype.h>      //为isspace()函数提供原型
#include <stdbool.h>    //为bool、true、false提供定义
#define STOP '|'

int main(void) {
    char c;             //读入字符
    char prev;          //读入的前一个字符
    long n_chars = 0L;  //字符数
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    int p_words = 0;
    bool inword = false;
    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';
    while ((c = getchar()) != STOP) {
        n_chars++;
        if (c == '\n') {
            n_lines++;
        }
        if (!isspace(c) && !inword) {
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword) {
            inword = false;
        }
        prev = c;
    }
    if (prev != '\n') {
        p_lines = 1;
    }
    printf("characters = %ld, words = %d, lines = %d,",
            n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);
    return 0;
}
