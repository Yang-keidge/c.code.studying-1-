#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

int main()
{   //打印9x9的乘法口诀表
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d = %-2d ", i, j, i * j);
		printf("\n");      //这里“2”表示打印两位，“-”表示向左对齐
		Sleep(800);
	}
	return 0;
}