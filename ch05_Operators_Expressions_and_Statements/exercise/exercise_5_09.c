#include <stdio.h>

void temperatures(double temp) {
    const float N1 = 5.0/9.0; 
    const float N2 = 32.0;
    const float N3 = 273.16;
    
    double select[2];
    select[0] = N1 * (temp - N2);
    select[1] = select[0] + N3;
    printf("Celsius: %.2f\n", select[0]);
    printf("Kelvin: %.2f\n", select[1]);

}

int main(void) {
    double temp;
    printf("Enter the Fahrenheit temperature: ");
    while ((scanf("%lf", &temp) == 1)) {
        temperatures(temp);
        printf("Next Fahrenheit temperature: ");
    }
    printf("Done!\n");
    return 0;
}
