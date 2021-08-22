#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct month {
    char *name;
    char shortname[3];
    int days;
    int month_num;
};

const char *years_cal[] = {
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
    31, 29, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31

};

void init_year(struct month year[]) {
    for (int i = 0; i < 12; i++) {
        year[i].name = (char *)years_cal[i];
        strncpy(year[i].shortname, years_cal[i], 3L) ;
        year[i].days = month_day[i];
        year[i].month_num = i + 1;
    }
}


int callback_day(const struct month year[], const char *select) {
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        if (strncmp(year[i].shortname, select, 3) == 0) {
            for (int j = 0; j < year[i].month_num; j++) {
                sum += year[j].days;
            }
            break;
        }
    }
    return sum;
}

void print_year(const struct month year[]) {
    for (int i = 0; i < 12; i++) {
        printf("%s has %d\n", year[i].name, year[i].days);
    }
    putchar('\n');
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
    char select[3];
    struct month map[12];
    int sum;
    init_year(map);
    print_year(map);
    puts("Enter a month: ");
    while (s_gets(select, 10) != NULL && select[0] != '\0') {
        sum = callback_day(map, select);
        printf("The sum of %s is %d\n", select, sum);
    }
    puts("Bye.");
    return 0;
}
