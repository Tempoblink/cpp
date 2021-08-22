#include <stdio.h>
#define GAS 3.785
#define LINE 1.609

int main(void) {
    float distance, volume;
    printf("Enter your distance: ");
    scanf("%f", &distance);
    printf("Enter your volume: ");
    scanf("%f", &volume);
    printf("distance: %.3fin, volume: %.3fga, speed: %.3fin/ga\n", distance, volume, distance/volume);
    printf("distance: %.3fkm, volume: %.3fl, speed: %.3fkm/l\n", distance*LINE, volume*GAS, (distance*LINE)/(volume*GAS));
    return 0;
}
