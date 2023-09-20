#include <stdio.h>
int main() {
int n;
long cube = 1;
printf("Enter a number: ");
scanf("%d", &n);
for (int a = 1; a <= 3; a++) {
cube = cube * n;}
printf("Cube of %d is %ld\n", n, cube);
return 0;}