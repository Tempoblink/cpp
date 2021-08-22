#include <stdio.h>
#include <ctype.h>

void add_two(float a, float b) {
    float c;
    c = a + b;
    printf("%.3f + %.3f = %.3f\n", a, b, c);
}

void sub_two(float a, float b) {
    float c;
    c = a - b;
    printf("%.3f - %.3f = %.3f\n", a, b, c);
}

void mult_two(float a, float b) {
    float c;
    c = a * b;
    printf("%.3f * %.3f = %.3f\n", a, b, c);
}

void div_two(float a, float b) {
    float c;
    c = a / b;
    printf("%.3f / %.3f = %.3f\n", a, b, c);
}

char start_menu(void) {
    char select;
    printf("Enter the operation of your choice: \n");
    printf("a. add     \t\ts. subtract\n");
    printf("m. multiply\t\td. divide\n");
    printf("q. quit\n");
    select = getchar();
    if (!(select == 'a'|| select == 's'|| select == 'm' || select == 'd' || select == 'q')) {
        printf("Oops!error input.Try again.\n");
        select = start_menu();
    }
    return select;
}

float input_num(void) {
    char ch;
    float num;
    while ((scanf("%f", &num)) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    return num;
}

void print_result(char select, float first_num, float second_num) {
    switch (select) {
        case 'a':
            add_two(first_num, second_num);
            break;
        case 's':
            sub_two(first_num, second_num);
            break;
        case 'm':
            mult_two(first_num, second_num);
            break;
        case 'd':
            div_two(first_num, second_num);
            break;
        default:
            break;
    }
}

int main(void) {
    char select, ch;
    float first_num, second_num;
    while((select = start_menu()) != 'q') {
        printf("Enter first number: ");
        first_num = input_num();
        printf("Enter second number: ");
        second_num = input_num();
        if (select == 'd') {
            while (second_num == 0) {
                printf("Enter a number other than 0: ");
                second_num = input_num();
            }
        }
        if (select != '\n') {
            print_result(select, first_num, second_num);
        }
        while (getchar() != '\n') {
            continue;
        }
    }
    printf("Bye.\n");
    return 0;
}
