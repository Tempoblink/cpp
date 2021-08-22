#include <stdio.h>
#define Dunbar_number 150


int Rabnud(int week) {
    int sum = 5;
    for (int i = 1; i <= week; i++) {
        sum -= i;
        sum *= 2;
    }
    return sum;
}

void print_sum(int week) {
    printf("The week: %d, The number of friends: %d\n", week, Rabnud(week));
}

int main(void) {
    int i = 0, a;
    do {
        i++;
        a = Rabnud(i);
        print_sum(i);
    }while (a < Dunbar_number);
    return 0;
}
