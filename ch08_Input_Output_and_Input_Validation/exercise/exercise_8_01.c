#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = 0;
    FILE *fp;
    char fname[50];
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("Failed to open file. Bye\n");
        exit(1);
    }
    while (getc(fp) != EOF) {
        num++;
    }
    fclose(fp);
    printf("The %s has %d character.\n", fname, num);
    return 0;
}
