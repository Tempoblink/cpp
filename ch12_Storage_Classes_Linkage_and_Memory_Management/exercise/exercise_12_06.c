#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cal_num(void);

int main(void) {
    unsigned int seed;
    int times = 0;
    printf("Enter a seed: ");
    while (times < 10 && (scanf("%d", &seed)) == 1) {
        srand(seed);
        printf("This is the %d input.\n", times+1);
        cal_num();
        printf("Enter a seed: ");
        times++;
    }
    return 0;
} 


void cal_num(void) {
    int num;
    int cal[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 1000; i++) {
        num = rand() % 10 + 1;
        cal[num-1]++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%-2d has appear %-3d times.\n", (i + 1), cal[i]);
    }
}
