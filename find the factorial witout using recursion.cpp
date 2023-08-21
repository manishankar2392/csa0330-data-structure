#include <stdio.h>

unsigned long long int factorial(int num) {
    unsigned long long int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long int fact = factorial(num);
        printf("Factorial of %d is %llu\n", num, fact);
    }

    return 0;
}
