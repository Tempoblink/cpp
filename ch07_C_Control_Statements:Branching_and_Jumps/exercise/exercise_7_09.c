#include <stdio.h>

void print_prime(int max) {
    int i; 
    for (i = 2; i * i <= max; i++) {
        if (max % i == 0) {
            break;
        }
    }
    if (i * i > max) {
        printf("%d ", max);
    }
}

int is_natural(int n) {
    if (n > 0) {
        return 1;
    }else {
        return 0;
    }
}

int main(void) {
    int num;
    printf("Enter a natural number: ");
    do {
        scanf("%d", &num);
    }while (!is_natural(num));
    for (int i = 2; i < num; i++) {
        print_prime(i);
    }
    printf("\nDone!\n");
    return 0;
}
