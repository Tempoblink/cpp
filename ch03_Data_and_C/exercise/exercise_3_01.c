#include <stdio.h>

int main(void) {
    int a1 = 2147483647;
    unsigned int a2 = 4294967295;
    float b = 3.4e38;
    float c = 0.1234e-40;
    printf("a1 = %d, a1 + 1 = %d\n", a1, a1 + 1);
    printf("a2 = %u, a2 + 1 = %u\n", a2, a2 + 1);
    printf("c = %e, c/10 = %e\n", c, c/10);
    printf("b = %e, b*100.0 = %e\n", b, b*100);
    return 0;
}
