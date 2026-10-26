#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int read_int(void)
{
	int v;
	while(scanf("%d",&v) != 1)
	{
		while(getchar() !='\n');
		printf("不是整数，再来：");
	}
	return v;
}

int main(void)
{
	srand((unsigned int) time(NULL));
	int num = rand() % 100 + 1;
	int tries = 0;
	int guess;
	
	while(1)
	{
		printf("请输入你猜的数字：\n");
		//printf("%d",num); 直接给出猜的数字，测试代码是否出错 
		guess = read_int();
		
		if(guess > num)
		{
			printf("太大了");
			tries++;
		}
		else if(guess < num)
		{
			printf("太小了");
			tries++;
		}
		else
		{
			printf("恭喜猜对，在此之前，你猜了%d次",tries);
			break; 
		}
	}
	return 0;
}
