#include <stdio.h>

void clamp_array(int arr[], int size, int min_val, int max_val) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min_val) {
            arr[i] = min_val;
        } else if (arr[i] > max_val) {
            arr[i] = max_val;
        }
    }
}

int main() {
    int size, min_val, max_val;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the minimum value: ");
    scanf("%d", &min_val);

    printf("Enter the maximum value: ");
    scanf("%d", &max_val);

    clamp_array(arr, size, min_val, max_val);

    printf("Clamped array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}