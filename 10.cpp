#include <stdio.h>

int main() {
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("最大值是 %d\n", a);
    } else {
        printf("最大值是 %d\n", b);
    }

    return 0;
}