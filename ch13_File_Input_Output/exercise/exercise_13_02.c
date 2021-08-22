#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096


int main(int argc, char *argv[]) {
    FILE *source, *traget;
    static char temp[BUFSIZE];
    size_t bytes;
    if (argc < 3) {
        fprintf(stderr, "Usage: %s [filename] [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if (strcmp(argv[0], argv[1]) == 0) {
        fprintf(stderr, "Can't copy iself\n");
        exit(EXIT_FAILURE);
    }
    if ((source = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((traget = fopen(argv[2], "wb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[2]);
    }
    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) {
        fwrite(temp, sizeof(char), BUFSIZE, traget);
    }
    return 0;
}
