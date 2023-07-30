#include <stdio.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matri1[ROWS][COLS], int matri2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matri1[i][j] + matri2[i][j];
        }
    }
}

int main() {
    int matri1[ROWS][COLS];
    int matri2[ROWS][COLS];
    int sumMatrix[ROWS][COLS];

    printf("Enter elements for the first 3x3 matrix:\n");
    inputMatrix(matri1);

    printf("Enter elements for the second 3x3 matrix:\n");
    inputMatrix(matri2);


    addMatrices(matri1, matri2, sumMatrix);

    printf("\nFirst Matrix:\n");
    displayMatrix(matri1);

    printf("\nSecond Matrix:\n");
    displayMatrix(matri2);

    printf("\nSum of Matrices:\n");
    displayMatrix(sumMatrix);
    return 0;
}
