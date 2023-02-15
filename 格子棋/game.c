#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)                                                      
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}

	}
}
//        |   |      -->>   一行数据
//     ---|---|---   -->>  一行分隔符
//        |   |   
//     ---|---|---
//        |   | 
void Printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++) //打印一行的数据
		{
			printf(" %c ", board[i][j]);
			if (j< col - 1)
			   printf("|");
		}
		printf("\n");
		if (i < row - 1)  //分隔符只打印 row - 1 行
		{
			for (j = 0; j < col; j++)   //打印分隔符
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}          
	}

}

void Plaermove(char board[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	printf("玩家落子\n");
	while (1)
	{
		printf("请输入坐标:> ");
		scanf("%d%d", &a, &b);
		if (a >= 1 && a <= ROW && b >= 1 && b <= COL)  //判断 a,b 坐标的合法性
		{
			if (board[a-1][b-1] == ' ')
			{
				board[a-1][b-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入。\n");
			}
		}
		else
		{
			printf("非法输入，请重新输入！\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑落子:>\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//返回 1 表示棋盘满了，0 表示没满
int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)           //横三列
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; i++)          //竖三列
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}                                              //两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if (1 == Isfull(board, ROW, COL))      //判断是否平局
	{
		return '$';
	}
	return 'C';
}