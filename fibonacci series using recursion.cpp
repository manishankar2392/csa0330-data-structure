#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }

        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
