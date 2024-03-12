#include <stdio.h>

#include <stdio.h>

void calculate_diff_and_sign(int input_arr[], int diff_arr[], int sign_arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int difference = input_arr[i + 1] - input_arr[i];
        diff_arr[i] = difference;

        if (difference >= 0) {
            sign_arr[i] = 1;
        } else {
            sign_arr[i] = -1;
        }
    }
}
int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int input_arr[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &input_arr[i]);
    }

    int diff_arr[size - 1]; 
    int sign_arr[size - 1];

    calculate_diff_and_sign(input_arr, diff_arr, sign_arr, size);

    printf("Diff array: ");
    for (int i = 0; i < size - 1; ++i) {
        printf("%d ", diff_arr[i]);
    }
    printf("\n");

    printf("Sign array: ");
    for (int i = 0; i < size - 1; ++i) {
        printf("%d ", sign_arr[i]);
    }
    printf("\n");

    return 0;
}