#include <stdio.h>
#define SIZE 20

int is_within(char *array, char a);

int main(void) {
    char source[SIZE] = "Have some fun!";
    char a;
    printf("Enter a char: ");
    while ((a = getchar()) != 0 && a != EOF) {
        while (getchar() != '\n') {
            continue;
        }
        if (is_within(source, a)) {
            printf("Find it !\n");
        }else {
            printf("Don't find is !\n");
        }
        printf("Enter next char: ");
    }
    return 0;
}

int is_within(char *array, char a) {
    int i = 1;
    while (*(array + i - 1) != '\0') {
        if (*(array + i - 1) == a) {
            return i;
        }
        i++;
    }
    return 0;
}
