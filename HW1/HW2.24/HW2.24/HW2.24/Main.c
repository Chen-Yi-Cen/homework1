#include <stdio.h>
#include<stdlib.h>

int main() {
    int i;
    printf("�п�J�@�Ӿ��:");
    scanf_s("%d", &i);
    if (i % 2 == 0) {
        printf("%d�O����", i);
    }
    else {
        printf("%d�O�_��", i);
    }
    return 0;
}