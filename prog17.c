#include <stdio.h>
int main() {
    int mat1[2][2], mat2[2][2], sol[2][2];
    printf("Enter elements for matrix 1 :\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            scanf("%d", &mat1[x][y]);} }
 printf("Enter elements of matrix 2 :\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            scanf("%d", &mat2[x][y]); }}
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            sol[x][y] = mat1[x][y] + mat2[x][y];} }
    printf("Sum of matrices:\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            printf("%d ", sol[x][y]);}
        printf("\n"); }
 return 0;}
