#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int stringToInt(char *str, int index, int len) {
    if (index == len) return 0;

    if (!isdigit(str[index])) {
        printf("ko hop le");
        exit(1);
    }

    return (str[index] - '0') * pow(10, len - index - 1) + stringToInt(str, index + 1, len);
}

int main() {
    char str[100];
    printf("Nhap 1 chuoi so: ");
    scanf(" %[^\n]", str);

    int len = strlen(str);

    int result;
    if (str[0] == '-') {
        result = -stringToInt(str + 1, 0, len - 1);
    } else {
        result = stringToInt(str, 0, len);
    }

    printf("So nguyen sau khi chuyen: %d\n", result);
    return 0;
}
