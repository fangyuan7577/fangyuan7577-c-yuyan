#include <stdio.h>
enum COLOR {RED, YELLOW, GREEN, NumCOLORS};
int main(int argc, char const *argv[])
{
	int color = -1;
	const char *ColorNames [NumCOLORS] = {
		"red", "yellow", "green",
	};
	const char *colorName = NULL;

	printf("输入你喜欢的颜色的代码：");
	scanf("%d", &color);
	if ( color >=0 && color < NumCOLORS ) {
		colorName = ColorNames[color];
	} else {
		colorName= "unknown";
	}
	printf("你喜欢的颜色是%s\n",colorName);
	return 0;
}