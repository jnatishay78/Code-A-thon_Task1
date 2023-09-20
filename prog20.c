#include <stdio.h>
void Fib(int ati);
void Fib(int ati) {
    if (ati<=0) {
        printf("Invalid input\n");
        return;}
    if (ati==1) {
        printf("Fibonacci Series : \n");
        return;}
    if (ati==2) {
        printf("Fibonacci Series : \n");
        return;}
    int fibo=0, sum=1,temp,ja;
    printf("Fibonacci Series : %d %d", fibo, sum);

    for (ja = 3; ja <= ati; ++ja) {
        temp = fibo + sum;
        printf(" %d", temp);
        fibo = sum;
        sum = temp;
    }
  printf("\n");}
  
int main() {
    int ati;
    printf("Enter Number : ");
    scanf("%d", &ati);
    Fib(ati);
    return 0;}





