#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void sort_num(int *);
void print_num(int *);

int main(void) {
    srand((unsigned int)time(0));
    int num[SIZE];
    for (int i = 0; i < SIZE; i++) {
        num[i] = rand() % 10 + 1;
    }
    sort_num(num);
    print_num(num);
    return 0;
}

void sort_num(int *p) {
    printf("Start sort...\n");
    int temp;
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (p[j] > p[i]) {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
    printf("Sort complete!\n");
}

void print_num(int *p) {
    printf("Start print:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%5d", p[i]);
        if ((i + 1) % 10 == 0) {
            putchar('\n');
        }
    }
    printf("\nEnd print.\n");
}
