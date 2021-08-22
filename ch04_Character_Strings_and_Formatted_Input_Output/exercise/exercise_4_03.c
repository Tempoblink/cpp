#include <stdio.h>

int main(void) {
    float num;
    printf("Enter a float number: ");
    scanf("%f", &num);
    printf("%f, %e\n", num, num);
    printf("%.1e, %.3e\n", num, num);
    return 0;
}
