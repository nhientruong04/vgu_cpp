#include <stdio.h>

// Function to calculate the sum of doubled squared diagonal elements
int calculate_diagonal_sum(int arr[], int rows, int cols) {
    int diagonal_sum = 0;

    for (int i = 0; i < rows; ++i) {
        int index = i * cols + i; // Calculate the index of the diagonal element
        diagonal_sum += 2 * arr[index] * arr[index]; 
    }

    return diagonal_sum;
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows * cols]; 
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &arr[i * cols + j]);
        }
    }

    int diagonal_sum = calculate_diagonal_sum(arr, rows, cols);

    printf("Sum of doubled squared diagonal elements: %d\n", diagonal_sum);

    return 0;
}
