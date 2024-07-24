#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int arr[MAX_SIZE];
    int sum = 0;
    float average;

    // Input the number of elements in the array
    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate the average
    if (n > 0) {
        average = (float)sum / n;
        printf("Average of the integers: %.2f\n", average);
    } else {
        printf("Cannot calculate average. Array size should be greater than zero.\n");
    }

    return 0;
}
