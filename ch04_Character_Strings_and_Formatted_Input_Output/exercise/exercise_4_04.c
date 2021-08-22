#include <stdio.h>

int main(void) {
    char name[40];
    float height;
    printf("Enter your name:__________\b\b\b\b\b\b\b\b\b\b");
    scanf("%s", name);
    printf("Enter your height:________cm\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall\n", name, height/100.0);
    return 0;
}
