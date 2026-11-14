#include <stdio.h>

int main(int argc, char const *argv[])
{
	// \b回退一格 \t到下一个表格位 \n换行 \r回车 
	// \"双引号 \'单引号 \\反斜杠本身
	printf("123\bA\n456\n");
	printf("123\t456\n");
	printf("12\t456\n");
	return 0;
}