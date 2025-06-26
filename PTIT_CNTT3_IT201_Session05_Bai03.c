#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n==1) return 1;
    return n * factorial(n-1);
}

int main() {
    int n;
    printf("Nhap 1 so duong bat ky: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So ko hop le\n");
        return;
    }
    int result = factorial(n);
    printf("%d",result);
    return 0;
}
