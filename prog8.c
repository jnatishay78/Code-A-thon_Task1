#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("There are not enough elements in the array to find the second largest.\n");
        return 1;
    }

    int a[num];
    printf("Enter %d elements in the array:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[num]);
    }

    int largest = a[0];
    int secondLargest = a[0];

    for (int i = 1; i < num; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("The second largest number in the array is: %d\n", secondLargest);

    return 0;
}