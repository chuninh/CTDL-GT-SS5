#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isPalindrome(char str[],int start,int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end]) {
        return 0;
    }
    return isPalindrome(str,start+1,end-1);


}

int main() {

    char str[100]= "abc dd cba";
    int strLength = strlen(str);
    int result = isPalindrome(str,0,strLength-1);
    if (result == 0) {
        printf("palindrome invalid\n");
    }else {
        printf("palindrome valid\n");
    }
    return 0;
}

