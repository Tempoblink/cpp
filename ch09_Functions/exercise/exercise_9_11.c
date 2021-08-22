#include <stdio.h>

int Fibonacci(int n) {
    int num;
    if (n > 2){
        num = Fibonacci(n - 1) + Fibonacci(n - 2);
    }else {
        num = 1;
    }
    return num;
}

int main(void) {
    int set, fib;
    printf("Enter the place(q to quit): ");
    while ((scanf("%d", &set)) == 1) {
        if (set < 1) {
            printf("Error input.\n");
            printf("Enter the place(q to quit): ");
            continue;
        }      
        fib = Fibonacci(set);
        printf("At %d the Fibonacci number is %d\n", set, fib);
        printf("Enter the place(q to quit): ");
    }
    return 0;
}
