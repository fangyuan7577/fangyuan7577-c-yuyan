// • char * strstr(const char *s1, const char *s2);
// • char * strcasestr(const char *s1, const char *s2);
// strchr(s, c)：查找字符 c 第一次出现的位置。
// strstr(s1, s2)：查找子串 s2 在 s1 中第一次出现的位置。
// strcasestr(s1, s2)：类似 strstr，但忽略大小写，通常是 GNU 扩展。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s, 'l');
	char c = *p;
	*p = '\0';
	char *t = (char*)malloc(strlen(s)+1);
	strcpy(t, s);
	printf("%s\n", t);
	free(t);
	return 0;
}