#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

int main()
{   //��ӡ9x9�ĳ˷��ھ���
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d = %-2d ", i, j, i * j);
		printf("\n");      //���2����ʾ��ӡ��λ����-����ʾ�������
		Sleep(800);
	}
	return 0;
}