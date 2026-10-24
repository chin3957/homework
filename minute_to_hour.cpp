#include<stdio.h>

#define minutes_per_hour 60
int main (void)
{
	int total_minutes;
	int hours;
	int minutes;
	
	printf("请输入分钟数：");
	scanf("%d",&total_minutes);
	
	while (total_minutes < 0)
	{
		printf("错误，分钟数不能为负数，请输入正确的形式：");
		scanf("%d",&total_minutes);
	}
	
	hours = total_minutes / minutes_per_hour;
	minutes = total_minutes % minutes_per_hour;
	
	printf("%d 分钟 = %d 小时 %d 分钟\n",total_minutes,hours,minutes);
	
	return 0;
}
