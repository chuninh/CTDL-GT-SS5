#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void getFibonacciSequence(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = fibonacci(i);
    }
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n phai la so nguyen duong!\n");
        return 1;
    }

    int *fiboArr = (int *)malloc(n * sizeof(int));
    if (fiboArr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    getFibonacciSequence(fiboArr, n);

    printf("Day Fibonacci gom %d so dau tien: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fiboArr[i]);
    }
    printf("\n");

    free(fiboArr);
    return 0;
}
