#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], res[3][3];
    int i, j, k;
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    int isPossible = 1;
    for(i = 0; i < 3; i++) {
        if(mat1[i][0] != mat2[0][i]) {
            isPossible = 0;
            break;
        }
    }
    
    if(isPossible) {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                res[i][j] = 0;
                for(k = 0; k < 3; k++) {
                    res[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("Result of matrix multiplication:\n");
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication is not possible.\n");
    }

    return 0;
}