#include <stdio.h>

int main(void) {
    int toes, square, cube;
    toes = 10;
    square = toes * toes;
    cube = square * toes;
    printf("toes = %d, toes squared = %d, toes cubed = %d\n", toes, square, cube);
    return 0;
}
