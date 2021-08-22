#include <stdio.h>

int main(void) {
    float height;
    printf("Enter your height:_____in\b\b\b\b\b\b\b");
    scanf("%f", &height);
    printf("Your height: %.2fcm\n", height*2.54);
    return 0;
}
