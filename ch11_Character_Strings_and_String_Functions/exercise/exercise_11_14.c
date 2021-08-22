#include <stdio.h>
#include <stdlib.h>

double cal_m(double, int);

int main(int argc, char *argv[]) {
    double sum;
    double num = atof(argv[1]);
    int times  = atoi(argv[2]);
    if (argc < 3) {
        puts("Error select.");
    }else {
        sum = cal_m(num, times);
        printf("%.2f\n", sum);
    }
    return 0;
}

double cal_m(double num, int times) {
    double sum;
    int i;
    if (times == 0) {
        if (num == 0) {
            puts("Not define.");
            exit(1);
        }
        sum = 0;
    }
    if (times > 0) {
        for (i = 0, sum = 1; i < times; i++) {
            sum *= num;
        }
    }
    if (times < 0) {
        for (i = 0, sum = 1; i > times; i--) {
            sum *= num;
        }
        sum = 1 / sum;
    }
    return sum;
}
