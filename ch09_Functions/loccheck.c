/* loccheck.c　-- 查看变量被储存在何处　*/

#include <stdio.h>

void mikado(int);

int main(void) {
    int pooth = 2, bath = 5;
    printf("In main(), pooth = %d and &pooth = %p\n", pooth, &pooth);
    printf("In main(), bath = %d and &bath = %p\n", bath, &bath);
    mikado(pooth);
    return 0;
}

void mikado(int bath) {
    int pooth = 10;
    printf("In mikado(), pooth = %d and &pooth = %p\n", pooth, &pooth);
    printf("In mikado(), bath = %d and &bath = %p\n", bath, &bath);
}
