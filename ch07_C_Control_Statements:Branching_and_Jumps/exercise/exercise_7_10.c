#include <stdio.h>
#define init_tax 0.15
#define out_tax 0.28

int start_menu(void) {
    int select;
    printf("---------------------\n");
    printf("Select your part: \n");
    printf("1)single\n");
    printf("2)host\n");
    printf("3)mary_comm\n");
    printf("4)mary_div\n");
    printf("5)quit\n");
    printf("---------------------\n");
    scanf("%d", &select);
    return select;
}

int call_floor(int select) {
    int floor = 0;
    switch (select) {
        case 1:
            floor = 17850;
            break;
        case 2:
            floor = 23900;
            break;
        case 3:
            floor = 29750;
            break;
        case 4:
            floor = 14875;
            break;
        case 5:
            floor = -1;
            break;
        default:
            break;
    }
    return floor;
}

double cal_tax(double money, int floor) {
    double tax, a;
    if (money <= floor) {
        tax = money * init_tax; 
    }else {
        a = money - floor;
        tax = cal_tax(floor, floor) + a * out_tax;
    }
    return tax;
}

int main(void) {
    int select;
    double tax, salary;
    select = start_menu();
    while (!call_floor(select)) {
        printf("Oops!error input.Try again.\n");
        select = start_menu();
    }
    if (select != 5) {
        printf("Enter your salary: ");
        scanf("%lf", &salary);
        printf("Your tax: %.2f\n", cal_tax(salary, call_floor(select)));
        printf("Done!\n");
    }else {
        printf("Bye!\n");
    }
    return 0;
}
