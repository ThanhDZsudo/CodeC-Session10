#include <stdio.h>

// H�m s?p x?p n?i b?t
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// H�m in ma tr?n
void printMatrix(int mat[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Nhap so dong cua mang: ");
    scanf("%d", &n);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &m);

    int mat[100][100];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // S?p x?p c�c ph?n t? trong t?ng d�ng
    for (int i = 0; i < n; i++) {
        bubbleSort(mat[i], m);
    }

    printf("Mang sau khi sap xep:\n");
    printMatrix(mat, n, m);

    return 0;
}

