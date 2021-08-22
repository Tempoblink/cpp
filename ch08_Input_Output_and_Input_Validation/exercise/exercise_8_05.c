/* guess.c -- 一个拖沓且错误的猜数字程序 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int guess = 50;
    int low = 1;
    int high = 100;
    char check, response;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y') {
        while (getchar() != '\n') {
            continue;
        }
        if (response == 'u') {
            high = guess;
            printf("Well, then, is it %d?\n", guess = (guess + low) / 2);
        }else if (response == 'l') {
            low = guess;
            printf("Well, then, is it %d?\n", guess = (high + guess) / 2);
        }else {
            printf("error input , Input u, l, y.\n");
        }
    }
    printf("I knew I could do it!\n");
    return 0;
}
