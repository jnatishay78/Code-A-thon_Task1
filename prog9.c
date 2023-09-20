#include <stdio.h>

int multiply(int a, int b) {
    int res = 0;
    if (b < 0) {
        b = -b;
        a = -a;
    }
    for (int i = 0; i < b; i++) {
        res = res + a;
    }
    return res;
}
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int mul = multiply(a, b);
    printf("Result of product of 2 numbers is: %d", mul);
    return 0;
}
