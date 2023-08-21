#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {5, 12, 8, 32, 16, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the number you want to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}
