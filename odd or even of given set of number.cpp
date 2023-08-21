#include <stdio.h>

int main() {
    int num;
    
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    printf("Enter %d numbers:\n", num);
    
    for (int i = 0; i < num; i++) {
        int n;
        scanf("%d", &n);
        
        if (n % 2 == 0) {
            printf("%d is even.\n", n);
        } else {
            printf("%d is odd.\n", n);
        }
    }
    
    return 0;
}
