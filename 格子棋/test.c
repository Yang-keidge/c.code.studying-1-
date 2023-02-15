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

void game()    //��Ϸ���㷨ʵ��
{
	char ret = 0 ;         
	char board[ROW][COL] = {0};                                
	Initboard(board,ROW,COL );      //��ʼ������
	Printboard(board, ROW, COL);      //��ӡ����
	while (1)
	{
		Plaermove(board, ROW, COL);       //�������
		Printboard(board, ROW, COL);      //��ӡ����
		ret = Iswin(board,ROW,COL);          // -----��  �жϲ����ؽ����
		if (ret != 'C')                    //                 'C ' ����
		{                                    //                 '* ' ���Ӯ 
			break;                           //                 '# ' ����Ӯ
		}                                    //                 '$ ' ƽ�� 
		Sleep(300);
		Computermove(board, ROW, COL);    //�������� 
		Printboard(board, ROW, COL);      //��ӡ����
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')                    
		{                                 
			break;                  
		}
	}
	if (ret == '*')
	{
		printf("���ʤ����\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ���ˣ��˹���( ��, �� )��\n");
	}
	else if (ret == '$')
	{
		printf("ƽ�֣���ѷ��:��\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:�� ");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("������������ԡ�");
					break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}