#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������һ�������
//������
void menu()
{
	printf("*****************************\n");
	printf("**1.����Ϸ   0.�˳���Ϸ  ****\n");
	printf("*****************************\n");
}
int ret = 0;
int guess = 0;
void game()
{
	printf("������\n");
	ret = rand() % 100 + 1; //���������
	//printf("%d\n", ret);
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //��ʱ����������������������ʼ��
	do
	{
		menu();
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}