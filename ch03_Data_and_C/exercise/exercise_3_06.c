#include <stdio.h>

int main(void) {
    int volume_water;
    float number_water;
    printf("Enter the volume of water: ");
    scanf("%d", &volume_water);
    number_water = volume_water * 950 / 3.0e-23;
    printf("The number of water: %e\n", number_water);
    return 0;
}
