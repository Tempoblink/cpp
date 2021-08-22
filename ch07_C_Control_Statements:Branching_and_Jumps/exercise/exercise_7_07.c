#include <stdio.h>
#define money 1000
#define time 40

int free(int hour) {
    int sum;
    if (hour > time) {
        hour = time + (hour - time) * 1.5;
    }
    sum = hour * money;
    return sum;
}

float revenue(int salary) {
    float reve;
    int a ,b;
    a = b =0;
    if (salary <= 300) {
        reve = salary * 0.15;
    }else if ((a = salary - 300) <= 150) {
        reve = a * 0.2;
        reve = revenue(300) + reve;
    }else {
        b = salary - 300 - 150;
        reve = b * 0.25;
        reve = revenue(300+150) +reve;
    }
    return reve;
}

int main(void){
    int hour;
    printf("Enter your work hours: ");
    scanf("%d", &hour);
    printf("Money: %.2f\n", revenue(free(hour)));
    return 0;
}
