#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int *array;
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong khong hop le\n");
        return 1;
    }

    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong du bo nho\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i);
        scanf("%d", &array[i]);
    }

    int resurt = sum(array, n);
    printf("Tong cac phan tu trong mang la: %d\n", resurt);
    free(array);
    return 0;
}
