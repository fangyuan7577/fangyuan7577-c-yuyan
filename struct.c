#include <stdio.h>
#include <time.h>  // 1. 引入时间相关的头文件

struct date {
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	// 2. 获取当前时间的时间戳（从1970年1月1日至今的秒数）
	time_t now = time(NULL);
	
	// 3. 将时间戳转换为本地时间结构体 (struct tm)
	struct tm *local_time = localtime(&now);
	
	// 4. 将系统时间的数据提取出来，赋值给你的 struct date
	struct date today;
	today.year  = local_time->tm_year + 1900; // 注意坑1：tm_year是从1900年开始算的
	today.month = local_time->tm_mon + 1;     // 注意坑2：tm_mon是从0开始算的（0代表1月）
	today.day   = local_time->tm_mday;        // tm_mday 就是正常的 1-31
	char time_str[64];
	strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", local_time);

	// 5. 声明指针
	struct date *pDate = &today;
	
	// 6. 打印
	printf("Today's date is %i-%i-%i.\n",
		today.year, today.month, today.day);
		
	printf("address of today is %p\n", (void*)pDate);
	
	printf("当前系统时间是: %s\n", time_str);
	
	return 0;
}