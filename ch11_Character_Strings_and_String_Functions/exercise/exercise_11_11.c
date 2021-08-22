#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#define LIM 10
#define SIZE 20

//header
int select;

void start_menu(void);
void switch_select(char *string[], int num);
char * s_gets(char *st, int n);
void print_array(char *string[], int num);
void print_ascii(char *string[], int num);
void print_length(char *string[], int num);
void print_FTL_length(char *string[], int num);

int main(void) {
    char source[LIM][SIZE];
    char *p[SIZE];
    int ct = 0;
    printf("Input up to %d lines: \n", LIM);
    printf("To stop, press the Enter key at a lines start.\n");
    while (ct < LIM && s_gets(source[ct], SIZE) != NULL && source[ct][0] != '\0') {
        p[ct] = source[ct];
        ct++;
    }
    do {
        start_menu();
        switch_select(p, ct);
    }while (select != 5);
    puts("Bye!");
    return 0;
}


void start_menu(void) {
    select = -1;
    puts("------------Menu");
    puts("1.print the string.");
    puts("2.print as ASCII.");
    puts("3.print as length.");
    puts("4.print as the first word length.");
    puts("5.quit");
    printf("Enter your select: ");
    scanf("%d", &select);
    if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5) {
        puts("Error select.input again.");
        while (getchar() != '\n') {
            continue;
        }
        start_menu();
    }
}

void switch_select(char *string[], int num) {
    switch (select) {
        case 1:
            print_array(string, num);
            break;
        case 2:
            print_ascii(string, num);
            break;
        case 3:
            print_length(string, num);
            break;
        case 4:
            print_FTL_length(string, num);
            break;
    }
}

char * s_gets(char *st, int n) {
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        }else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}

void print_array(char *string[], int num) {
    for (int i = 0; i < num; i++) {
        puts(string[i]);
    }
}


void print_ascii(char *string[], int num) {
    char *temp;
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (strcmp(string[i], string[j]) > 0) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    print_array(string, num);
}

void print_length(char *string[], int num) {
    char *temp;
    for (int i = 0; i < num; i++) {
        for (int j = i; j < num; j++) {
            if (strlen(string[i]) > strlen(string[j])) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    print_array(string, num);
}

int FTL(char *st) {
    int lenght = 0;
    int i = 0;
    bool is_word = false;
    while (st[i]) {
        if (!isspace(st[i])) {
            lenght++;
            is_word = true;
        }
        if (isspace(st[i]) && is_word) {
            break;
        }
        i++;
    }
    return lenght;
}

void print_FTL_length(char *string[], int num) {
    char *temp;
    for (int i = 0; i < num; i++) {
        for (int j = i; j < num; j++) {
            if (FTL(string[i]) > FTL(string[j])) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    print_array(string, num);
}
