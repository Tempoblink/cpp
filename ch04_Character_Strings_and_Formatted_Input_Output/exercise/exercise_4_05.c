#include <stdio.h>

int main(void) {
    float speed, size;
    printf("Enter the speed:______Mb/s\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &speed);
    printf("Enter the size of file:______MB\b\b\b\b\b\b\b\b");
    scanf("%f", &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds.\n", speed, size, 8*size/speed);
    return 0;
}
