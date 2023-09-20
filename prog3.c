#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n<=1) {
        return false;}
    for (int a=2;a*a<=n;a++) {
        if (n%a==0) {
            return false;
        }}
    return true;
}
    
int main() {
    int start,end;
    printf("Enter the starting value of a range: ");
    scanf("%d", &start);
    printf("Enter the ending value of a range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);}}
    printf("\n");
    return 0;}