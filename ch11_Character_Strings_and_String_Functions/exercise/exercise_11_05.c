#include <stdio.h>
#define SIZE 20

char * my_strchr(char *array, char a) {
    int i = 0;
    while (*(array + i) != '\0') {
        if (*(array + i) == a) {
            return array + i;
        }
        i++;
    }
    return NULL;
}

int main(void) {
    char ch;
    char source[SIZE] = "Have some fun!";
    while ((ch = getchar()) != 0 && ch != EOF) {
        while (getchar() != '\n') {
            continue;
        }
        if (my_strchr(source, ch)) {
            int i;
            i = (my_strchr(source, ch) - source) / sizeof(source[0]);
            printf("First find it at %d!\n", i + 1);
        }else {
            printf("Don't find it!\n");
        }
    }
}
