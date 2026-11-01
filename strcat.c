#include <stdio.h>
#include <assert.h>

// 自定义字符串拼接函数
char* my_strcat(char *dest, const char *src)
{
    // 保存目标字符串的起始地址，因为后面dest会向后移动
    char *ret = dest;
    
    // 断言：防止传入空指针
    assert(dest);
    assert(src);

    // 1. 找目标字符串的 '\0'
    while (*dest)
    {
        dest++;
    }
    
    // 2. 源字符串拷贝到目标字符串（包含 '\0'）
    // 当 *src 为 '\0' 时，赋值给 *dest，表达式的值为 0，循环结束
    while (*dest++ = *src++)
    {
        ;
    }
    
    // 返回目标字符串的起始地址
    return ret;
}

int main()
{
    // 注意：目标数组必须足够大，能够容纳拼接后的两个字符串以及 '\0'
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("拼接前: %s\n", dest);
    
    // 调用函数
    my_strcat(dest, src);
    
    printf("拼接后: %s\n", dest);

    return 0;
}