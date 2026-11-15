#include <stdio.h>
// 静态本地变量实际上是特殊的全局变量

int f(void);

int gAll = 12;

int main(int argc, char const *argv[])
{
    f();

    return 0;
}

int f(void)
{
    int k = 0;
    static int all = 1;

    printf("&gAll = %p\n", (void *)&gAll);
    printf("&all  = %p\n", (void *)&all);
    printf("&k    = %p\n", (void *)&k);
    printf("in %s all = %d\n", __func__, all);

    all += 2;

    printf("again in %s all = %d\n", __func__, all);

    return all;
}