#include <stdio.h>
#define time 40
#define floor1 300
#define floor2 150
#define reve1 0.15
#define reve2 0.2
#define reve3 0.25


char start_menu(void) {
    char select;
    printf("*********************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a)$8.75/hr\t\t\tb)$9.33/hr\n");
    printf("c)$10.00/hr\t\t\td)$11.20/hr\n");
    printf("q)quit\n");
    printf("*********************************************************************\n");
    select = getchar();
    return select;
}

float hour_money(char select) {
    float money_hour = 0;
    switch (select) {
        case 'a':
            money_hour = 8.75;
            break;
        case 'b':
            money_hour = 9.33;
            break;
        case 'c':
            money_hour = 10.00;
            break;
        case 'd':
            money_hour = 11.20;
            break;
        case 'q':
            money_hour = -1;
            break;
        default:
            break;
    }
    return money_hour;
}

int free(int hour, float money_hour) {
    int sum;
    if (hour > time) {
        hour = time + (hour - time) * 1.5;
    }
    sum = hour * money_hour;
    return sum;
}

float revenue(int salary) {
    float reve;
    int a ,b;
    a = b = 0;
    if (salary <= floor1) {
        reve = salary * reve1;
    }else if ((a = salary - floor1) <= floor2) {
        reve = a * reve2;
        reve = revenue(floor1) + reve;
    }else {
        b = salary - floor1 - floor2;
        reve = b * reve3;
        reve = revenue(floor1 + floor2) +reve;
    }
    return reve;
}

int main(void){
    int hour = 0;
    char select;
    float salary;
    select = start_menu();
    while (!hour_money(select)) {
        printf("Oops!error input.Try again.\n");
        select = start_menu();
    }
    if (select != 'q') {
        printf("Enter your work hours: ");
        scanf("%d", &hour);
        if (hour) {
            salary = revenue(free(hour, hour_money(select)));
            printf("Money: $%.2f\n", salary);
        }
        printf("Done!\n");
    }else {
        printf("Bye!\n");
    }
    return 0;
}
