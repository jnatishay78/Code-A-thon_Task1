#include <stdio.h>
int main() {
    int num, d, mul=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (num != 0) {
        d = num % 10; 
        mul = mul*d;   
        num = num/10;      }
        printf("The product of digits is: %d\n", mul);

    return 0;
}