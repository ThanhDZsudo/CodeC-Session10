#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x, i;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d o vi tri %d\n", x, i);
            return 0;
        }
    }
    printf("Phan tu %d khong ton tai\n", x);
    return 0;
}

