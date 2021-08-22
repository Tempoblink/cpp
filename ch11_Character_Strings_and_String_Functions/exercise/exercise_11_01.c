#include <stdio.h>
#define SIZE 80

void get_n_char(char *array, int n) {
    int i = 0;
    char ch;
    printf("Enter some test below %d: ", n);
    while ((ch = getchar()) != EOF && i <= n) {
        *(array + i) = ch;
        i++;
    }
    if (*array) {
        *(array + i) = '\0';
    }
}

void print_char(char *array, int n) {
    puts("Start print array:");
    for (int i = 0; i <= n; i++) {
        putchar(*(array + i));
    }
    putchar('\n');
}

int main(void) {
    char source[SIZE];
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    get_n_char(source, num);
    print_char(source, num);
    return 0;
}
