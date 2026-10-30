#include <stdio.h>

int main() {
    int n;
    long long result = 1;  // 用 long long 防止结果太大溢出

    printf("请输入一个正整数：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    printf("%d! = %lld\n", n, result);
    return 0;
}