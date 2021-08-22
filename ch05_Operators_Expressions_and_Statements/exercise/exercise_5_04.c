#include <stdio.h>
#define in_2_cm 2.54
#define in_2_ft 12

int main(void) {
    float num, in;
    int feet;
    printf("Enter a height in centimeters: ");
    scanf("%f", &num);
    while (num > 0) {
        in = num / in_2_cm ;
        feet = (int)in / in_2_ft;
        in = in - feet*in_2_ft;
        printf("%.1f cm  = %d feet, %.1f inches\n", num, feet, in);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &num);
    }
    printf("bye\n");
    return 0;
}

