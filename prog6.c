#include <stdio.h>
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int a = 1;
    printf("Even numbers from 1 to %d are:\n", num);
    while (a <= num) {
        if (a % 2 == 0) {
            printf("%d ", a);
        }
        a++;
    }
    printf("\n");
    return 0;
}