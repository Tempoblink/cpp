#include <stdio.h>
#include <ctype.h>
#include <string.h>

int output_place(char ch) {
    int place;
    if (isalpha(ch)) {
        place = tolower(ch) - 'a' + 1;
        return place;
    }else {
        return -1;
    }
}

void print_alpa(void) {
    int place;
    char ch;
    printf("Enter some characters: ");
    while ((ch = getchar()) != EOF) {
        if ((place = output_place(ch)) != -1) {
            printf("The %c is at %d\n", ch, place);
        }
    }
}

int main(void) {
    print_alpa();
    return 0;
}
