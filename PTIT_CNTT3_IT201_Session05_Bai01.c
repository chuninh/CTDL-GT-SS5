#include <stdio.h>
#include <stdlib.h>

void imporArray(int n) {
   if (n==0) return;
    imporArray(n-1);
    printf("%d  ", n);

}



int main() {
    int n;
    printf("Nhap 1 so duong bat ky: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So ko hop le\n");
        return;
    }
    imporArray(n);
    return 0;
}
