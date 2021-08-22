#include <stdio.h>

static int mode;
static double distance;
static double fuel;

void set_mode(int num){
    char status[2][7] = {
        "mertic",
        "US"
    };
    if (num < 2) {
        mode = num;
    }else {
        printf("Invalid mode spacified. Mode %d(%s) used.\n", mode, status[mode]);
    }
}

void get_info(void) {
    printf("Enter distance traceled in kilometers: ");
    scanf("%lf", &distance);
    printf("Enter fuel comsumed in liters: ");
    scanf("%lf", &fuel);
}

void show_info(void) {
    double comsume;
    switch (mode) {
        case 0:
            comsume = 100 * (fuel / distance);
            printf("Fuel comsumption is %.2f liters per 100 km.\n", comsume);
            break;
        case 1:
            comsume = distance / fuel;
            printf("Fuel comsumption is %.1f miles per gallon.\n", comsume);
            break;
    }
}
