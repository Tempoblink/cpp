/* addaword.c -- 使用 fprintf()、fscanf() 和 rewind() */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];
    char ch;
    long last;
    long filecount = 0;
    if ((fp = fopen("wordy", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_SET);
    while ((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            filecount++;
        }
    }
    fseek(fp, 0L, SEEK_END);
    puts("Enter words to add to the file; press the #");
    puts("Key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words)) == 1 && (words[0] != '#')) {
        filecount++;
        fprintf(fp, "%ld-%s\n", filecount, words);
    }
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1) {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
    }
    return 0;
}
