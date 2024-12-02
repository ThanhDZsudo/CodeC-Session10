#include <stdio.h>

void linearSearch(int arr[], int n, int x, int pos[], int *found) {
    *found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            pos[*found] = i;
            (*found)++;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    int pos[n];
    int found;
    linearSearch(arr, n, x, pos, &found);

    if (found > 0) {
        printf("Phan tu %d xuat hien o cac vi tri: ", x);
        printArray(pos, found);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

