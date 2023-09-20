#include <stdio.h>
int Add(int a,int b){
    return (a+b);
}
double Average(double a, double b) {
    return (a + b) / 2;
}

int main() {
    double x=6.8,y=3.2;
    int i=8,j=12;
    double avg = Average(x, y);
    int sum = Add(i,j);
    printf("Average of float numbers: %.2lf\n", avg);
    printf("Sum of integer numbers : %d",sum);
    return 0;
}