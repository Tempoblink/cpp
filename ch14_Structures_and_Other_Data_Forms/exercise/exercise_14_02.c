#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct data {
    char *month_name;
    char shortname[3];
    int days;
    int month_num;
};

struct input {
    int year;
    char name[20];
};

const char *month_name[] = {
    "January",
    "Februray",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

const int month_day[] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31

};

void init_data(struct data date[], int input_year) {
    for (int i = 0; i < 12; i++) {
        date[i].month_name = (char *)month_name[i];
        strncpy(date[i].shortname, date[i].month_name, 3L) ;
        date[i].days = month_day[i];
        date[i].month_num = i + 1;
    }
    if (input_year % 4 == 0 && input_year % 100 != 0) {
        date[2].days = 29;
    }
}


int callback_day(const struct data date[], const struct input *input) {
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        if (strncmp(date[i].shortname, input->name, 3) == 0 || strcmp(date[i].month_name, input->name) == 0 || date[i].month_num == atoi(input->name)) {
            for (int j = 0; j < date[i].month_num; j++) {
                sum += date[j].days;
            }
            break;
        }
    }
    return sum;
}

char * s_gets(char *st, int n) {
    char *ret_val, *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        }else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

int main(void) {
    struct data date[12];
    struct input input;
    printf("Enter a year: ");
    while ((scanf("%d", &input.year)) == 1 && input.year > 0) {
        int sum;
        printf("Enter the month(num or name or shortname):");
        while (s_gets(input.name, 20) == NULL || input.name[0] == '\0') {
            printf("Enter the currect month(num or name or shortname): ");
            continue;
        }
        init_data(date, input.year);
        sum = callback_day(date, &input);
        printf("The %d %s has %d days.\n", input.year, input.name, sum);
        printf("Enter a year(q to quit): ");
    }
    puts("Bye.");
    return 0;
}
