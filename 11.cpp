#include <stdio.h>

int main() {
    int a, b, c, t;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    // 第一轮：让 a 和 b 比，小的放 a
    if (a > b) {
        t = a; a = b; b = t;
    }
    // 第二轮：让 a 和 c 比，小的放 a（此时 a 就是最小的）
    if (a > c) {
        t = a; a = c; c = t;
    }
    // 第三轮：让 b 和 c 比，小的放 b（此时 b 是中间值，c 是最大值）
    if (b > c) {
        t = b; b = c; c = t;
    }

    printf("%d小于%d小于%d\n", a, b, c);
    return 0;
}
