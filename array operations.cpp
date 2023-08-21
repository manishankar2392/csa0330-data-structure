#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    (*size)++;
}

void deleteElement(int arr[], int *size, int position) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    printf("Array Operations Menu:\n");
    printf("1. Insert Element\n");
    printf("2. Delete Element\n");
    printf("3. Display Array\n");
    printf("4. Exit\n");

    int choice, element, position;
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position for insertion: ");
                scanf("%d", &position);
                insertElement(arr, &size, element, position);
                break;
            case 2:
                printf("Enter the position for deletion: ");
                scanf("%d", &position);
                deleteElement(arr, &size, position);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
