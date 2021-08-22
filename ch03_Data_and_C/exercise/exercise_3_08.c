#include <stdio.h>

int main(void) {
    int cup;
    float pint, ounce, soup_spoon, tea_spoon;
    printf("Enter the volume:____cup\b\b\b\b\b\b\b");
    scanf("%d", &cup);
    pint = cup / 2.0;
    ounce = cup * 8.0;
    soup_spoon = ounce * 2.0;
    tea_spoon = soup_spoon * 3.0;
    printf("pint: %.2f, ounce: %.2f, soup_spoon: %.2f, tea_spoon: %.2f\n",pint, ounce, soup_spoon, tea_spoon);
    return 0;
}
