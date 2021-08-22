#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 256

int main(int argc, char *argv[]) {
    FILE *fp;
    char *place;
    char buffer[BUFSIZE];
    int line = 0;
    int times = 0;
    if (argc < 3) {
        fprintf(stderr, "Usage: %s [string] [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "Can't open %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while (fgets(buffer, BUFSIZE, fp) != NULL) {
        line++;
        if ((place = strstr(buffer, argv[1])) != NULL) {
            times++;
            printf("Found the string '%s' in '%s' at Line: %d\n", argv[1], argv[2], line);
        }
    }
    if (times == 0) {
        printf("The string '%s' was not found in '%s'\n", argv[1], argv[2]);
    }
    return 0;
}
