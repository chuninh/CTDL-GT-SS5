#include <stdio.h>
#include <stdlib.h>

int imporSum(int secondNum ,int firstNum ) {
    if (secondNum == firstNum)
        return firstNum;
    return secondNum + imporSum(secondNum - 1, firstNum);
}

int main() {
    int firstNum;
    int secondNum;
    printf("Nhap so bat dau : ");
    scanf("%d", &firstNum);
    if (firstNum <= 0) {
        printf("So bat dau ko hop le\n");
        return 0;
    }

    printf("Nhap so ket thuc : ");
    scanf("%d", &secondNum);
    if (firstNum > secondNum) {
        printf("So ket thuc ko hop le\n");
        return 0;
    }

    int result = imporSum(secondNum, firstNum);
    printf("Tong la: %d\n", result);
    return 0;
}
