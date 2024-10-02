#include <stdio.h>
#include<stdlib.h>

int main() {
    int i;
    printf("叫块俱计:");
    scanf_s("%d", &i);
    if (i % 2 == 0) {
        printf("%d琌案计", i);
    }
    else {
        printf("%d琌计", i);
    }
    return 0;
}