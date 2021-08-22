#include <stdio.h>

void set_mode(int *mode);
void get_info(double *p);
void show_info(double *p, int mode);

int main(void) {
    int mode[2];
    double input[2];
    mode[1] = 0;
    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode[0]);
    while (mode[0] >= 0) {
        set_mode(mode);
        get_info(input);
        show_info(input, mode[1]);
        printf("Enter 0 for metric mode, 1 for US mode: ");
        printf(" (-1 to quit): ");
        scanf("%d", &mode[0]);
    }
    printf("Done.\n");
    return 0;
}

void set_mode(int *mode){
    char status[2][7] = {
        "mertic",
        "US"
    };
    if (mode[0] < 2) {
        mode[1] = mode[0];
    }else {
        printf("Invalid mode spacified. Mode %d(%s) used.\n", mode[1], status[mode[1]]);
    }
}

void get_info(double *p) {
    printf("Enter distance traceled in kilometers: ");
    scanf("%lf", &p[0]);
    printf("Enter fuel comsumed in liters: ");
    scanf("%lf", &p[1]);
}

void show_info(double *p, int n) {
    double comsume;
    switch (n) {
        case 0:
            comsume = 100 * (p[1] / p[0]);
            printf("Fuel comsumption is %.2f liters per 100 km.\n", comsume);
            break;
        case 1:
            comsume = p[0] / p[1];
            printf("Fuel comsumption is %.1f miles per gallon.\n", comsume);
            break;
    }
}
