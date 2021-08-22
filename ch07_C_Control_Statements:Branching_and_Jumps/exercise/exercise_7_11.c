#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define artichoke_single_price 2.05
#define beet_single_price 1.15
#define carrot_single_price 1.09

char start_menu(void) {
    char select;
    system("clear");
    printf("------------------\n");
    printf("        Menu      \n");
    printf("a)artichoke\n");
    printf("b)beet\n");
    printf("c)carrot\n");
    printf("d)end\n");
    printf("q)quit\n");
    printf("------------------\n");
    printf("Enter you choose: ");
    select = getchar();
    return select;
}

char * select_to_name(char select) {
    char *name[10];
    switch (select) {
        case 'a':
            *name = "artichoke";
            break;
        case 'b':
            *name = "beet";
            break;
        case 'c':
            *name = "carrot";
            break;
        default:
            break;
    }
    return *name;
}

int count_menu(char select) {
    int count = 0;
    char *name;
    if (select == 'a'||select == 'b'||select == 'c') {
        name = select_to_name(select);
        printf("Enter the count of %s: ", name);
        scanf("%d", &count);
        return count;
    }else if (select == 'q' || select == 'd') {
        return 0;
    }else {
        printf("Error input,try again.\n");
        return 0;
    }
}

void print_count(int a, char select) {
    char *name;
    name = select_to_name(select);
    printf("%s count: %d\n", name, a);
}

double cal_deliver(int count) {
    double pay_deliver;
    if (count <= 5) {
        pay_deliver = 6.5;
    }else if (count > 5 && count <= 20) {
        pay_deliver = 14;
    }else if (count > 20) {
        pay_deliver = 14 + (count - 20) * 0.5;
    }
    return pay_deliver;
}

int main(void) {
    int select, input_count;
    int a_count, b_count, c_count, total_count;
    a_count = b_count = c_count = total_count = 0;
    double a_price, b_price, c_price, total_price;
    a_price = b_price = c_price = total_price = 0;
    double discount; 
    double deliver;
    do {
        select = start_menu();
        switch (select) {
            case 'a':
                print_count(a_count, select);
                break;
            case 'b':
                print_count(b_count, select);
                break;
            case 'c':
                print_count(c_count, select);
                break;
            default:
                break;
        }
        input_count = count_menu(select);
        switch (select) {
            case 'a':
                a_count += input_count;
                break;
            case 'b':
                b_count += input_count;
                break;
            case 'c':
                c_count += input_count;
                break;
            default:
                break;
        }
    }while (select != 'q' && select != 'd');
    if (select == 'd') {
        a_price = a_count * artichoke_single_price;
        b_price = b_count * beet_single_price;
        c_price = c_count * carrot_single_price;
        total_price = a_price + b_price + c_price;
        total_count = a_count + b_count + c_count;
        if (total_price >= 100) {
            discount =  5 * ((int)total_price / 100);
        }
        deliver = cal_deliver(total_count);
        system("clear");
        printf("-------------list----------------\n");
        printf("artichoke count: %-5d price: %-5.2f\n", a_count, a_price);
        printf("beet      count: %-5d price: %-5.2f\n", b_count, b_price);
        printf("carrot    count: %-5d price: %-5.2f\n", c_count, c_price);
        printf("list      count: %-5d price: %-5.2f\n", total_count, total_price);
        printf("discount               price: %-5.2f\n", discount);
        printf("deliver                price: %-5.2f\n", deliver);
        printf("total                  price: %-5.2f\n", total_price+deliver-discount);
    }
    return 0;
}
