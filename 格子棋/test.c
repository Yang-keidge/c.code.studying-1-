#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
#include<Windows.h>
void menu()
{
	printf("***************************************\n");
	printf("***** 1. play         0. exit   *******\n");
	printf("***************************************\n");
}

void game()    //游戏的算法实现
{
	char ret = 0 ;         
	char board[ROW][COL] = {0};                                
	Initboard(board,ROW,COL );      //初始化棋盘
	Printboard(board, ROW, COL);      //打印棋盘
	while (1)
	{
		Plaermove(board, ROW, COL);       //玩家落子
		Printboard(board, ROW, COL);      //打印棋盘
		ret = Iswin(board,ROW,COL);          // -----》  判断并返回结果：
		if (ret != 'C')                    //                 'C ' 继续
		{                                    //                 '* ' 玩家赢 
			break;                           //                 '# ' 电脑赢
		}                                    //                 '$ ' 平局 
		Sleep(300);
		Computermove(board, ROW, COL);    //电脑落子 
		Printboard(board, ROW, COL);      //打印棋盘
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')                    
		{                                 
			break;                  
		}
	}
	if (ret == '*')
	{
		printf("玩家胜利！\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利了，菜狗┗( ▔, ▔ )┛\n");
	}
	else if (ret == '$')
	{
		printf("平局，真逊诶:》\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:》 ");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏。\n");
				break;
			default:
				printf("输入错误，请重试。");
					break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}