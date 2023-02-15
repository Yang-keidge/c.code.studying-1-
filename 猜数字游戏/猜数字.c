#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//电脑生成一个随机数
//猜数字
void menu()
{
	printf("*****************************\n");
	printf("**1.玩游戏   0.退出游戏  ****\n");
	printf("*****************************\n");
}
int ret = 0;
int guess = 0;
void game()
{
	printf("猜数字\n");
	ret = rand() % 100 + 1; //生成随机数
	//printf("%d\n", ret);
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //拿时间戳来设置随机数的生成起始点
	do
	{
		menu();
		printf("请选择: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}