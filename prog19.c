#include <stdio.h>
int main() {
    int rs;
    printf("Enter the Amount to check: ");
    scanf("%d", &rs);
    int denominations[] = {100, 50, 10, 5, 2, 1};
    int Dcount[6] = {0};

    for (int i = 0; i < 6; i++) {
        Dcount[i] = rs / denominations[i];
        rs %= denominations[i];}
    for (int i = 0; i < 6; i++) {
        if (Dcount[i] > 0) {
            printf("Rupees %d notes: %d\n", denominations[i], Dcount[i]); } }
    int Currency = 0;
    for (int i = 0; i < 6; i++) {
        Currency += Dcount[i];}
    printf("No. of notes: %d\n",Currency);
    return 0;
}