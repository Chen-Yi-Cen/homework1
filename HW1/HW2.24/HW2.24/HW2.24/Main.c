#include <stdio.h>
#include<stdlib.h>

int main() {
    int i;
    printf("請輸入一個整數:");
    scanf_s("%d", &i);
    if (i % 2 == 0) {
        printf("%d是偶數", i);
    }
    else {
        printf("%d是奇數", i);
    }
    return 0;
}