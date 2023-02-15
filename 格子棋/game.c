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
//        |   |      -->>   һ������
//     ---|---|---   -->>  һ�зָ���
//        |   |   
//     ---|---|---
//        |   | 
void Printboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++) //��ӡһ�е�����
		{
			printf(" %c ", board[i][j]);
			if (j< col - 1)
			   printf("|");
		}
		printf("\n");
		if (i < row - 1)  //�ָ���ֻ��ӡ row - 1 ��
		{
			for (j = 0; j < col; j++)   //��ӡ�ָ���
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
	printf("�������\n");
	while (1)
	{
		printf("����������:> ");
		scanf("%d%d", &a, &b);
		if (a >= 1 && a <= ROW && b >= 1 && b <= COL)  //�ж� a,b ����ĺϷ���
		{
			if (board[a-1][b-1] == ' ')
			{
				board[a-1][b-1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã����������롣\n");
			}
		}
		else
		{
			printf("�Ƿ����룬���������룡\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������:>\n");
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

//���� 1 ��ʾ�������ˣ�0 ��ʾû��
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
	for (i = 0; i < ROW; i++)           //������
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; i++)          //������
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}                                              //�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if (1 == Isfull(board, ROW, COL))      //�ж��Ƿ�ƽ��
	{
		return '$';
	}
	return 'C';
}