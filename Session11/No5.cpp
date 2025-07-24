#include <stdio.h>

int main() {
    int A[3][4] = {1, 3, 2, 4, 5, 7, 6, 8, 9, 11, 12}; // 12 elemen
    int B[3][3] = {
        {1, 2},       
        {3, 4, 5},
        {7}           
	};
    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
	printf("\n");
    printf("Matrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("a. A[1][1] = %d\n", A[1][1]);
    printf("b. B[2][2] = %d\n", B[2][2]);
    printf("c. A[2][3] = %d(undefine)\n", A[2][3]);
    printf("d. B[0][1] = %d\n", B[0][1]);
    printf("e. A[0][2] = %d\n", A[0][2]);

    return 0;
}

