#include <stdio.h>

int main()
{
    int foot;
    int inch;

    printf("请分别输入身高的英尺和英寸:");
    scanf("%d %d", &foot, &inch);
    
    // 计算身高（米）
    float height = (foot + inch / 12.0) * 0.3048;
    
    printf("身高是%f米。\n", height);  // %f 会显示小数点

    return 0;
}
